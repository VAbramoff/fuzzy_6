#include "FuzzyOp.hpp"

void FuzzyOp::setOp1(AlphaLevelFuzzy op) {
	op1 = op;
};

void FuzzyOp::setOp2(AlphaLevelFuzzy op) {
	op2 = op;
};

void FuzzyOp::run() {

};

AlphaLevelFuzzy FuzzyOp::getResult() {
	return res;
};

AlphaLevelFuzzy FuzzyOp::getOp1() {
	return op1;
};

AlphaLevelFuzzy FuzzyOp::getOp2() {
	return op2;
};
