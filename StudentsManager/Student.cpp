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
        std::cout << "Оценка " << i + 1 << ": " << marks[i] << "\n";
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
    std::cout << "Заполнение оценок студента " << GetFullName() << ":\n";
    for (size_t i = 0; i < size; i++) {
        std::cout << "Оценка " << i + 1 << ": ";
        std::cin >> marks[i];
        average += marks[i];
    }
    average /= size;
    if (average < 3.0) {
        isStudent = false;
        std::cout << "Студент отчислен!\n";
    }
    else {
        if (isStudent == false) {
            isStudent = true;
            std::cout << "Студент восстановлен!\n";
        }
    }
}

void Student::SetAllInformation() {
    std::cout << "Заполнение данных студента\n\n";
    std::cout << "Имя студента: ";
    std::cin >> firstName;
    std::cout << "Фамилия студента: ";
    std::cin >> lastName;
    std::cout << "Отчество студента: ";
    std::cin >> surName;
    std::cout << "Возраст: ";
    std::cin >> age;
    RefreshFullName();
    PrintGroupNames();
    std::cout << "Кафедра студента: ";
    std::cin >> groupName;
    std::cout << "Номер группы студента: ";
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
    std::cout << "Возраст: " << age << std::endl;
    std::cout << "ФИО: " << fullName << std::endl;
    std::cout << "Группа: " << groupName << "-" << groupNumber << std::endl;
    PrintMarks();
    std::cout << "Статус студента: " << std::endl;
    if (isStudent) {
        std::cout << "Живой-здоровый!" << std::endl;
    }
    else {
        std::cout << "Мёртв." << std::endl;
    }
}