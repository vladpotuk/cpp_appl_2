#include <iostream>
#include <Windows.h>

int main() {
    system("chcp 1251");
    system("cls");
    int number;
    int* ptr;

    std::cout << "������ �����: ";
    std::cin >> number;

    ptr = &number;

    if (*ptr > 0) {
        std::cout << "����� ���������." << std::endl;
    }
    else if (*ptr < 0) {
        std::cout << "����� ��'����." << std::endl;
    }
    else {
        std::cout << "����� ���� ����." << std::endl;
    }

    return 0;
}
