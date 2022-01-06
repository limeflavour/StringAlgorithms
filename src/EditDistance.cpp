//
// Created by zxl on 2022/1/6.
//
#include "EditDistance.h"
#include <string>
#include "Utility.h"
#include <iostream>
#include "boost/algorithm/string_regex.hpp"
#include <vector>

int EditDistance::process(std::string _str1, std::string _str2, bool _removeSpaces = false)
{
    if (_str1.empty() && _str2.empty())
    {
        std::cout << "str1 and str2 is empty" << std::endl;
        return 0;
    }

    if (_removeSpaces)
    {
        boost::replace_all(_str1, " ", "");
        boost::replace_all(_str2, " ", "");
    }

    std::wstring wstr1 = limeflavour::string_To_wstring(_str1);
    std::wstring wstr2 = limeflavour::string_To_wstring(_str2);

    size_t n = wstr1.length();
    size_t m = wstr2.length();

    if (n * m == 0)
    {
        return n + m;
    }

    std::vector<std::vector<int>> DP(n + 1, std::vector<int>(m + 1, 0));

    for (int i = 0; i < n + 1; i++)
    {
        DP[i][0] = i;
    }
    for (int j = 0; j < m + 1; j++)
    {
        DP[0][j] = j;
    }

    for (int i = 1; i < n + 1; i++)
    {
        for (int j = 1; j < m + 1; j++)
        {
            int d;
            if (wstr1[i - 1] == wstr2[j - 1])
            {
                d = 0;
            }
            else
            {
                d = 1;
            }
            DP[i][j] = limeflavour::min(DP[i - 1][j] + 1, limeflavour::min(DP[i][j - 1] + 1, DP[i - 1][j - 1] + d));
        }
    }
    return DP[n][m];
}