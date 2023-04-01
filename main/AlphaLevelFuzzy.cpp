#include "AlphaLevelFuzzy.hpp"
#include <iostream>
#include <iomanip>
using namespace std;

AlphaLevelFuzzy::AlphaLevelFuzzy() {
};

void AlphaLevelFuzzy::Parabola2AlphaLevel(double max, double w) {

    double a = -1 / std::pow(w, 2);

    for (int i = 0; i < LN; i++)
    {
        double alpha = i * (1 / ((double)LN - 1));
        double b = a * max * 2 * (-1);
        double c = std::pow(max, 2) * a + 1 - alpha;
        double x1 = (-1 * b + sqrt(b * b - 4 * a * c)) / (2 * a);
        double x2 = (-1 * b - sqrt(b * b - 4 * a * c)) / (2 * a);
        this->level[i].mf = alpha;
        this->level[i].lv = x1;
        this->level[i].rv = x2;
    }
};



void AlphaLevelFuzzy::print()
{
    std::cout << std::setw(10) << left << "#" << std::setw(10) << left << "f(x)" << std::setw(10) << left << "left" << std::setw(10) << left << "right" << endl;

    for (int i = 0; i < LN; i++)
    {
        std::cout << std::setw(10) << left << i << std::setw(10) << left << (double)this->level[i].mf << std::setw(10) << left << this->level[i].lv << std::setw(10) << left << this->level[i].rv << endl;
    }
};

