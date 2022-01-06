//
// Created by zxl on 2022/1/4.
//

#ifndef STRINGALGORITHMS_DIFFCHARANUM_H
#define STRINGALGORITHMS_DIFFCHARANUM_H

#include "StringAlgotithms.h"
#include <string>

class DiffCharaNum : public StringAlgorithms
{
public:
    DiffCharaNum() = default;

//    DiffCharaNum(std::string _str1, std::string _str2, bool _removeSpaces = false) : str1(std::move(_str1)), str2(std::move(_str2)), removeSpaces(_removeSpaces)
//    {
//
//    }

    int process(std::string _str1, std::string _str2, bool _removeSpaces = false) override;

    ~DiffCharaNum() = default;
};

#endif //STRINGALGORITHMS_DIFFCHARANUM_H
