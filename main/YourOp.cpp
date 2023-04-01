#include "YourOp.hpp"
#include <iostream>
#include <cmath>
using namespace std;
AlphaLevelFuzzy YourOp::run() {
    return getResult();
};

AlphaLevelFuzzy YourOp::addition() {

    AlphaLevelFuzzy res;
    AlphaLevelFuzzy a = this->getOp1();
    AlphaLevelFuzzy b = this->getOp2();

    for (int i = 0; i < LN; i++)
    {
        res.level[i].mf = a.level[i].mf;
        res.level[i].lv = a.level[i].lv + b.level[i].lv;
        res.level[i].rv = a.level[i].rv + b.level[i].rv;
    }

    return res;
};

AlphaLevelFuzzy YourOp::Dilat()
{
    AlphaLevelFuzzy op1 = this->getOp1();

    AlphaLevelFuzzy res;

    for (int i = 0; i < LN; i++)
    {
        res.level[i].mf = std::sqrt(op1.level[i].mf);
        res.level[i].lv = op1.level[i].lv;
        res.level[i].rv = op1.level[i].rv;
    }

    AlphaLevelFuzzy recalculated_levels_res;
    for (int i = 0; i < LN; i++)
    {
        double func_value = i * (1 / ((double)LN - 1));

        int j = 1;

        for (; j < LN; j++)
        {
            if (res.level[j].mf > func_value)
            {
                break;
            }
        }
        recalculated_levels_res.level[i].mf = func_value;
        double l_k = (res.level[j].mf - res.level[j - 1].mf) / (res.level[j].lv - res.level[j - 1].lv);
        double l_b = res.level[j].mf - l_k * res.level[j].lv;
        recalculated_levels_res.level[i].lv = (func_value - l_b) / l_k;

        double r_k = (res.level[j].mf - res.level[j - 1].mf) / (res.level[j].rv - res.level[j - 1].rv);
        double r_b = res.level[j].mf - r_k * res.level[j].rv;
        recalculated_levels_res.level[i].rv = (func_value - r_b) / r_k;
    }

    return recalculated_levels_res;
};