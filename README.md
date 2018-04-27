The purpose of this project is to perform automated opening book building for Chess.

I have provided some code snippets from my Xiangqi version, however porting to Chess is not yet started.

Here are the necessary things that need to be done:

1. A PHP extension to handle FEN validation, nomalization, conversion to compact DB format and move generation.
Reference:
db_bench_util/ccboard

2. A PHP frontend driver to handle API requests, both for workers and end users. Note that it may be simpler for Chess because repetition rules are less complicated than those in Xiangqi.
Reference:
chessdb.php

3. Two kinds of worker adapters need board and UCI operation adjustments for Chess, and a custom engine build to perform move sieving.
Reference:
ChessDBClient
ChessDBSel

4. An end-user move discovery tool for community contributions.
Reference:
ChessDBDiscover

5. Various miscellaneous helper scripts to manupilate task queues, formula used might need some tuning for Chess centi-pawn scoring.
Reference:
advance.php
advance2.php
update.php


