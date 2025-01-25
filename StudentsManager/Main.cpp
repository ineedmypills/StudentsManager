#include <Windows.h>
#include <cstdlib>
#include <iostream>
#include "Student.hpp"

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    srand(time(NULL));

    const int size = 1;
    Student rpo_11[size];
    for (size_t i = 0; i < size; i++) {
        rpo_11[i].SetAllInformation();
    }
    for (size_t i = 0; i < size; i++) {
        rpo_11[i].ShowInfo();
    }
    return 0;
}