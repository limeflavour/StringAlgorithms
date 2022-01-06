//
// Created by zxl on 2022/1/6.
//

#ifndef STRINGALGORITHMS_EDITDISTANCE_H
#define STRINGALGORITHMS_EDITDISTANCE_H
#include "StringAlgotithms.h"
#include <string>
class EditDistance : public StringAlgorithms
{
public:
    EditDistance() = default;
    ~EditDistance() = default;
    int process(std::string _str1, std::string _str2, bool _removeSpaces) override;
};
#endif //STRINGALGORITHMS_EDITDISTANCE_H
