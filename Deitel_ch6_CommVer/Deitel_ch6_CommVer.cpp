// Deitel_ch6_CommVer.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include "GradeBook.h"
#include <iostream>
#include "maximum.h" // вКJUОчить шаблон функции maximurn
#include <iomanip>
#include <conio.h>
#include <ostream>
#include <time.h>



using namespace std;
/*int main()
{
	//
	GradeBook myGradeBook("Cs101 C++ Programming");

	myGradeBook.displayMessage(); // вывести приветствие
	myGradeBook.inputGrades(); // прочитать вводимые оценки
	myGradeBook.displayGradeReport(); // выести отчет по оценкам
	return 0; //
} */

// 6.10

/*void useLocal(void); // прототип функции
void useStaticLocal(void); // прототип функции
void useGlobal(void); // прототип функции

int х = 1; // rлобальная переменная

int main()
{
	int х = 5; // переменная, локальная в main

	cout << " local х in main's outer scope is " << х << endl;

	{// начинает новую область действия
		int х = 7; // скрывает х в о внешней области действия

		cout << " local х in main's inner scope is " << х << endl;
	}// конец новой области действия

	cout << " local х i n main's outer scope is " << х << endl;

	useLocal(); // useLocal имеет локальную х
	useStaticLocal(); // useStaticLocal имеет статическую локальную х
	useGlobal(); // useGlobal использует rлобальную х
	useLocal(); // useLocal повторно инициализирует свою локальную х
	useStaticLocal(); // статическая локальная х сохраняет значение
	useGlobal(); // rлобальная х также сохраняет свое значение

	cout << " \nlocal х in main is " << х << endl;
	return 0; // успешное завершение
}// конец main

	// useLocal реииициализирует по1tальнУJО х при 1tаждом вызове
void useLocal(void)
{
	int х = 25; // инициализируется при 1tаждом вызове useLocal

	cout << " \nlocal х is " << х << " on entering useLo cal " << endl;
	х++;
	cout << " local х is " << х << " on exiting useLocal " << endl;
} // 1tонец фунJtЦИИ useLocal
	// useS taticLocal инициализирует статичес1tУJО по1tальнУJО переменнУJО х
	// топько при первом вызове функции; между вызовами этой фун1tции
	// значение х сохраняется
void useStaticLocal(void)
{
	static int х = 50; // инициализируется при первом въ1зове фунJtЦИИ

	cout << "\nlocal static х is " << х << " on entering useStat icLocal"
		<< endl;
	х++;
	cout << "local static х is" << х << " on exiting useStaticLocal"
		<< endl;
} // 1tонец фунJtЦИИ useStati cLocal
	
	// useGlobal модифицирует rпобальную переменнУJО х при 1tаждом вызове
void useGlobal(void)
{
	cout << " \nglobal х is " << х << " on entering useGlobal " << endl;
	х *= 10;
	cout << " global х is " << х << " on exiting useGlobal " << endl;
} // 1tонец фунJtЦИИ useGlobal*/

// 6.14

/*int squareByValue(int); // прототип(передача по значеНИJО)
void squareByReference(int &); // прототип(передача по ссылке)
int main()
{
	int х{ 2 }; // возведится в квадрат вызовом squareByValue
	int z{ 4 }; // возведится в JСВадрат в•1зовом squareByRe ference

	// демонстрация squareByValue
	cout << " х = " << х << " Ьe fore squareByValue \ n ";
	cout << "Value re turned Ьу squareByValue : "
		<< squareByValue(х) << endl;
	cout << " х = " << х << " after squareByValue \ n " << endl;
	// демонстрация squareByReference
	cout << " z = " << z << " before squareByRe ference " << endl;
	squareByReference(z);
	cout << " z = " << z << " after squareByRe fe rence " << endl;
	return 0; // успешное завершение
}// конец main
	// s quareByValue умножает numЬe r на себя, сохраняет
	// резупьтат в numЬer и возвращает новое значение numЬer
int squareByValue(int numЬer)
{
	return numЬer *= numЬer; // аргумент вwз??аоцеrо не изменяется
}// конец фунJСЦИИ squareByValue
			// squareByRe ference умножает на себя и сохраняет numЬerRe f
			// в переменной, на которую с сылается numЬerRe f в функции main
void squareByReference(int &numЬerRef)
{
	numЬerRef *= numЬerRef; // аргумент вwзwвающеrо модифицируется
} // конец функции squareByReference*/

// 6.17

/*// фунхция square дпя значений типа int
int square(int х)
{
	cout << " square of inteqer " << х << " is ";
	return х * х;
}// хонец фунхции square с аргументом int

// фунхция square дп я значений типа douЫe
double square(double у)
{
	cout << " s quare of douЬle " << у << " is ";
	return у * у;
}// хонец фунхции square с аргументом douЬle

int main()
{
	cout << square(7); // выз:wвает int - версию
	cout << endl;
	cout << square(7.5); // выЗЪ1Вает dоuЬlе - версию
	cout << endl;
	return 0; // успешное завершение
}// хонец main*/

// 6.18

