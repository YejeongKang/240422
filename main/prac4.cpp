//SWITCH

#include <iostream>

int main() {
	float a;
	float b;
	char oper;
	float re;

	std::cout << "정수 1을 입력하시오.\n";
	std::cin >> a;

	std::cout << "정수 2를 입력하시오.\n";
	std::cin >> b;

	std::cout << "연산자를 입력하시오.\n";
	std::cin >> oper;

	switch (oper) // 변수는 정수형과 열거형 타입만 넣을 수 있다.
	{
	// char 타입은 ''로 감싸줘야 함.
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

	default :
		std::cout << "잘못된 연산자입니다.\n";

	}

	std::cout << "연산 결과값은 " << re << " 입니다.\n";
	return 0;
}