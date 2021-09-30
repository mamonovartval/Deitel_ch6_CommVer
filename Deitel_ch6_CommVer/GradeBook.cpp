// ����������� ������� - ������� GradeBook.���� ��������
// ���������� �������, ��������� ������� ��������� � GradeBook.h .

#include <iostream>
#include <iomanip> // ����������������� ������������ ������

using namespace std;

#include "GradeBook.h" //�������� ����������� ������ GradeBook


// ����������� �������������� courseName ���������� �������
GradeBook::GradeBook(string name )
{
	setCourseName(name); // ���������������� ������� s�t- �������
	maximumGrade = 0; // ����� ���������� ������������ �������
} // ����� ������������ GradeBook

// ������� , �������������� �������� ����� ;����������� , ��� �������� ����� �������� �� ����� 2 5 ��������
void GradeBook::setCourseName(string name)
{
	if (name.length() <= 25) // ���� �� ����� 2 5 ��������
	courseName = name; // ��������� �������� ����� � �������
	else // ���� � �������� ����� 2 5 ��������
	{
		// �������� � courseName ������ 25 �������� ��������� name
		courseName = name.substr(0, 25); // ������ � � , ����� 2 5

		cout << "Name \"" << name << "\" exceeds maximum length.\n"
			 "Limiting courseName to first 25 characters.\n" << endl;
	} // ����� if...else
} // ����� ������� se tCourseName

// ������� ��� ��������� �������� �����
string GradeBook::getCourseName()
{
	return courseName; // ���������� courseName �������
} // ����� ������� getCourseName

// ������� ��������� -����������� ������������ GradeBook
void GradeBook::displayMessage()
{
	// ������� ge tCourseName ��� ��������� courseName
	cout << "Welcome to the grade book for\n" << getCourseName()
		<< "!\n" << endl;
} // ����� ������� displayMessage

// ������ ������������ ����� ������; �������� ������� ������
void GradeBook::inputGrades()
{
	int grade1; // ������ ������, ��������� �������������
	int grade2; // ������ ������, ��������� �������������
	int grade3; // ������ ������, ��������� �������������

	cout << "Enter three integer grades: ";
	cin >> grade1 >> grade2 >> grade3;
	// ��������� ������� � �������� maximumGrade
	maximumGrade = maximum(grade1, grade2, grade3);
}// ����� ������� inputGrades

 // ���������� ���������� �� ���� ����� ����������
int GradeBook::maximum(int x, int y, int z)
{
	int maximumValue = x; // ������������, ��� � - ����������

	// ����������, �� �������� �� ������� maximumValue
	if (y > maximumValue)
		maximumValue = y; // ������� y ����� maximumValue

	// ����������, �� �������� �� z ������� maximumValue
	if (z > maximumValue)
		maximumValue = z; // ������� z ����� maximumValue

	return maximumValue;
} // ����� ������� maximum

// ������� ����� � � ������� , ��������� �������������
void GradeBook::displayGradeReport()
{
	// ������� �������� ��������� ������
		cout << "Maximum of grades entered: " << maximumGrade << endl;
}// ����� ������� displayGradeReport