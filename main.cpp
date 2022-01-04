#include <iostream>
#include "include/AllAlgorithms.h"
#include <string>
#include <memory>

int main()
{
    std::string str1 = "第五编党派社团";
    std::string str2 = "第五编 兄7}氏社团";

    std::unique_ptr<LargestCommonSubstring> ptrLCS(new LargestCommonSubstring(str1, str2, true));
    int comSubStringNum = ptrLCS->process();
    std::cout << "两个字符串的最大公共子串所含字符数: " <<comSubStringNum << std::endl;



    return 0;
}
