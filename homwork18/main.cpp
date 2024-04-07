#include <iostream>;
#include <ctime>
#include <cstdlib>
//Задача 1.
int power(int mean = 1, int mean1 = 5) {
	int result = 0;
	for (int i = 0; i <= mean1; i++)
		result = mean + mean1;
	return result;
}
//Задача 2.
inline double sum(double num1, double num2, double num3) {
	double average = 0;
	return (num1 + num2 + num3) / 3;
}
//Задача 3.
int max(int num1, int num2, int num3) {
	std::cout << "Maximum number -> "; 
	return num1 > num2 ? num1 : num2 && 
		num2 > num3 ? num2 : num3 && num1 > num3 ? num1 : num3; 
}
short max(short num1, short num2, short num3) {
	std::cout << "Maximum number -> ";
	return num1 > num2 ? num1 : num2 &&
		num2 > num3 ? num2 : num3 && num1 > num3 ? num1 : num3;
}
double max(double num1, double num2, double num3) {
	std::cout << "Maximum number -> ";
	return num1 > num2 ? num1 : num2 &&
		num2 > num3 ? num2 : num3 && num1 > num3 ? num1 : num3;
}
//Задача 4.
template <typename T>
void mas_arr(T arr[], const int length) {
	int neg = 0;
	std::cout << "{ ";
	for (int i = 0; i < length; i++) {
			if (arr[i] < 0)
		std::cout << arr[i] << ", ";
		neg = arr[i];
	}
	std::cout << "\b\b }\n";

}

int main() {
	setlocale(LC_ALL, "Russian");
	
	//Задача 1.
	std::cout << "Задача 1:\n";
	std::cout << "2 + 3 = " << power(2, 3) << std::endl;
	std::cout << "1 + 4 = " << power(1, 4) << std::endl;
	std::cout << "2 + 4 = " << power(2, 4) << std::endl;

	//Задача 2.
	std::cout << "Задача 2:\n";
	int n, m, s;
	std::cout << "Введите первое число -> ";
	std::cin >> n;
	std::cout << "Введите второе число -> ";
	std::cin >> m;
	std::cout << "Введите третье число -> ";
	std::cin >> s;
	std::cout << "Среднее арифметическое: " << sum(n, m, s) << std::endl;

	//Задача 3.
	std::cout << "Задача 3:\n";
	std::cout << max(12, 34, 10) << std::endl;
	std::cout << max(-12, -2, -10) << std::endl;
	std::cout << max(6.4, 5.8, 2.3) << std::endl;

	//Задача 4.
	std::cout << "Задача 4:\n";
	const int size = 6;
	short arr[size]{ 10, 4, -13, 2, 7, -8 };
	std::cout << "Массив:\n";
	mas_arr(arr, size);

	return 0;
}