/*int main()
{
	 // демонстрация ma.ximurn со значениями типа int
	 int intl, int2, int3;
	
	 cout << "Input three integer values: ";
	 cin >> intl >> int2 >> int3;
	
	 // вызвать int - версию ma.ximurn
	 cout << "The maximum integer value is: "
	  << maximum(intl, int2, int3);
	
	// демонстрация maximurn с о значениями типа douЫe
	double doublel, double2, double3;
	
	 cout << "\n\ninput three douЬle value s : ";
	cin >> doublel >> double2 >> double3;
	
	// вызвать dоuЬlе - версию ma.ximurn
	cout << "The maximum double value is: "
	 << maximum(doublel, double2, double3);
	
	// демонстрация ma.ximurn с о значениями типа char
	char charl, char2, char3;
	
	cout << "\n\ninput three characters: ";
	cin >> charl >> char2 >> char3;
	
	// вызвать сhаr - версию ma.ximurn
	cout << "The maximum character value is: "
	<< maximum(charl, char2, char3) << endl;
	return 0; // успешное завершение
}	// конец main*/

// 6.19

/*unsigned long long factorial(unsigned long long); // прототип фунхции

int main()
{
	// вычислить фахториа.п дп я значенией от О д о 1 0
	for (int counter = 0; counter <= 64; counter++)
		cout << setw(2) << counter << " ! = " << factorial(counter)
		<< endl;

	return 0; // успе1Ш1ое заиершение
}// хонец main

 // рекурсивное определение фунхции фахториа.па
unsigned long long factorial(unsigned long long number)
{
	if (number <= 1) // проверить н а основной спучай
		return 1; // основные спучаи : О ! = 1 and 1 ! = 1
	else // рехурсивный шаг
		return number * factorial(number - 1);
}// хонец фунхции factorial*/

// 6.20

/*unsigned long long fibonacci(unsigned long long); // прототип функции

int main()
{
	// вычислить чиспа Фибоначчи с номерами о т О д о 1 0
	for (int counter = 0; counter <= 10; counter++)
		cout << " fibonacci (" << counter << ") = "
		<< fibonacci(counter) << endl;

	// вывести числа Фибоначчи с более в1о1сокими номерами
	cout << " fibonacci (20) = " << fibonacci(20) << endl;
	cout << " fibonacci (30) = " << fibonacci(30) << endl;
	cout << " fibonacci (35) = " << fibonacci(35) << endl;
	return 0; // успешное завершение
}// конец main

// рекурсивный метод исчисления чисел Фибоначчи
unsigned long long fibonacci(unsigned long long number)
{
	if ((number == 0) || (number == 1)) // о сновные случаи
		return number;
	else // рекурсивный шаг
		return fibonacci(number - 1) + fibonacci(number - 2);
}// конец функции fibonacci*/

// Упражнения

// 6.11

/*int main()
{
	double x;

	//x = fabs(7.5);
	//x = floor(7.5);
	//x = fabs(0.0);
	//x = ceil(0.0);
	//x = fabs(-6.4);
	//x = ceil(-6.4);
	//x = ceil(-fabs(-8 + floor(-5.5)));
	return 0;
}*/

// 6.12

/*// declare function for calculate parking payment
double calculateCharges(double time);

int main()
{
	double parkTime; // define time on parking client 1
	int countClient{ 1 }; // initialize counter of client
	double totHours{ 0 }; // initialize total hours of parking
	double totCharge{ 0 }; // initialize total charge of parking
	
	cout << "Enter parking time for each client: "; // suggestion to enter data for each client
	
	while (cin >> parkTime)
	{
		if (countClient == 1)
		{
			cout << "Car" << "\tHours" << "\tCharge" << endl; // header of table
		}
		cout << countClient << "\t" << fixed << setprecision(1) << parkTime << "\t" 
			<< setprecision(2) << calculateCharges(parkTime) << endl; // print rows

		totHours += parkTime; // sum total parking hours
		totCharge += calculateCharges(parkTime); // sum total charges ($)

		if (countClient == 3)
		{
			cout << "TOTAL\t" << fixed << setprecision(1) << totHours 
				<< "\t" << setprecision(2) << totCharge << endl; // print total data
			break; // out of cycle if counter of client equal 3
		}
		countClient++; // add 1 to counter client
	}
	return 0;
}

// define function
double calculateCharges(double time)
{
	double minPayment{ 2.0 }; // ($)
	double maxPayment{ 10.0 }; // ($)
	double normTime{ 3.0 }; // (Hours)
	double exceedPayment{ 0.5 }; // ($)
	double exceedTime; // (Hours)
	double hoursDay{ 24 }; // (Hours)

	if (time <= normTime)
	{
		return minPayment;
	}
	else if (time > normTime && time < hoursDay)
	{
		return ceil(time - normTime) * exceedPayment + minPayment;
	}
	else
		return maxPayment;
}*/

// 6.13

/*int main()
{
	double x; // define entered numbers
	int y; // define round numbers

	cout << "Enter numbers for make round(for exit put EOF): "; // suggestion to enter numbers

	while (cin >> x) // enter numbers 
	{
		y = floor(x + .5); // define expressions for number round
		cout << x << "\t" << y << endl; // print result
	}
	return 0;
}*/

// 6.14

