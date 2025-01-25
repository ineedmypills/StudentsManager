#ifndef STUDENT_HPP
#define STUDENT_HPP

#include <iostream>
#include <string>

struct Student {
    Student();
    Student(int age);

    unsigned int age = 0;
    std::string firstName;
    std::string lastName;
    std::string surName;
    std::string fullName;
    std::string groupName;
    int groupNumber;
    bool isStudent = true;
    const static int size = 5;
    int marks[size];
    std::string groupNameArr[size]{ "–œŒ","√ƒ"," ¡","»Ã","“" };

    void RefreshFullName();
    void PrintGroupNames();
    void PrintMarks();
    void SetAge(int age);
    void SetFirstName(std::string firstName);
    void SetLastName(std::string lastName);
    void SetSurName(std::string surName);
    void SetFullName(std::string firstName, std::string lastName, std::string surName);
    void SetGroupName(std::string groupName);
    void SetGroupNumber(int groupNumber);
    void SetMark(int mark, int marksArr[], int index = 0);
    void SetStudentMarks();
    void SetAllInformation();
    int GetAge();
    std::string GetFirstName();
    std::string GetLastName();
    std::string GetSurName();
    std::string GetGroupName();
    std::string GetFullName();
    int GetGroupNumber();
    void ShowInfo();
};

#endif // STUDENT_HPP