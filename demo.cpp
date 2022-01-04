#include <iostream>
#include "include/AllAlgorithms.h"
#include <string>
#include <memory>

int main()
{
    std::string str1 = "����൳������";
    std::string str2 = "����� ��7}������";

    std::cout << "str1: " << str1 << std::endl;
    std::cout << "str2: " << str2 << std::endl;

    std::unique_ptr<LargestCommonSubstring> ptrLCS(new LargestCommonSubstring(str1, str2, true));
    int comSubStringNum = ptrLCS->process();
    std::cout << "�����ַ�������󹫹��Ӵ������ַ���: " <<comSubStringNum << std::endl;

    std::unique_ptr<DiffCharaNum> ptrDCN(new DiffCharaNum(str1, str2, true));
    int diffNum = ptrDCN->process();
    std::cout << "�����ַ���������ͬ�ַ�����: " << diffNum << std::endl;

    return 0;
}