/*int roundToInteger(double); // declare function round to integer
double roundToTenths(double); // declare function round to tenths
double roundToHundredths(double); // declare dunction round to hundreths
double roundToThousands(double); // declare function round to thousands

int main()
{
	double number; // define entering number

	cout << "Enter number to make round(for exit put EOF - ctrl^z):"; // suggestion to enter numbers

	while (cin >> number)
	{
		cout << number << "\t" << roundToInteger(number) << "\t"
			<< roundToTenths(number) << "\t"
			<< roundToHundredths(number) << "\t"
			<< roundToThousands(number) << "\t" << endl; // print row with round result
	}
	return 0;
}

// define function round to integer
int roundToInteger(double x)
{
	return floor(x + .5);
}

// define function round to tenths
double roundToTenths(double x)
{
	return floor(x * 10 + .5) / 10;
}

// define function round to hundreths
double roundToHundredths(double x)
{
	return floor(x * 100 + .5) / 100;
}

// define function round to thousands
double roundToThousands(double x)
{
	return floor(x * 1000 + .5) / 1000;
}*/

// 6.17

/*int main()
{
	int counter{ 1 };
	
	while (counter <= 5)
	{
		cout << 2 + rand() % 10 << endl;
		counter++;
	}
	counter = 1;
	while (counter <= 5)
	{
		cout << 3 + rand() % 8 << endl;
		counter++;
	}
	counter = 1;
	while (counter <= 5)
	{
		cout << 6 + rand() % 16 << endl;
		counter++;
	}
	return 0;
}*/

// 6.18

/*int integerPower(int, int);

int main()
{
	int base; // define base of grade
	int exponent; // define wishing exponent

	cout << "Enter two numbers: numbers and wishing grade.";

	while (cin >> base >> exponent) // enter number and grade
	{
		cout << integerPower(base, exponent) << endl; // print result
	}
	return 0;
}

//declare function integerPower
int integerPower(int x, int y)
{
	int power{ 1 }; // define power of number
	for (int i = 1; i <= y; i++)
	{
		if (x < 0 && x == 0)
			return 0; // enterred number mismatch to function
		else
			power *= x; // multiple
	}
	return power;
}*/

// 6.19

/*double hypotenuse(double, double);

int main()
{
	double a; // side a
	double b; // side b
	double c; // side c
	
	cout << "Enter known sides: "; // suggestion to put length of sides

	while (cin >> a >> b)
	{
		cout << "Hypotenuse is: " << fixed << setprecision(1) << hypotenuse(a, b) << endl; // print result
		cout << "\nEnter known sides: ";
	}
	return 0;
}

// declare function
double hypotenuse(double x, double y)
{
	if ((pow(x, 2) + pow(y, 2)) <= 0)
		return 0; // no roots
	else
		return sqrt(pow(x, 2) + pow(y, 2)); // calculation hypotenuse
}*/

// 6.20

/*// declare function for define multiplicity
bool multiple(int a, int b)
{
	bool mult{ false }; // initialize result of multiplicity
	int maxNum{ 0 }; // maximum enterd number

	maxNum = a; // assign a to maximum number

	if (b > maxNum) // define maximum from two number
		maxNum = b;

	for (int i = 2; i <= maxNum; i++) // calculate simple numbers
	{
		if (a % i == 0 && b % i == 0) // if both numbers divideon the same numbers, therefore it multiple
		{ 
			mult = true; 
			break; // out of function
		}
		else 
		{
			mult = false; 
		}
	}
	return mult;
}*/

// 6.21

/*// declare function for define parity
bool even(int x)
{
	if (x % 2 == 0) { return true; } 
	else { return false; }
}

int main()
{
	int num; // define entering number
	int prevNum{ 1 }; // define previous number

	cout << "Enter number: ";

	while (cin >> num) // enter number
	{
		cout << "Entered numbers are multiplicity with previuos number: " << boolalpha
			<< multiple(num, prevNum) << endl;// define multiplicity of entered numbers
		cout << "Entered numbers even is it: " << boolalpha << even(num) << endl;
		
		cout << "\nEnter number: ";

		prevNum = num; // assign num ro prevNum
	}
	return 0;
}*/

// 6.22 - 6.23

/*// declare function for print square
void square(int side, string fillCharacter)
{
	for (int i = 1; i <= side; i++) // cycle for count rows
	{
		for (int j = 1; j <= side; j++) // cycle for count column
		{
			cout << fillCharacter << ' '; // print sign and whitespace
		}
		cout << endl; // print empty row
	}
}

int main()
{
	int lengthOfSide; // define length of side
	string character; // define wishing character

	cout << "Enter wishing length of side square and wishing character: "; // suggestion to enter length
	cin >> lengthOfSide >> character; // enter length

	square(lengthOfSide, character);

	return 0;
}*/

// 6.24

// 6.25

/*// function return whole from qoutient
int qoutient(int, int);

// function return remains from whole
void remains(int &, int &);

// function determine divisor by divide enteerd number on divisor
void divisorDet(int &);

int num; // define entering number
	
int main()
{
	int determineDiv{ 1 }; // define determined divisor
	
	cout << "Enter number from 1 to 32767: "; // suggestion enter number
	cin >> num; // enter number

	divisorDet(determineDiv); // assign result function

	while (determineDiv != 0)
	{
		cout << qoutient(num, determineDiv) << "  "; // print result

		remains(num, determineDiv); // assign new value to num and determined divisor
	}
	return 0;
}

// function return whole from qoutient
int qoutient(int aNum, int bDetDiv)
{
	return aNum / bDetDiv; // return whole
}

// function change input argument - remains from whole
void remains(int &aNum, int &bDetDiv)
{
	aNum %= bDetDiv; // 

	bDetDiv /= 10; // divided divisor on 10
}

// function determine divisor by divide enterd number on divisor
void divisorDet(int &x)
{
	int resDiv{ 0 }; // result of divide entered number on divisor

	do
	{
		resDiv = num / x; // calculate 

		if (resDiv < 10) // out of cycle
			break;

		x *= 10;
	} while (resDiv != 0);
}*/

