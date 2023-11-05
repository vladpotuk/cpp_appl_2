#include <iostream>
#include <Windows.h>

int main() {
    system("chcp 1251");
    system("cls");
    int number;
    int* ptr;

    std::cout << "¬вед≥ть число: ";
    std::cin >> number;

    ptr = &number;

    if (*ptr > 0) {
        std::cout << "„исло позитивне." << std::endl;
    }
    else if (*ptr < 0) {
        std::cout << "„исло в≥д'Їмне." << std::endl;
    }
    else {
        std::cout << "„исло р≥вне нулю." << std::endl;
    }

    return 0;
}
