//
// Created by zxl on 2022/1/4.
//
#include "LargestCommonSubstring.h"
#include "Utility.h"
#include <vector>
#include <string>
#include <iostream>
#include "boost/algorithm/string_regex.hpp"

int LargestCommonSubstring::process(std::string _str1, std::string _str2, bool _removeSpaces)
{

    if (_str1.empty() || _str2.empty())
    {
        std::cout << "str1 or str2 is empty" << std::endl;
        return 0;
    }

    if (_removeSpaces)
    {
        boost::replace_all(_str1, " ", "");
        boost::replace_all(_str2, " ", "");
    }

    std::wstring wstr1 = limeflavour::string_To_wstring(_str1);
    std::wstring wstr2 = limeflavour::string_To_wstring(_str2);

    int len1 = wstr1.length();
    int len2 = wstr2.length();
    int maxLength = 0;

    std::vector<std::vector<int>> DP(len1, std::vector<int>(len2, 0));

    for (int i = 0; i < len1; i++)
    {
        for (int j = 0; j < len2; j++)
        {
            if (wstr1[i] == wstr2[j])
            {
                if (i > 0 && j > 0)
                {
                    DP[i][j] = DP[i - 1][j - 1] + 1;
                }
                else
                {
                    DP[i][j] = 1;
                }

                maxLength = std::max(maxLength, DP[i][j]);
            }
            else
            {
                DP[i][j] = 0;
            }
        }
    }
    return maxLength;
}