// 6.26

/*// declare function for calculation seconds
int calcSec(int, int, int);

int main()
{
	int hour; // define hour
	int min; // define minute
	int sec; // define second
	int secCalc; // define calculated seconds
	int interval{ 0 }; // define interval between two times
	int countInterval{ 1 }; // initialize counter for interval

	cout << "Enter first point of time: "; // suggestion to enter time
	
	while (cin >> hour >> min >> sec) // enter time
	{
		secCalc = calcSec(hour, min, sec); // assign result of function

		if (countInterval == 1)
		{
			interval += secCalc; // assign first value of interval interval
		}

		if (countInterval == 2 && secCalc > interval)
		{
			interval = secCalc - interval; // calculate second value of interval
			break; // out of cycle
		}
		
		if (countInterval == 2 && secCalc < interval)
		{
			interval -= secCalc; // calculate second value of interval
			break; // out of cycle
		}

		cout << "Enter second point of time: "; // suggestion to enter time

		countInterval++; // add 1 to counter point of interval
	}

	cout << "Interval between two points of time is: " << interval 
		<< " seconds." << endl; // print interval between two points of time

	return 0;
}

// define function for calculation seconds
int calcSec(int a, int b, int c)
{
	int minToSec{ 60 }; // initialize variable to convert minute to second 1 min = 60 sec
	int hourToSec{ 3600 }; // initialize variable to convert hour to second 1 hour = 3600 sec
	
	return a * hourToSec + b * minToSec + c; // calculation time in second
}*/

// 6.27

/*// a)
// declare function celsius
double celsius(double tempF)
{
	return (tempF - 32.0) * (5.0 / 9.0); // calculation celsius Tc = (Tf - 32) * 5/9
}

// b)
// declare function fahrenheit
double fahrenheit(double tempC)
{
	return tempC * (9.0 / 5.0) + 32.0; // calculation fahrenheit Tf = Tc * 9 / 5 + 32
}

// c)
int main()
{
	double countCel{ 0 }; // initialize counter celsius
	double countFahr{ 32 }; // initialize counter fahrenheit

	cout << "_______________________________________________\n";
	cout << "|Temperature Celsius-|> Temperature Fahrenheit|\n";
	cout << "|____________________|________________________|\n";

	while (countCel <= 100)
	{
		cout << "|" << setw(11) << countCel << setw(10) << "|"
			<< setw(17) << celsius(countCel) << setw(8) << "|" << endl; // print result of function celsius

		cout << "|____________________|________________________|\n"; // print last line of table

		countCel++; // add 1 to counter of celsius
	}

	cout << "_______________________________________________\n";
	cout << "|Temperature Fahrenheit-|> Temperature Celsius|\n";
	cout << "|_______________________|_____________________|\n";

	while (countFahr <= 212)
	{
		cout << "|" << setw(11) << countFahr << setw(13) << "|"
			<< setw(14) << fahrenheit(countFahr) << setw(8) << "|" << endl; // print result of function fahrenheit
		
		cout << "|_______________________|_____________________|\n";

		countFahr++; // add 1 to counter of fahrenheit
	}

	return 0;
}*/

// 6.28

/*// define function which return smallest value from threee
double smallest(double a, double b, double c)
{
	double lessVal; // 

	lessVal = a; // assign a to less value

	if (b < lessVal)
		lessVal = b;
	else if (c < lessVal)
		lessVal = c;

	return lessVal;
}

int main()
{
	double x, y, z; // define variable

	cout << "Enter three numbers: "; // suggestion to enter values
	cin >> x >> y >> z; // enter numbers

	cout << "Smallest number from three entered: " << smallest(x, y, z) << endl;

	return 0;
}*/

// 6.29

/*// declare function perfect for determine perfect numbers
int perfect(int);
string multiNum(int);

int main()
{
	int countNum{ 1 }; // initialize counter of number
	int multiplier; // define multiplier for perfect number
	int perfNum; // define perfect number

	while (countNum <= 1000)
	{
		perfNum = perfect(countNum); // assign result function to varible perfect number is

		if(perfNum == countNum)
			cout << "Perfect number: " << perfNum << " = " 
			<< multiNum(countNum) << ';' << endl; // print perfect numbers

		countNum++; // add 1 to counter of numbers
	}
	return 0;
}

// define function
int perfect(int number)
{
	int counter{ 1 }; // initialize counter
	int sum{ 0 }; // initialze sum of numbers for calculate perfect number

	while (counter < number)
	{
		if (number % counter == 0) // determine remains from entered number
		{
			sum += counter; // make sum for determine perfect number
		}

		if (sum == number || sum > number)
			break; // out of cycle

		counter++; // add 1 to counter
	}
	return sum; // return value of result that entered number is perfect number
}

//deefine function for determine multipliers
string multiNum(int x)
{
	int counter{ 1 }; // initialize counter
	string multiVal{ "" }; // define multipliers of entered numbers
	int sum{ 0 }; // initialze sum of numbers for calculate perfect number
	
	while (counter < x)
	{
		if (x % counter == 0) // determine remains from entered number
		{
			multiVal += to_string(counter); // make sum for determine multipliers perfect number
			sum += counter; // make sum for determine perfect number
		}

		if (sum == x || sum > x)
			break; // out of cycle

		for (int i = 0; (i < 1) && (x % counter == 0); i++)
		{
			multiVal += " + "; // add sign '+' to string of multipliers perfect number
		}

		counter++; // add 1 to counter
	}
	return multiVal; // return value of result that entered number is perfect number
}*/

