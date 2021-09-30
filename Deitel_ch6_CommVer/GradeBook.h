// ����������� 11tJJacca GradeBook.���� ������������ ����� ��������
// ��������� GradeBook, �� ��������� ���������� ������� - �������
// ������ , ������� ������������ � GradeBook . cpp .
#pragma once
#include <string>
using namespace std;

class GradeBook
{
public:
	GradeBook(string);    // ����������� �������������� courseName ���������� �������
	void setCourseName(string);   // ������� , ��������������� �������� �����
	string getCourseName();       // ������� , ���������� �������� �����
	void displayMessage();        // ������� , ��������� ��������� - �����������
	void inputGrades(); // �������� �� ������������ ��� ������
	void displayGradeReport(); // ������� ����� �� ��������� �������
	int maximum(int, int, int); // ���������� �������� �� 3 �����
private:
	string courseName; // �������� ����� ��� �����r� GradeBook
	int maximumGrade; // �������� �� ���� ��������
}; // ����� ������ GradeBook