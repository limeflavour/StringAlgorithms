#include <iostream>
#include "include/AllAlgorithms.h"
#include <string>
#include <memory>

int main()
{
    std::string str1 = "第五编党派社团";
    std::string str2 = "第五编 兄7}氏社团";

    std::cout << "str1: " << str1 << std::endl;
    std::cout << "str2: " << str2 << std::endl;

    std::unique_ptr<LargestCommonSubstring> ptrLCS(new LargestCommonSubstring(str1, str2, true));
    int comSubStringNum = ptrLCS->process();
    std::cout << "两个字符串的最大公共子串所含字符数: " <<comSubStringNum << std::endl;

    std::unique_ptr<DiffCharaNum> ptrDCN(new DiffCharaNum(str1, str2, true));
    int diffNum = ptrDCN->process();
    std::cout << "两个字符串所含不同字符数量: " << diffNum << std::endl;

    //(void)system("pause");

    return 0;
}
