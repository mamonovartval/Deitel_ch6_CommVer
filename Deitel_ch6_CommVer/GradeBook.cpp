// Определения элемент - функций GradeBook.Файл содержит
// реализацию фунхций, прототипы которых объявлены в GradeBook.h .

#include <iostream>
#include <iomanip> // параметризованные манипуляторы потока

using namespace std;

#include "GradeBook.h" //Включить определение хласса GradeBook


// конструктор инициализирует courseName переданной строхой
GradeBook::GradeBook(string name )
{
	setCourseName(name); // инициализировать вызовом sеt- фунхции
	maximumGrade = 0; // будет замещаться максимальной оценкой
} // конец конструктора GradeBook

// функция , устаналиваацая название курса ;гарантирует , что название курса содержит не более 2 5 символов
void GradeBook::setCourseName(string name)
{
	if (name.length() <= 25) // если не более 2 5 символов
	courseName = name; // сохранить название хурса в объекта
	else // если в названии более 2 5 символов
	{
		// записать в courseName первые 25 символов параметра name
		courseName = name.substr(0, 25); // начать с О , длина 2 5

		cout << "Name \"" << name << "\" exceeds maximum length.\n"
			 "Limiting courseName to first 25 characters.\n" << endl;
	} // конец if...else
} // хонец фунхции se tCourseName

// функция для получения названия хурса
string GradeBook::getCourseName()
{
	return courseName; // возвратить courseName объекта
} // конец функции getCourseName

// вывести сообщение -приветствие пользователя GradeBook
void GradeBook::displayMessage()
{
	// вызвать ge tCourseName для получения courseName
	cout << "Welcome to the grade book for\n" << getCourseName()
		<< "!\n" << endl;
} // конец фунхции displayMessage

// ввести произвольное число оценок; обновить счетчик оценок
void GradeBook::inputGrades()
{
	int grade1; // первая оценка, введенная пользователем
	int grade2; // вторая оценка, введенная пользователем
	int grade3; // третья оценка, введенная пользователем

	cout << "Enter three integer grades: ";
	cin >> grade1 >> grade2 >> grade3;
	// сохранить максиму в элементе maximumGrade
	maximumGrade = maximum(grade1, grade2, grade3);
}// конец функции inputGrades

 // возвращает наибольший из трех своих параметров
int GradeBook::maximum(int x, int y, int z)
{
	int maximumValue = x; // предположить, что х - наибольший

	// определить, не является ли большим maximumValue
	if (y > maximumValue)
		maximumValue = y; // сделать y новым maximumValue

	// определить, не является ли z большим maximumValue
	if (z > maximumValue)
		maximumValue = z; // сделать z новым maximumValue

	return maximumValue;
} // конец функции maximum

// вывести отчет п о оценкам , введенным пользователем
void GradeBook::displayGradeReport()
{
	// вывести максимум введенных оценок
		cout << "Maximum of grades entered: " << maximumGrade << endl;
}// конец функции displayGradeReport