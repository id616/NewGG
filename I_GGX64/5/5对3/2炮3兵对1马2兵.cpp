#ifndef END_my_m_MT_R_2pao3pawn_B_1ma2pawn
#define END_my_m_MT_R_2pao3pawn_B_1ma2pawn
#include "../../chess.h"
#include "../../preGen.h"
 
#include "../../endgame/mat.h"
#include "2炮3兵对1马2兵.cpp"
#include "../../white.h"
#else
#include "../../black.h"
#endif 
//const int _OnlyOnePawnCanOverRiver = 96; 
//const int  ADD_2PaoXPawn_1Ma2Pawn_ByPawn[3]         = {96, 64, 32};            //2炮兵对1马2兵, 多兵的加分
//const int  ADD_1Ma2Pawn_2PaoXPawn_ByPawn[3]         = {96, 64, 32};            //1马2兵对2炮兵, 多兵的加分

 void my_m_MT_R_2pao3pawn_B_1ma2pawn(typePOS &POSITION, EvalInfo &ei){

	 Square yk = your_king_pos;
	 // ADD
	 Bitboard bmp = m_and(bb_my_pawn,MyLowBB[StoY(yk)]);
	 MY_EV_ADD((sint16)count_1s(bmp) * ADD_2PaoXPawn_1Ma2Pawn_ByPawn[your_shi_num]);

	 // SUB
	 Bitboard ymp = m_and(bb_your_pawn,MyUpBB[StoY(my_king_pos)]);
	 MY_EV_SUB((sint16)count_1s(ymp) * ADD_1Ma2Pawn_2PaoXPawn_ByPawn[my_shi_num]);
 }
// void m_MT_B_2pao3pawn_R_1ma2pawn(typePOS &POSITION, EvalInfo &ei){
///*
//	Square bk = PieceListStart(board,BKING);
//	
//	for(int from = PieceListStart(board,RPAWN); from > 0x32; from = NextPiece(board,from)){
//		if(StoY(from) > StoY(bk)){
//			board->mulScore += ADD_1Ma2Pawn_2PaoXPawn_ByPawn[board->B_shi];
//		}
//	}
//
//	Square rk = PieceListStart(board,RKING);
//	
//	for(int from = PieceListStart(board,BPAWN); from > 0x32; from = NextPiece(board,from)){
//		if(StoY(from) < StoY(rk)){
//			board->mulScore -= ADD_2PaoXPawn_1Ma2Pawn_ByPawn[board->R_shi];
//		}
//	}
//
//	 */
// }