#include <iostream>

int main() {
	int a;
	int b;
	char oper;
	float re = 0;

	std::cout << "정수 1을 입력하시오.\n";
	std::cin >> a;

	std::cout << "정수 2를 입력하시오.\n";
	std::cin >> b;

	std::cout << "연산자를 입력하시오.\n";
	std::cin >> oper;

	switch (oper) {

	case '+' :
		re = a + b;
		break;

	case '-':
		re = a - b;
		break;

	case '*':
		re = a * b;
		break;

	case '/':
		re = a / b;
		break;

	case '%':
		re = a % b;
		break;

	default :
		std::cout << "잘못된 연산자입니다.\n";

	}

	std::cout << "연산 결과값은 " << re << " 입니다.\n";
	return 0;
}