#include <iostream>
#include "include/AllAlgorithms.h"
#include <string>
#include <memory>

int main()
{
    std::string str1 = "第五编党派社团";
    std::string str2 = "第五编 兄7}氏社团";

    std::unique_ptr<LargestCommonSubstring> ptr(new LargestCommonSubstring(str1, str2, true));

    int comSubStringNum = ptr->process();

    std::cout << comSubStringNum << std::endl;

    return 0;
}
