//---------------------------------------------------------------------------
#ifndef AlphaLevelFuzzyH
#define AlphaLevelFuzzyH   
//---------------------------------------------------------------------------
#define LN 11 //Default number of levels

struct datum {
	double mf; //Level of Memebership Function
	double lv; //Left alpha level Value
	double rv; //right alpha level Value
};


class AlphaLevelFuzzy {
public:
	datum level[LN];

	AlphaLevelFuzzy();

	void Parabola2AlphaLevel(double max, double w);

	void print();

	~AlphaLevelFuzzy() {}
};

#endif