// 6.30

/*int simpleNum(int); // declare function for determine simple number

int main()
{
	int maxRange{ 10000 }; // initialize counter
	
	for (int i = 1; i <= maxRange; i++)
	{
		int simNum = simpleNum(i); // assign value of function to variable

		if (simNum > 0)
		{
			cout << "Simple number: " << i << endl; // print result funtion
		}
	}
	return 0;
}

//define function simple numbers
int simpleNum(int n)
{
	// n / 2
	// sqrt(n)
	for (int i = 2; i <= static_cast<int>(sqrt(n)); i++)
	{
		if ((n%i) == 0)
		{
			return 0;
		}
	}
	return 1;
}*/

// 6.31

/*// declare function inverse number
int inverse(int);

int main()
{
	int num; // define number
	int gradeNum; // defune grade of number
	while (true) {
		cout << "Enter number: "; // suggestion to enter number
		cin >> num; // enter number

		cout << "Inverse number: " << inverse(num) << endl << endl; // print result
	}
	return 0;
}

int inverse(int x) 
{
		const int divisor{ 10 }; // initialize divisor
		int qoutient; // define qoutient
		int invNum{ 0 }; // initialize inverse number

		while (x != 0)
		{
			qoutient = x % divisor; // calculate quotient
			x /= divisor; // decrease grade num

			invNum += qoutient; // add 

			if (x == 0)
				return invNum; // return value

			invNum *= divisor; // add one grade

		}
}*/

// 6.32

/*// declare function for determine biggest common divisor
int gcd(int, int);

int main()
{
	int x, y; // define variable
	while (true)
	{
		cout << "Enter two integer numbers: "; // suggestion to enter two numbers
		cin >> x >> y; // enter two numbers

		cout << "The biggest common divider: " << gcd(x, y) << endl;
	}
	return 0;
}

// define function for determine biggest common divider
int gcd(int a, int b)
{
	int bigDiv{ 0 }; // initialize biggest divider
	int preBig{ 0 }; // initialize prebiggest divider
	int maxVal; // define max value from entered data
	
	// determine maximum value from entered numbers
	if (a > b) 
	{
		maxVal = a;
	}
	else
	{
		maxVal = b;
	}

	for (int i = 1; i <= maxVal; i++)
	{
		if (!(a % i) && !(b % i))
			bigDiv = i; // assign i to bigDiv

		if (bigDiv < preBig)
			bigDiv = preBig; // verification biggest divider

		preBig = bigDiv; // assign
	}

	return bigDiv; // result of function
}*/

// 6.33

/*// declare function for calculation average grade
int qualityPoints(int);

int main()
{
	int grade; // define variable grade
	
	cout << "Enter grades (for exit put -1): ";

	while (cin >> grade)
	{
		qualityPoints(grade); // calculate average grades

		if (grade == EOF)
			break; // out of cycle
		
		cout << "Enter grades (for exit put -1): ";
	}

	cout << "Average grade: " << qualityPoints(grade) << endl; // print result

	return 0;
}

// define function for calculation average grade
int qualityPoints(int x)
{
	static int sum; // define sum of grades
	static int countGrade; // define counter of grades
	
	if (sum < 0)
	{
		sum = 0; // initialize variable sum
		countGrade = 1; // initialize counter
	}

	if (x == EOF && (sum / countGrade <= 100 && 90 <= sum / countGrade))
	{
		return 4; // calculate grades
	}
	else if (x == EOF && (sum / countGrade <= 89 && 80 <= sum / countGrade))
	{
		return 3; // calculate average value
	}
	else if (x == EOF && (sum / countGrade <= 79 && 70 <= sum / countGrade))
	{
		return 2; // calculate average value
	}
	else if (x == EOF && (sum / countGrade <= 69 && 60 <= sum / countGrade))
	{
		return 1; // calculate average value
	}
	else if (x == EOF && sum / countGrade <60)
	{
		return 0; // calculate average value
	}
		
	sum += x; // summirize entered grades
	countGrade++; // add 1 to counter
}*/

// 6.34

/*// declare function flip
int flip()
{	
	return 0 + rand() % 2; // print result
}

int main()
{
	int headCount{ 0 }; // initialize counter of head coin
	int tailCount{ 0 }; // initialize counter of tail coin
	
	srand(time(0)); // set randomizing

	for (int i = 1; i <= 100; i++)
	{
		if (flip())
			headCount++; // add 1 to head counter
		else
			tailCount++; // add 1 to tail counter

		if (i == 100)
			cout << "Head counter of coin: " << headCount << "\n"
			<< "Tail counter of coin: " << tailCount << endl;
	}
	return 0;
}*/

// 6.35

// 6.36

// 6.37

