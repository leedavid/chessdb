#ifndef _ZOBRIST_H_
#define _ZOBRIST_H_

#include "type.h"

class Zobrist {
public:
    Zobrist();
	uint64 GetPosKey(char* board, int turn);
private:
	uint64 m_ZobristPlayer;
	uint64 m_ZobristTable[14 * 90];
};

#endif