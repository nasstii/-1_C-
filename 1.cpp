#include <iostream> // Подключение библиотеки ввода и вывода
#include <cmath> // Подключение библиотеки математических функций
double pi = 3.14; // Константа Pi
double strap(double a, double b, double h) {
	return ((a + b) / 2) * h;
} // Функция для нахождения площади трапеции
double scircle(double r) {
	return (pi * pow(r, 2));
} // Функция для нахождения площади круга
double circ(double r) {
	return (2 * pi * r);
} // Функция для нахождения длины окружности
double srighttriangle(double a, double b) {
	return 0.5 * a * b;
} //Функция для нахождения площади прямоугольного треугольника
double hypotinuse(double a, double b) {
	return sqrt(pow(a, 2) + pow(b, 2));
} // Функция для нахождения гипотенузы
double median(double a, double b, double c) {
	double m = 0.5 * sqrt(2 * pow(a, 2) + 2 * pow(b, 2) - pow(c, 2));
	return m;
} // Функция для нахождения медианы
void polindrom4(int a) {
	int a1 = a % 10;
	a = a / 10;
	int a2 = a % 10;
	a = a / 10;
	int a3 = a % 10;
	a = a / 10;
	int a4 = a % 10;
	if (a1 == a4 && a2 == a3)
		std::cout << "Your number is polindrom" << std::endl;
	else std::cout << "It is not polindrom" << std::endl;
} // Функция определяющее полиндром ли число. Обозначили void так как не будет вывода каких-либо чисел (отсутствует return) 
double perehod51(double x, double y)
{
	return (sqrt(x * x + y * y));

} // Функция для перехода к полярным (r)
double perehod52(double x, double y)
{
	return (atan(y / x));
} // Функция для перехода к полярным (fi)

double perehod61(double r, double fi)
{
	return (r*cos(fi));

} // Функция для перехода к декартовым (х)
double perehod62(double r, double fi)
{
	return (r*sin(fi));
} // Функция для перехода к декартовым (у)