/*// declare function for randomize different answer
void rightAnswer();
void wrongAnswer();
void countAnswer(int);

int main()
{
	setlocale(LC_ALL, "rus"); // setup Russian code page

	int x, y, z{ 0 }; // define variable
	int countRightAnswer{ 0 }; // initilize counter for right answer
	int countWrongAnswer{ 0 }; // initilize counter for right answer
	
	srand(time(0)); // set randomize

	while (z != EOF)
	{
		x = 1 + rand() % 10; // assign random value to x
		y = 1 + rand() % 10; // assign random value to y

		cout << "Сколько будет " << x << " * " << y << "?" << endl; // print Question
		cin >> z; // enter answer

		while (true)
		{
			if (z == x * y && (countRightAnswer + countWrongAnswer) <= 10)
			{
				rightAnswer(); // print result
				countRightAnswer++; // add 1 to counter
				cout << endl; // print empty row
				break; // out of cycle
			}
			else
			{
				wrongAnswer();
				countWrongAnswer++; // add 1 to counter
				cin >> z; // enter answer
			}
			
			if ((countRightAnswer + countWrongAnswer) == 10 && countWrongAnswer > 1)
			{
				countAnswer(countRightAnswer); // call function for determine right answer
				countRightAnswer = 0;
				countWrongAnswer = 0;
			}
		}
		
		if (countRightAnswer == 10 && countWrongAnswer == 0)
		{
			countRightAnswer = 0;
		}
		
	}
	return 0;
}

// determine function different answer
void rightAnswer()
{
	int var = 1 + rand() % 4; // ininitialize variant for answer

	switch (var)
	{
	case 1:
	{
		cout << "Очень хорошо!\n";
		break;
	}
	case 2:
	{
		cout << "Отлично!\n";
		break;
	}
	case 3:
	{
		cout << "Чудесная работа!\n";
		break;
	}
	case 4:
	{
		cout << "Продолжайте работать в том же духе!\n";
		break;
	}
	}
}

void wrongAnswer()
{
	int var = 1 + rand() % 4; // ininitialize variant for answer

	switch (var)
	{
	case 1:
	{
		cout << "Нет. Попытайтесь, пожалуйста, снова.\n";
		break;
	}
	case 2:
	{
		cout << "Неверно. Попытайтесь еще раз.\n";
		break;
	}
	case 3:
	{
		cout << "Не опускайте руки!\n";
		break;
	}
	case 4:
	{
		cout << "Нет. Продолжайте ваши попытки.\n";
		break;
	}
	}
}

void countAnswer(int x)
{
	int percent{ 0 }; // inintialize percentage of right answer
	int quaAnswer{ 10 }; // quantity answer for determine result

	percent = static_cast<double>(x / quaAnswer) * 100; // calculate percentage

	if (percent < 75)
	{
		cout << "Пожалуйста, попросите вашего преподавателя помочь вам!\n";
		cout << endl;
	}
}*/

// 6.38

// 6.39

/*int main()
{
	setlocale(LC_ALL, "rus");

	int guessNum; // define guessed number
	int guessRes{ 0 }; // initialize result of guessing
	string answer;
	int countAns{ 0 }; // initialize counter answer

	srand(time(0)); // make randomize

	guessNum = 1 + rand() % 1000; // set random value for number

	cout << "Мое число между 1 и 1000.\n"
		"Вы можете его отгадать?\n"
		"Пожалуйста, напечатайте вашу первую догадку.\n";

	while (guessRes != guessNum)
	{
		cin >> guessRes; // enter guessing result

		if (guessRes == guessNum)
		{
			if (countAns <= 10)
			{
				cout << "Или вы знаете секрет, или вы счастливчик!" << endl;
			}
			
			if (countAns == 10)
			{
				cout << "О! Вы знаете секрет!" << endl;
			}
			
			if(countAns > 10)
			{
				cout << "Вы должны развивать свои способности!" << endl;
			}

			cout << "\nОтлично! Вы отгадали число!\n" // result of game you win
				"Хотите сыграть еще (Yes или No)?\n"; // suggestion to play again or no
			cin >> answer; // enter answer
		
			if (answer == "Yes" || answer == "yes")
			{
				guessRes = 0; // zeroing result of guess
				countAns = 0; // zeroing counter
				cout << "\nМое число между 1 и 1000.\n"
					"Вы можете его отгадать?\n"
					"Пожалуйста, напечатайте вашу первую догадку.\n";
		
				continue;
			}
		}
		
		if (guessRes < guessNum)
		{
			cout << "Слишком мало. Попытайтесь снова.\n";
		}
		
		if(guessRes > guessNum)
		{
			cout << "Слишком много. Попытайтесь снова.\n";
		}

		countAns++; // add 1 to counter answer
	}
	return 0;
}*/

// 6.40

/*// power function
int power(int, int);

int main()
{
	int x, y; // define variables

	cout << "Enter number and grade for calculate: ";
	cin >> x >> y;

	cout << power(x, y) << endl;

	return 0;
}

int power(int base, int exponent)
{
	if (exponent == 1)
		return base;
	else
		return base * power(base, exponent - 1);
}*/

// 6.41

