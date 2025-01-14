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
	std::string groupNameArr[5]{ "РПО","ГД","КБ","ИМ","Т" };

	void RefreshFullName()
	{
		fullName = lastName + " " + firstName + " " + surName;
	}
	void PrintGroupNames() {
		for (size_t i = 0; i < 5; i++)
		{
			std::cout << groupNameArr[i];
		}
	}
	void PrintMarks() {
		for (size_t i = 0; i < size; i++)
		{
			std::cout << "Оценка № " << i + 1 << " " << marks[i] << "\n"
		}
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
		std::cout << "Заполнение оценок студента " << GetFullName() << ":\n";
		for (size_t i = 0; i < size; i++)
		{
			std::cout << "Оценка №" << i + 1 << ": ";
			std::cin >> marks[i];
			average += marks[i];
		}
		average /= size;
		if (average < 3.0)
		{
			isStudent = false;
			std::cout << "Студент отчислен!\n";
		}
		else
		{
			if (isStudent == false)
			{
				isStudent = true;
				std::cout << "Студент восстановлен!\n";
			}
			else {
				isStudent = true;
			}
		}

	}
	void SetAllInformation() {
		std::cout << "Заполнение данных студента\n\n";
		std::cout << "Имя студента: ";
		std::cin >> firstName;
		std::cout << "Фамилия студента: ";
		std::cin >> lastName;
		std::cout << "Отчество студента: ";
		std::cin >> surName;
		RefreshFullName();
		PrintGroupNames();
		std::cout << "Кафедра студента: ";
		std::cin >> groupName;
		std::cout << "Номер группы студента: ";
		std::cin >> groupNumber;
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
		std::cout << "Возраст: " << age << std::endl;
		std::cout << "ФИО: " << fullName << std::endl;
		std::cout << "Группа: " << groupName << "-" << groupNumber << std::endl;
		PrintMarks();
		std::cout << "Статус студента: " << std::endl;
		if (isStudent == true)
		{
			std::cout << "Живой-здоровый!" << std::endl;
		}
		else
		{
			std::cout << "Мёртв." << std::endl;
		}
	}
};

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	srand(time(NULL));

	const int size = 3;
	Student rpo_11[size];
	for (size_t i = 0; i < size; i++)
	{
		rpo_11[i].SetAllInformation();
	}
	for (size_t i = 0; i < size; i++)
	{
		rpo_11[i].ShowInfo();
	}
	return 0;
}