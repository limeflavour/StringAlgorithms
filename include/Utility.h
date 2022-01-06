//
// Created by zxl on 2022/1/4.
//

#ifndef STRINGALGORITHMS_UTILITY_H
#define STRINGALGORITHMS_UTILITY_H
#include <string>

namespace limeflavour
{
//UTF8转string
    std::string UTF8_To_string(const std::string &str);

//string转UTF8
    std::string string_To_UTF8(const std::string &str);

//string转wtring（宽字符）
    std::wstring string_To_wstring(std::string &str);

//wstring(宽字符)转string
    std::string wstring_To_string(std::wstring &wstr);

    int min(int x, int y);

    bool wIsEqual(const wchar_t& a, const wchar_t& b);
}

#endif //STRINGALGORITHMS_UTILITY_H