/*//fibonacci calc
void fibCalc(const double);

int main()
{
	double val; // define variable
	
	cout << "Enter range for calculation number of Fibonacci: "; // suggestion enter number
	cin >> val; // enter value

	fibCalc(val);
	
	return 0;
}

//fibonacci calc
void fibCalc(const double range)
{
	static double temp1; // initialize temp variable
	static double temp2; // initialize temp variable
	double x;
	
	
	

	for (int i = 0; i <= range; i++)
	{
		if (i == 0 || i == 1)
		{
			x = i; // assign i to res
			cout << "Number of Fibonacci [" << i << "]: " << x << endl;
			temp1 = i; // assign i to temp1
			temp2 = 0; // zeroing value

		}
		else
		{
			x = temp1 + temp2; // calculation Fib number
			cout << "Number of Fibonacci [" << i << "]: " << x << endl;
		}
		
		if (i > 1)
		{
			temp2 = temp1;
			temp1 = x;
		}
		
	}
}*/

// 6.42

/*void hanoiTower(int disk = 0, int peg1 = 1, int peg2 = 2, int peg3 = 3);

int main()
{
	int disks; // quantity of disks for transition
		
	cout << "Decision Hanoi Tower task!"
			 "Enter quantity of disks: ";
	cin >> disks;

	hanoiTower(disks);
	
	return 0;
}

void hanoiTower(int disk, int peg1, int peg2, int peg3)
{
	string arrow{ "=>" }; // initialize sign of pass through

	if (disk == 1)
	{
		cout << "Disk n." << disk << "===" << peg1 << arrow << peg2 << endl;
	}
	else
	{
		hanoiTower(disk - 1, peg1, peg3, peg2);
		cout << "Disk n." << disk << "===" << peg1 << arrow << peg2 << endl;
		hanoiTower(disk - 1, peg3, peg2, peg1);
	}

}*/

// 6.43

// 6.44

/*unsigned long long factorial(unsigned long long); // прототип фунхции

int main()
{
	// вычислить фахториа.п дп я значенией от О д о 1 0
	cout << "Value" << setw(12) <<
		"Factorial:" << setw(7) << "Value\n";
	for (int counter = 0; counter <= 5; counter++)
		cout << setw(10) << counter << "!" << setw(8) << factorial(counter)
		<< endl;

	return 0; // успе1Ш1ое заиершение
}// хонец main

 // рекурсивное определение фунхции фахториа.па
unsigned long long factorial(unsigned long long number)
{
	if (number <= 1) // проверить н а основной спучай
	{
		cout << "\n" << number;

		return 1; // основные спучаи : О ! = 1 and 1 ! = 1
	}
	else // рехурсивный шаг
	{
		cout << "\n" << number << " = " << number * factorial(number - 1);
		return number * factorial(number - 1);
	}
}// хонец фунхции factorial*/

// 6.45

/*// declare function for determine biggest common divisor
int gcd(int, int);

int main()
{
	int x, y; // define variable
	while (true)
	{
		cout << "Enter two integer numbers: "; // suggestion to enter two numbers
		cin >> x >> y; // enter two numbers

		cout << "The biggest common divider: " << gcd(x, y) << endl;
	}
	return 0;
}

// define function for determine biggest common divider
int gcd(int a, int b)
{
	if (b == 0)
	{
		return a;
	}
	else
	{
		return gcd(b, a % b);
	}
}*/

// 6.46

/*int main(int count = 1)
{
	cout << count << endl;

	return main(count + 1);
}*/

// 6.47

/*// declare function for randomize different answer
void rightAnswer();
void wrongAnswer();

// a)
void levelKnowledge(int &);

// b)
void typeOperation(char &);

int main()
{
	setlocale(LC_ALL, "rus"); // setup Russian code page

	int x, y, z{ 0 }, k; // define variable
	int level{ 1 }; // initialize level of knowledge
	char operation; // define type of operation

	srand(time(0)); // set randomize

	while (z != EOF)
	{
		levelKnowledge(level);

		typeOperation(operation);

		x = 1 + rand() % level; // assign random value to x
		y = 1 + rand() % level; // assign random value to y

		cout << "Сколько будет " << x << " " << operation << " " 
			<< y << "?" << endl; // print Question
		cin >> z; // enter answer

		if (operation == '+')
		{
			k = x + y;
		}
		else if (operation == '-')
		{
			k = x - y;
		}
		else if (operation == '*')
		{
			k = x * y;
		}
		else if (operation == '/')
		{
			k = x / y;
		}



		while (true)
		{
			if (z == k)
			{
				rightAnswer(); // print result
				cout << endl; // print empty row
				break; // out of cycle
			}
			else
			{
				wrongAnswer();
				cin >> z; // enter answer
			}
		}
	}
	return 0;
}

// determine function different answer
void rightAnswer()
{
	int var = 1 + rand() % 4; // ininitialize variant for answer

	switch (var)
	{
	case 1:
	{
		cout << "Очень хорошо!\n";
		break;
	}
	case 2:
	{
		cout << "Отлично!\n";
		break;
	}
	case 3:
	{
		cout << "Чудесная работа!\n";
		break;
	}
	case 4:
	{
		cout << "Продолжайте работать в том же духе!\n";
		break;
	}
	}
}

void wrongAnswer()
{
	int var = 1 + rand() % 4; // ininitialize variant for answer

	switch (var)
	{
	case 1:
	{
		cout << "Нет. Попытайтесь, пожалуйста, снова.\n";
		break;
	}
	case 2:
	{
		cout << "Неверно. Попытайтесь еще раз.\n";
		break;
	}
	case 3:
	{
		cout << "Не опускайте руки!\n";
		break;
	}
	case 4:
	{
		cout << "Нет. Продолжайте ваши попытки.\n";
		break;
	}
	}
}

void levelKnowledge(int &lev)
{
	cout << "Введите уровень разрядности"
		"(1 - один знак, 2 - два знака, 3 - три знака): ";
	cin >> lev; // enter level

	switch (lev)
	{
	case 1:
	{
		lev = 10; // assign range of one grade number
		break;
	}
	case 2:
	{
		lev = 100;
		break;
	}
	case 3:
	{
		lev = 1000;
		break;
	}
	default:
	{
		cout << "You entered not accepted value. Try to put from 1 to 3.";
		cin >> lev;
		break;
	}
	}
}

void typeOperation(char &ch)
{
	int value; // number type of operation
	enum typeOper {	SUM = 1, SUB, MUL, DIV	};
	
	cout << "введите тип операции"
		"(1 - '+', 2 - '-', 3 - '*', 4 - '/', 5 - случайная операция): ";
	cin >> value; // enter level

	if (value == 5)
	{
		value = SUM + rand() % DIV;
	}

	switch (value)
	{
	case 1:
	{
		ch = '+'; // assign type of operation
		break;
	}
	case 2:
	{
		ch = '-'; // assign type of operation
		break;
	}
	case 3:
	{
		ch = '*'; // assign type of operation
		break;
	}
	case 4:
	{
		ch = '/'; // assign type of operation
		break;
	}
	default:
	{
		cout << "You entered not accepted value. Try to put from 1 to 4.";
		cin >> value;
		break;
	}
	}
}*/

