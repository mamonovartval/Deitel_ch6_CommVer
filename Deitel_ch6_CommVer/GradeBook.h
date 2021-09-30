// Определение 11tJJacca GradeBook.Файл представляет собой открытый
// интерфейс GradeBook, не раскрывая реализации элемент - функций
// класса , которые определяются в GradeBook . cpp .
#pragma once
#include <string>
using namespace std;

class GradeBook
{
public:
	GradeBook(string);    // конструктор инициализирует courseName переданной строкой
	void setCourseName(string);   // функция , устанавливаацая название курса
	string getCourseName();       // функция , получаацая название курса
	void displayMessage();        // функция , выводящая сообщение - приветствие
	void inputGrades(); // получить от пользователя три оценки
	void displayGradeReport(); // вывести отчет по введенным оценкам
	int maximum(int, int, int); // определить максимум из 3 целых
private:
	string courseName; // название курса для данноrо GradeBook
	int maximumGrade; // максимум из трех значений
}; // конец класса GradeBook