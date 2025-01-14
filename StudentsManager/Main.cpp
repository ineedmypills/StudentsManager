#include <iostream>
#include <Windows.h>
#include <cstdlib>
#include <fstream>
#include <string>

struct Student
{
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

	void RefreshFullName()
	{
		fullName = lastName + " " + firstName + " " + surName;
	}

	void SetAge(int age)
	{
		this->age = age;
	}
	void SetFirstName(std::string firstName)
	{
		this->firstName = firstName;
	}
	void SetFirstName(std::string lastName)
	{
		this->lastName = lastName;
	}
	void SetFirstName(std::string surName)
	{
		this->surName = surName;
	}
	void SetFullName(std::string firstName, std::string lastName, std::string surName)
	{
		fullName = lastName + " " + firstName + " " + surName;
	}
	void SetGroupName(std::string groupName) {
		this->groupName = groupName;
	}
	void SetGroupNumber(int groupNumber) {
		this->groupNumber = groupNumber;
	}
	void SetMark(int mark, int marksArr[], int index = 0) {
		if (index >= 0 && index < this->size) {
			marksArr[index] = mark;
		}
		else
		{
			std::cerr << "ArrOutOfRange";
		}
	}

	void SetStudentMarks() {
		double average{};
		std::cout << "���������� ������ ��������: " << GetFullName() << "\n\n";
		for (size_t i = 0; i < size; i++)
		{
			std::cout << "������ � " << i + 1 << ": ";
			std::cin >> marks[i];
			average += marks[i];
		}
		average /= size;
		if (average < 3.0)
		{
			isStudent = false;
			std::cout << "������� ��������!";
		}
		else
		{
			if (isStudent == false)
			{
				isStudent = true;
				std::cout << "������� ������������!";
			}
			else {
				isStudent = true;
			}
		}

	}
	void SetAllInformation() {
		std::cout << "���������� ������ ��������\n\n";
		std::cout << "��� ��������: ";
		std::cin >> firstName;
		std::cout << "������� ��������: ";
		std::cin >> lastName;
		std::cout << "�������� ��������: ";
		std::cin >> surName;
		RefreshFullName();
	}

	int GetAge() {
		return age;
	}
	std::string GetFirstName() {
		return firstName;
	}
	std::string GetLastName() {
		return lastName;
	}
	std::string GetSurName() {
		return surName;
	}
	std::string GetGroupName() {
		return groupName;
	}
	std::string GetFullName() {
		return fullName;
	}
	int GetGroupNumber() {
		return groupNumber;
	}


	void ShowInfo()
	{
		std::cout << "�������: " << age << std::endl;
		std::cout << "���: " << fullName << std::endl;
		std::cout << "�������� ������: " << groupName << std::endl;
		std::cout << "����� ������: " << groupName << std::endl;
		std::cout << "������: " << age << std::endl;
	}
};

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	srand(time(NULL));

	const int size = 3;
	Student rpo_11[size];

	return 0;
}