//
// Created by zxl on 2022/1/4.
//
#include "Utility.h"
//#include <windows.h>
#include <string>
#include <locale>
#include <codecvt>

//std::string limeflavour::UTF8_To_string(const std::string& str)
//{
//    int nwLen = MultiByteToWideChar(CP_UTF8, 0, str.c_str(), -1, NULL, 0);
//    wchar_t* pwBuf = new wchar_t[nwLen + 1];    //一定要加1，不然会出现尾巴
//    memset(pwBuf, 0, nwLen * 2 + 2);
//    MultiByteToWideChar(CP_UTF8, 0, str.c_str(), str.length(), pwBuf, nwLen);
//    int nLen = WideCharToMultiByte(CP_ACP, 0, pwBuf, -1, NULL, NULL, NULL, NULL);
//    char* pBuf = new char[nLen + 1];
//    memset(pBuf, 0, nLen + 1);
//    WideCharToMultiByte(CP_ACP, 0, pwBuf, nwLen, pBuf, nLen, NULL, NULL);
//
//    std::string strRet = pBuf;
//
//    delete[]pBuf;
//    delete[]pwBuf;
//    pBuf = NULL;
//    pwBuf = NULL;
//
//    return strRet;
//}
////string转写入xml中的中文
//std::string limeflavour::string_To_UTF8(const std::string & str)
//{
//    int nwLen = ::MultiByteToWideChar(CP_ACP, 0, str.c_str(), -1, NULL, 0);
//
//    wchar_t * pwBuf = new wchar_t[nwLen + 1];//一定要加1，不然会出现尾巴
//    ZeroMemory(pwBuf, nwLen * 2 + 2);
//
//    ::MultiByteToWideChar(CP_ACP, 0, str.c_str(), str.length(), pwBuf, nwLen);
//
//    int nLen = ::WideCharToMultiByte(CP_UTF8, 0, pwBuf, -1, NULL, NULL, NULL, NULL);
//
//    char * pBuf = new char[nLen + 1];
//    ZeroMemory(pBuf, nLen + 1);
//
//    ::WideCharToMultiByte(CP_UTF8, 0, pwBuf, nwLen, pBuf, nLen, NULL, NULL);
//
//    std::string retStr(pBuf);
//
//    delete[]pwBuf;
//    delete[]pBuf;
//
//    pwBuf = NULL;
//    pBuf = NULL;
//
//    return retStr;
//}

//string转wtring（宽字符）
std::wstring limeflavour::string_To_wstring(std::string &str)
{
    using convert_typeX = std::codecvt_utf8<wchar_t>;
    std::wstring_convert<convert_typeX, wchar_t> converterX;

    return converterX.from_bytes(str);
}
//wstring(宽字符)转string
std::string limeflavour::wstring_To_string(std::wstring &wstr)
{
    using convert_typeX = std::codecvt_utf8<wchar_t>;
    std::wstring_convert<convert_typeX, wchar_t> converterX;

    return converterX.to_bytes(wstr);
}

int limeflavour::min(int x, int y)
{
    return x < y ? x : y;
}

bool limeflavour::wIsEqual(const wchar_t &a, const wchar_t &b)
{
    if (a == b)
    {
        return true;
    }
    else
    {
        return false;
    }
}
