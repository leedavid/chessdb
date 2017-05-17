
#include<stdio.h>
#include<stdlib.h>
#include "zobrist.h"

Zobrist::Zobrist()
{
	FILE *fp;
	fp = fopen("/dev/urandom", "rb");
	fread(m_ZobristTable, 1, sizeof(m_ZobristTable), fp);
	fread(&m_ZobristPlayer, 1, sizeof(m_ZobristPlayer), fp);
	fclose(fp);
}
uint64 Zobrist::GetPosKey(char* board, int turn)
{
	char piece;
	uint64 key = 0ULL;

	for (int i = 0; i < 90; ++i)
	{
		if (piece = board[i])
			key ^= m_ZobristTable[(piece - 1) * 90 + i];
	}
	if (turn == 0)
		key ^= m_ZobristPlayer;
	return (key & 0x7FFFFFFFFFFFFFFFULL);
}
