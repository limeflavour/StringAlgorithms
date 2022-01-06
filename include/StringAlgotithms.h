//
// Created by zxl on 2022/1/4.
//

#ifndef STRINGALGORITHMS_STRINGALGOTITHMS_H
#define STRINGALGORITHMS_STRINGALGOTITHMS_H

#include <string>

class StringAlgorithms
{
public:
    virtual int process(std::string _str1, std::string _str2, bool _removeSpaces) = 0;
    virtual int process(std::string _str1, bool _removeSpaces) = 0;
};

#endif //STRINGALGORITHMS_STRINGALGOTITHMS_H
