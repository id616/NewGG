#ifndef END_my_m_MT_R_1che1pao1pawn_B_1pao2ma
#define END_my_m_MT_R_1che1pao1pawn_B_1pao2ma
#include "../../chess.h"
#include "../../preGen.h"
 
#include "../../endgame/mat.h"
#include "1车1炮1兵对1炮2马.cpp"
#include "../../white.h"
#else
#include "../../black.h"
#endif 



void my_m_MT_R_1che1pao1pawn_B_1pao2ma(typePOS &POSITION, EvalInfo &ei){

	// ADD
	Square yk = your_king_pos;
	Bitboard bmp = m_and(bb_my_pawn,MyLowBB[StoY(yk)]);
	int pmok = (int)count_1s(bmp);
	MY_EV_ADD(pmok * ADD_ChePaoXPawn_To_1Pao2Ma_ByPawn[your_shi_num]);
}