// 6.48

/*//  calculate distance between two points
void distance(double, double, double, double);

int main()
{
	double x1, y1, x2, y2; // define variable

	cout << "Enter four points(x1, y1, x2, y2): "; // suggestion to enter data
	cin >> x1 >> y1 >> x2 >> y2; // enter data

	distance(x1, y1, x2, y2); // call function

	

	return 0;
}

void distance(double a, double b, double a1, double b1)
{
	double x, y; // define variable

	x = a - a1; // calculate position x

	y = b - b1; // calculate position x
	
	cout << "x: " << x << " y: " << y << endl;
}*/

// 6.49

// 6.50
// 6.51

/*int mystery(int, int);

int main()
{
	int x, y;

	cout << "Enter two integers: ";
	cin >> x >> y;
	cout << "The result is " << mystery(x, abs(y)) << endl;

	return 0;
}

// b has to be more 0
int mystery(int a, int b)
{
	if (b == 1)
		return a;
	else
		return a + mystery(a, b - 1);
}*/

// 6.52

// 6.53

// 6.54

int rollDice(); // бросает кости, вычисляет и выводит сумму
void oneGame(int, int); // make model one game

int main()
{
	// перечисление с константами, представлЯJОЩИМИ состояние игры
	enum Status { CONTINUE, WON, LOST };

	int myPoint; // " очко " (игра н е вwиграна и н е проиграна сразу)
	Status gameStatus; // может содержать CONTINUE, WON ип и LOST

	// засеять rенератор случайных чисел текущим временем
	srand(time(0));

	int sumOfDice = rollDice(); // первый бросок костей

   // определить п о первому броску состояние игры и " очко "
	switch (sumOfDice)
	{
	case 7: // вwигрl.IШ - 7 при первом броске
	case 11: // вwигрl.IШ - 1 1 при первом броске
	{
		gameStatus = WON;
		break;
	}
	case 2: // проигрldШ - 2 при первом броске
	case 3: // проигрl.IШ - 3 при первом броске
	case 12: // проигрl.IШ - 1 2 при первом броске
	{
		gameStatus = LOST;
		break;
	}
	default: // не •wигрl.IШ и не проигрl.IШ, запомнить очко
	{
		gameStatus = CONTINUE; // игра не окончена
		myPoint = sumOfDice; // з апомнить пункт
		cout << " Point is " << myPoint << endl;
		break; // в конце swi tch н е обязателен
	}
	}// конец swi tch

// пока игра не закончена
	while (gameStatus == CONTINUE) // не WON ипи LOST
	{
		sumOfDice = rollDice(); // бросить кости снова

	   // determine game status
		if (sumOfDice == myPoint) // вwигрl.IШ броском очка
			gameStatus = WON;
		else
			if (sumOfDice == 7) // проигрldШ броском 7
				gameStatus = LOST;
	}// конец whi le

// вывести сообщение о вwигр1.1Ше ипи проигр1.1Ше
	if (gameStatus == WON)
		cout << " Player wins " << endl;
	else
		cout << " Player loses " << endl;

	return 0; // успешное з авершение
}// конец main

// бросить JСости, вычислить сумму и поJСазать результат•􁭡
int rollDice()
{
	// получить случайнwе значения для JСостей
	int die1 = 1 + rand() % 6; // бросоJС первой JСости
	int die2 = 1 + rand() % 6; // бросоJС второй JСости

	int sum = die1 + die2; // вычислить сумму JСостей

   // поJСазать результаты данного бросJСа
	cout << " Player rolled " << die1 << " + " << die2
		<< " = " << sum << endl;
	return sum; // возвратить сумму JСостей
} // JСонец фунJСции rollDice

// make one model game on money
void oneGame(int wager, int bankBalance = 1000) // inintialize bank value of 1000 $
{
	


}