void task20(double a, double b, double c, double d) {
	if (a < c && b < d)
		std::cout << "You can put one rectangle in another" << std::endl;
	else if (a < d && b<c)
		std::cout << "You can put one rectangle in another" << std::endl;
	else std::cout << "You can not put one rectangle in another" << std::endl;
} // Функция определяющая можем ли мы поместить один треугольник в другой
void task9(double a) {
	int hour = a / 3600;
	a = a - (hour * 3600);
	int min = a / 60;
	std::cout << hour << " hours " << min << " minutes have passed" << std::endl;
} // Функция для перевод в целые минуты и часы
void task11(double a) {
	if (a > 1000) 
		a = a - a * 0.1;
	std::cout << "Total cost = " << a << std::endl;
} // Функция для нахождения скидки и итоговой цены
void task13() {
	int start = 1;
	int end = 9;
	int mult;
	int a = rand() % (end - start + 1) + start;
	int b = rand() % (end - start + 1) + start;
	std::cout << a << " * " << b << " = ";
	std::cin >> mult;
	std::cout << std::endl;
	if (mult == (a * b))
		std::cout << "Excellent! It is right" << std::endl;
	else std::cout << "Mistake!" << std::endl;
} // Функция для рандомных чисел
void task15(int a) {
	enum Month // создаем перечесляемый тип
	{
		January = 1, // присваиваем значение 0
		Fabruary, // =1
		March, // =2
		April, // = +1 и т.д.
		May,
		June,
		July,
		August,
		September,
		October,
		November,
		December,
	};
	switch (a) // проверка на условия 
	{
	case January:
		std::cout << "January. Winter." << std::endl;
		break;
	case Fabruary:
		std::cout << "Fabruary. Winter." << std::endl;
		break;
	case March:
		std::cout << "March. Spring." << std::endl;
		break;
	case April:
		std::cout << "April. Spring." << std::endl;
		break;
	case May:
		std::cout << "May. Spring." << std::endl;
		break;
	case June:
		std::cout << "June. Summer." << std::endl;
		break;
	case July:
		std::cout << "July. Summer." << std::endl;
		break;
	case August:
		std::cout << "August. Summer." << std::endl;
		break;
	case September:
		std::cout << "September. Autumn." << std::endl;
		break;
	case October:
		std::cout << "October. Autumn." << std::endl;
		break;
	case November:
		std::cout << "November. Autumn." << std::endl;
		break;
	case December:
		std::cout << "December. Winter." << std::endl;
		break;
	}
}
void kopeika() {
	std::cout << "Enter the number (1 to 99) - ";
	int a;
	std::cin >> a;
	std::cout << std::endl;
	if (a == 11 || a == 12 || a == 13 || a == 14)
		std::cout << a << " kopeek" << std::endl;
	else if (a % 10 == 1)
		std::cout << a << " kopeika" << std::endl;
	else if (a % 10 == 2 || a % 10 == 3 || a% 10 == 4)
		std::cout << a << " kopeyki" << std::endl;
	else std::cout << a << " kopeek" << std::endl;
} // Функция для склонения слова
void sravn19(int a, int b) {
	int mult = 1;
	while (a > 0) {
		int c = a % 10;
		a = a / 10;
		mult = mult * c;
	}
	if (mult > b)
		std::cout << "The product of the digits of your number (" << mult << ")  is greater than " << b << std::endl;
	else if (mult == b)
		std::cout << "The product of the digits of your number (" << mult << ")  is equally " << b << std::endl;
	else std::cout << "The product of the digits of your number (" << mult << ")  is less than " << b << std::endl;
} // Функция для сравнения произведения цифр числа и числа b
void kratn19(int a) {
	int sum = 0;
	while (a > 0) {
		int c = a % 10;
		a = a / 10;
		sum = sum + c;
	}
	if (sum % 7 == 0)
		std::cout << "multiple of 7" << std::endl;
	else std::cout << "not a multiple of 7" << std::endl;
} // Функция для определения кратности суммы цифр числа и 7
void size() {
	std::cout << "int: " << sizeof(int) << " byte" << std::endl; 
	std::cout << "char: " << sizeof(char) << " byte" << std::endl;
	std::cout << "float: " << sizeof(float) << " byte" << std::endl;
	std::cout << "double: " << sizeof(double) << " byte" << std::endl;
	std::cout << "long long: " << sizeof(long long) << "byte" << std::endl; 
} // Функция для размера типов 
int main() {
	/*task 1*/
	std::cout << "Task 1" << std::endl;
	double a1 = 0;
	double b1 = 0;
	double h1 = 0; // создание переменных и присвоение значения  
	std::cout << "Enter the first side: " << std::endl;
	std::cin >> a1;
	std::cout << "Enter the second side: " << std::endl;
	std::cin >> b1;
	std::cout << "Enter the height of the trapeze: " << std::endl;
	std::cin >> h1;
	std::cout << "The area of the trapeze is " << strap(a1, b1, h1) << std::endl;
	std::cout << std::endl;

	/*task 2*/
	std::cout << "Task 2" << std::endl;
	double r2 = 0; //инициализация переменной 
	std::cout << "Enter the radius:" << std::endl;
	std::cin >> r2; //ввод значения
	std::cout << "The area of circle is  " << scircle(r2) << std::endl << "The circumference is " << circ(r2) << std::endl;
	std::cout << std::endl;

	/*task 3*/
	std::cout << "Task 3" << std::endl;
	double a3 = 0;
	double b3 = 0; // инициализация двух переменных целочисленного типа
	std::cout << "Enter the first side: " << std::endl;
	std::cin >> a3; // присвоение значений
	std::cout << "Enter the second side: " << std::endl;
	std::cin >> b3; // присвоение значений с клавиатуры
	std::cout << "The area of right triangle is " << srighttriangle(a3, b3) << std::endl << "The hypotinuse is " << hypotinuse(a3, b3) << std::endl;
	std::cout << std::endl;

	/*task 4*/
	std::cout << "Task 4" << std::endl;
	int a4 = 0; // инициализация переменной
	std::cout << "Enter the integer: " << std::endl;
	std::cin >> a4; // присвоение нового значения с клавиатуры
	int sum4 = 0;
	while (a4 > 0) { // создание цикла с условием
		sum4 += a4 % 10; // деление с результатом остатка
		a4 = a4 / 10; // деление с результатом целой части
	}
	std::cout << "The count of numbers is " << sum4 << std::endl;
	std::cout << std::endl;

	/*task 5*/
	std::cout << "Task 5" << std::endl;
	double x5 = 0; // создание переменных с вещественным типом
	double y5 = 0;
	std::cout << "Enter the coordinat x - ";
	std::cin >> x5; // присвоение новых значений с клавиатуры
	std::cout << "Enter the coordinat y - ";
	std::cin >> y5;
	std::cout << "r = " << perehod51(x5, y5) << " fi = " << perehod52(x5, y5) << std::endl;
	std::cout << std::endl;

	/*task 6*/
	std::cout << "Task 6" << std::endl;
	double r6 = 0; //инициализация переменных
	double fi6 = 0;
	std::cout << "Enter the coordinat polar r - ";
	std::cin >> r6; // прсивоение новых значений с клавиатуры
	std::cout << "Enter the coordinat polar fi - ";
	std::cin >> fi6;
	std::cout << "r = " << perehod51(r6, fi6) << " fi = " << perehod52(r6, fi6) << std::endl;
	std::cout << std::endl; // вызов функции в мейн

	/*task 7*/
	std::cout << "Task 7" << std::endl;
	double a7 = 0;
	double b7 = 0;
	double c7 = 0; // инициализация переменных
	std::cout << "Enter the coefficient a: " << std::endl;
	std::cin >> a7;
	std::cout << "Enter the coefficient b: " << std::endl;
	std::cin >> b7;
	std::cout << "Enter the coefficient c: " << std::endl;
	std::cin >> c7; // присвоение новых значений с клавиатуры
	double d7 = 0;
	if (b7 < 0) { // проверка условия
		if (c7 < 0)
			std::cout << "The resulting equation: " << a7 << "x^2" << b7 << "x" << c7 << std::endl;
		if (c7 > 0)
			std::cout << "The resulting equation: " << a7 << "x^2" << b7 << "x+" << c7 << std::endl;
	}
	if (b7 > 0) {
		if (c7 < 0)
			std::cout << "The resulting equation: " << a7 << "x^2+" << b7 << "x" << c7 << std::endl;
		if (c7 > 0)
			std::cout << "The resulting equation: " << a7 << "x^2+" << b7 << "x+" << c7 << std::endl;
	}
	d7 = pow(b7, 2) - 4 * a7 * c7; // определение степени
	if (d7 < 0) 
		std::cout << "no roots" << std::endl;;
	if (d7 > 0) {
		std::cout << "x1 = " << ((-1 * b7) + sqrt(d7)) / (2 * a7) << std::endl;
		std::cout << "x2 = " << ((-1 * b7) - sqrt(d7)) / (2 * a7) << std::endl;
	}
	if (d7 == 0)
		std::cout << "x = " << (-1 * b7) / (2 * a7) << std::endl;
	std::cout << std::endl;

	/*task 8*/
	std::cout << "Task 8" << std::endl;
	double a8 = 0;
	double b8 = 0;
	double c8 = 0; // инициализация переменных
	std::cout << "Enter the first side: " << std::endl;
	std::cin >> a8;
	std::cout << "Enter the second side: " << std::endl;
	std::cin >> b8;
	std::cout << "Enter the third side: " << std::endl;
	std::cin >> c8; // присвоение новых значений с клавиатуры
	std::cout << "New sides: " << std::endl;
	std::cout << "a = " << median(a8, b8, c8) << " b = " << median(b8, c8, a8) << " c = " << median(c8, a8, b8) << std::endl;
	std::cout << "Medians of the new triangle: " << std::endl;
	std::cout << "1 - " << median(median(a8, b8, c8), median(b8, c8, a8), median(c8, a8, b8)) << "; 2 - " << median(median(b8, c8, a8), median(c8, a8, b8), median(a8, b8, c8)) << "; 3 - " << median(median(c8, a8, b8), median(a8, b8, c8), median(b8, c8, a8)) << std::endl;
	std::cout << std::endl; // вызов функций в мейн значениями которых являются так же функции( сначала вызывается внешняя функция, а потом уже внутренние, которые являются переменными внешней функции)

	/*task 9*/
	std::cout << "Task 9" << std::endl;
	int k9 = 0; // создание новой переменной
	std::cout << "What is the second of the day now?" << std::endl;
	std::cin >> k9; // присвоение другого значения
	std::cout << std::endl;
	task9(k9); // вызов функции в мейн
	std::cout << std::endl;

	/*task 10*/
	std::cout << "Task 10" << std::endl;
	double a10 = 0;
	double b10 = 0;
	double c10 = 0; // инициализация переменных
	std::cout << "Enter the first side: " << std::endl;
	std::cin >> a10;
	std::cout << "Enter the second side: " << std::endl;
	std::cin >> b10;
	std::cout << "Enter the third side: " << std::endl;
	std::cin >> c10; // присваивание новых значений с клавиатуры
	if (((a10 == b10) && (a10 != c10)) || ((a10 == c10) && (c10 != b10)) || ((b10 == c10) && (c10 != a10)))
		std::cout << "the triangle is isosceles" << std::endl;
	else if ((a10 == b10) && (b10 == c10))
		std::cout << "the triangle is equilateral" << std::endl;
	else // проверка условия через иф и елсе
		std::cout << "the triangle is versatile" << std::endl;
	std::cout << std::endl;

	/*task 11*/
	std::cout << "Task 11" << std::endl;
	double a11 = 0; // создание новой переменной
	std::cout << "Enter the purchase price - ";
	std::cin >> a11; // присваивание нового значения
	std::cout << std::endl;
	task11(a11); // вызов функции
	std::cout << std::endl;

	/*task 12*/
	std::cout << "Task 12" << std::endl;
	double height12 = 0;// создание новой переменной
	double weight12 = 0;// создание новой переменной
	std::cout << "Enter your height: ";
	std::cin >> height12;// присваивание нового значения
	std::cout << std::endl;
	std::cout << "Enter your weight: ";
	std::cin >> weight12;// присваивание нового значения
	std::cout << std::endl;
	double rec12 = 0;
	rec12 = (height12 - 100) - weight12;
	if (rec12 > 0)
		std::cout << "You need to gain " << rec12 << " kilograms" << std::endl;
	else if (rec12 < 0)
		std::cout << "You need to lose " << abs(rec12) << " kilograms" << std::endl;
	else if (rec12 == 0)
		std::cout << "You have the perfect weight! :)" << std::endl;
	std::cout << std::endl;

	/*task 13*/
	std::cout << "Task 13" << std::endl;
	task13();// вызов функции в мейн
	std::cout << std::endl;

	/*task 14*/
	std::cout << "Task 14" << std::endl;
	int day14 = 0;// создание новой переменной
	int min14 = 0;// создание новой переменной
	std::cout << "Enter the day of the negotiation week (1 - Monday ... 7 - Sunday) - ";
	std::cin >> day14;// присваивание нового значения
	std::cout << std::endl;
	std::cout << "Enter the duration of the negotiations (in minutes) - ";
	std::cin >> min14;// присваивание нового значения
	std::cout << std::endl;
	if (day14 == 6 || day14 == 7)
		std::cout << "Your cost = " << (min14 * 10) - (min14 * 10 * 0.2) << std::endl;
	else
		std::cout << "Your cost = " << (min14 * 10) << std::endl;
	std::cout << std::endl;

	/*task 15*/
	std::cout << "Task 15" << std::endl;
	int a15 = 0;// создание новой переменной
	std::cout << "Enter the number of month - ";
	std::cin >> a15;// присваивание нового значения
	std::cout << std::endl;
	task15(a15);// вызов функции в мейн
	std::cout << std::endl;

	/*task 16*/
	std::cout << "Task 16 " << std::endl;
	int a16 = 0;// создание новой переменной
	std::cout << "Enter a six-digit number - ";
	std::cin >> a16;// присваивание нового значения
	std::cout << std::endl;
	int n16 = 0;
	int sum3 = 0;
	int sum6 = 0;
	int b16 = 0;// создание новой переменной
	while (a16 > 0) { //создание цикла с условием
		if (n16 < 3) {
			b16 = a16 % 10;
			a16 = a16 / 10;
			n16 += 1;
			sum3 = sum3 + b16;
		}
		if (3 <= n16 && n16 < 6) {
			b16 = a16 % 10;
			a16 = a16 / 10;
			n16 += 1;
			sum6 = sum6 + b16;
		} // проверка условия через иф
	}
	
	if (sum3 == sum6) 
		std::cout << "You are a lucky guy!" << std::endl;
	else
		std::cout << "You will be lucky next time!" << std::endl;
	std::cout << std::endl;

	/*task 17*/
	std::cout << "Task 17" << std::endl;
	kopeika();// вызов функции в мейн
	std::cout << std::endl;

	/*task 18*/
	std::cout << "Task 18" << std::endl;
	int a18 = 0;// создание новой переменной
	std::cout << "Enter a four-digit number - ";
	std::cin >> a18;// присваивание нового значения
	std::cout << std::endl;
	polindrom4(a18);// вызов функции в мейн
	std::cout << std::endl;

	/*task 19*/
	std::cout << "Task 19" << std::endl;
	int a19 = 0;// создание новой переменной
	std::cout << "Enter the three-digit number - ";
	std::cin >> a19;// присваивание нового значения
	std::cout << std::endl;
	int b19 = 0;// создание новой переменной
	std::cout << "Enter the integer - ";
	std::cin >> b19;// присваивание нового значения
	std::cout << std::endl;
	sravn19(a19,b19);// вызов функции в мейн
	kratn19(a19);// вызов функции в мейн
	std::cout << std::endl;

	/*task 20*/
	std::cout << "Task 20" << std::endl;
	double a20 = 0;
	double b20 = 0;
	double c20 = 0;
	double d20 = 0;// создание новой переменной
	std::cout << "Enter the first side (1 rectangle) - ";
	std::cin >> a20;
	std::cout << std::endl << "Enter the second side (1 rectangle) - ";
	std::cin >> b20;
	std::cout << std::endl << "Enter the first side (2 rectangle) - ";
	std::cin >> c20;
	std::cout << std::endl << "Enter the second side (2 rectangle) - ";
	std::cin >> d20;// присваивание нового значения
	std::cout << std::endl;
	task20(a20, b20, c20, d20);// вызов функции в мейн
	std::cout << std::endl;

	/*task 21*/
	std::cout << "Task 21" << std::endl;
	size();// вызов функции в мейн
}