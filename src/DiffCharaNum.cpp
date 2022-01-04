//
// Created by zxl on 2022/1/4.
//
#include "StringAlgotithms.h"
#include "Utility.h"
#include "DiffCharaNum.h"
#include <string>
#include <set>
#include <iostream>
#include <boost/algorithm/string_regex.hpp>

int DiffCharaNum::process()
{
    if (str1.empty() || str2.empty())
    {
        std::cout << "str1 or str2 is empty" << std::endl;
        return 0;
    }

    if (removeSpaces)
    {
        boost::replace_all(str1, " ", "");
        boost::replace_all(str2, " ", "");
    }


    std::wstring wstr1 = limeflavour::string_To_wstring(str1);
    std::wstring wstr2 = limeflavour::string_To_wstring(str2);

//    int len1 = wstr1.length();
//    int len2 = wstr2.length();

    std::set<wchar_t> setWstr2;

    for (auto ws2 : wstr2)
    {
        (void)setWstr2.insert(ws2);
    }

    int count = 0;
    for (auto ws1 : wstr1)
    {
        if (setWstr2.count(ws1) == 0)
        {
            count += 1;
        }
        else
        {
            continue;
        }

    }
    return count;
}
