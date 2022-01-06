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

int DiffCharaNum::process(std::string _str1, std::string _str2, bool _removeSpaces)
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
