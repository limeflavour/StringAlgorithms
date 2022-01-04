//
// Created by Administrator on 2022/1/4.
//

#ifndef STRINGALGORITHMS_UTILITY_H
#define STRINGALGORITHMS_UTILITY_H
#include <string>

namespace limeflavour
{
//UTF8תstring
    std::string UTF8_To_string(const std::string &str);

//stringתUTF8
    std::string string_To_UTF8(const std::string &str);

//stringתwtring�����ַ���
    std::wstring string_To_wstring(std::string &sTitle);

//wstring(���ַ�)תstring
    std::string wstring_To_string(std::wstring &wsTitle);
}

#endif //STRINGALGORITHMS_UTILITY_H
