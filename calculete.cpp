//// tutorCpp2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

//#include <iostream>
//
//int main()
//{
//	setlocale(LC_ALL, "Russian");
//
//	std::cout << "привет калькулятор\n";
//	float number1, number2;
//	std::cout << "введите первое число: ";
//	std::cin >> number1;
//	std::cout << "введите второе число: ";
//	std::cin >> number2;
//
//	char operation;
//	std::cout << "введите операцию (+, -, *, /): ";
//	std::cin >> operation;
//	float result;
//	if (operation == '+') {
//		result = number1 + number2;
//	}
//	else if (operation == '-') {
//		result = number1 - number2;
//	}
//	else if (operation == '*') {
//		result = number1 * number2;
//	}
//	else if (operation == '/') {
//		if (number2 != 0) {
//			result = number1 / number2;
//		}
//		else {
//			std::cout << "Ошибка: деление на ноль!" << std::endl;
//			return 1; // Завершение программы с ошибкой
//		}
//	}
//	else {
//		std::cout << "Неизвестная операция!" << std::endl;
//		return 1; // Завершение программы с ошибкой
//	}
//	std::cout << "Результат: "<<number1 <<" "<<operation<<" "<<number2 <<" = " << result << std::endl;
//
//	system("pause>0");
//	return 0;
//}