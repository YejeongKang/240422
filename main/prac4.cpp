#include <iostream>

int main() {
	int a;
	int b;
	char oper;
	float re = 0;

	std::cout << "���� 1�� �Է��Ͻÿ�.\n";
	std::cin >> a;

	std::cout << "���� 2�� �Է��Ͻÿ�.\n";
	std::cin >> b;

	std::cout << "�����ڸ� �Է��Ͻÿ�.\n";
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
		std::cout << "�߸��� �������Դϴ�.\n";

	}

	std::cout << "���� ������� " << re << " �Դϴ�.\n";
	return 0;
}