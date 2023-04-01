//---------------------------------------------------------------------------
#ifndef FuzzyOpH
#define FuzzyOpH
//---------------------------------------------------------------------------
#include "AlphaLevelFuzzy.hpp"

class FuzzyOp {
private:
	AlphaLevelFuzzy op1;//operand 1
	AlphaLevelFuzzy op2;//operand 2
	AlphaLevelFuzzy res;//result 
public:
	FuzzyOp() {};
	FuzzyOp(AlphaLevelFuzzy op1, AlphaLevelFuzzy op2);
	~FuzzyOp() {};

	void setOp1(AlphaLevelFuzzy op);
	void setOp2(AlphaLevelFuzzy op);
	AlphaLevelFuzzy getOp1();
	AlphaLevelFuzzy getOp2();
	void run();
	AlphaLevelFuzzy getResult();
};

#endif
