#include "YourOp.hpp"
#include "AlphaLevelFuzzy.hpp"
#include <iostream>
//---------------------------------------------------------------------------
using namespace std;
#pragma argsused
int main(int argc, char* argv[])
{

	AlphaLevelFuzzy a, b, c, d;
	YourOp AddOp, DilatOp;
	a.Parabola2AlphaLevel(5, 3);
	b.Parabola2AlphaLevel(4, 2);

	std::cout << endl << "a:" << endl;
	a.print();
	std::cout << endl << "b:" << endl;
	b.print();

	AddOp.setOp1(a);
	AddOp.setOp2(b);
	c = AddOp.addition();
	std::cout << endl << "Addition:" << endl;
	c.print();

	DilatOp.setOp1(a);
	d = DilatOp.Dilat();
	std::cout << endl << "Dilatation:" << endl;
	d.print();

	return 0;
}
//---------------------------------------------------------------------------
