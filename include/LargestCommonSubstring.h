//
// Created by zxl on 2022/1/4.
//

#ifndef STRINGALGORITHMS_LARGESTCOMMONSUBSTRING_H
#define STRINGALGORITHMS_LARGESTCOMMONSUBSTRING_H

#include "StringAlgotithms.h"
#include <string>
#include <utility>

class LargestCommonSubstring : public StringAlgorithms
{
public:
    LargestCommonSubstring() = default;

//    LargestCommonSubstring(std::string _str1, std::string _str2, bool _removeSpaces = false) : str1(std::move(_str1)), str2(std::move(_str2)), removeSpaces(_removeSpaces)
//    {
//
//    }

    ~LargestCommonSubstring() = default;

    int process(std::string _str1, std::string _str2, bool _removeSpaces) override;
};

#endif //STRINGALGORITHMS_LARGESTCOMMONSUBSTRING_H
