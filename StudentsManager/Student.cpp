#include "Student.hpp"
#include <cstdlib>
#include <iostream>

Student::Student() {}

Student::Student(int age) {
    this->age = age;
}

void Student::RefreshFullName() {
    fullName = lastName + " " + firstName + " " + surName;
}

void Student::PrintGroupNames() {
    for (size_t i = 0; i < 5; i++) {
        std::cout << groupNameArr[i] << std::endl;
    }
}

void Student::PrintMarks() {
    for (size_t i = 0; i < size; i++) {
        std::cout << "������ " << i + 1 << ": " << marks[i] << "\n";
    }
}

void Student::SetAge(int age) {
    this->age = age;
}

void Student::SetFirstName(std::string firstName) {
    this->firstName = firstName;
}

void Student::SetLastName(std::string lastName) {
    this->lastName = lastName;
}

void Student::SetSurName(std::string surName) {
    this->surName = surName;
}

void Student::SetFullName(std::string firstName, std::string lastName, std::string surName) {
    fullName = lastName + " " + firstName + " " + surName;
}

void Student::SetGroupName(std::string groupName) {
    this->groupName = groupName;
}

void Student::SetGroupNumber(int groupNumber) {
    this->groupNumber = groupNumber;
}

void Student::SetMark(int mark, int marksArr[], int index) {
    if (index >= 0 && index < this->size) {
        marksArr[index] = mark;
    }
    else {
        std::cerr << "ArrOutOfRange";
    }
}

void Student::SetStudentMarks() {
    double average{};
    std::cout << "���������� ������ �������� " << GetFullName() << ":\n";
    for (size_t i = 0; i < size; i++) {
        std::cout << "������ " << i + 1 << ": ";
        std::cin >> marks[i];
        average += marks[i];
    }
    average /= size;
    if (average < 3.0) {
        isStudent = false;
        std::cout << "������� ��������!\n";
    }
    else {
        if (isStudent == false) {
            isStudent = true;
            std::cout << "������� ������������!\n";
        }
    }
}

void Student::SetAllInformation() {
    std::cout << "���������� ������ ��������\n\n";
    std::cout << "��� ��������: ";
    std::cin >> firstName;
    std::cout << "������� ��������: ";
    std::cin >> lastName;
    std::cout << "�������� ��������: ";
    std::cin >> surName;
    std::cout << "�������: ";
    std::cin >> age;
    RefreshFullName();
    PrintGroupNames();
    std::cout << "������� ��������: ";
    std::cin >> groupName;
    std::cout << "����� ������ ��������: ";
    std::cin >> groupNumber;
    SetStudentMarks();
}

int Student::GetAge() {
    return age;
}

std::string Student::GetFirstName() {
    return firstName;
}

std::string Student::GetLastName() {
    return lastName;
}

std::string Student::GetSurName() {
    return surName;
}

std::string Student::GetGroupName() {
    return groupName;
}

std::string Student::GetFullName() {
    return fullName;
}

int Student::GetGroupNumber() {
    return groupNumber;
}

void Student::ShowInfo() {
    std::cout << "�������: " << age << std::endl;
    std::cout << "���: " << fullName << std::endl;
    std::cout << "������: " << groupName << "-" << groupNumber << std::endl;
    PrintMarks();
    std::cout << "������ ��������: " << std::endl;
    if (isStudent) {
        std::cout << "�����-��������!" << std::endl;
    }
    else {
        std::cout << "̸���." << std::endl;
    }
}