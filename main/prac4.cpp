//SWITCH

#include <iostream>

int main() {
	float a;
	float b;
	char oper;
	float re;

	std::cout << "���� 1�� �Է��Ͻÿ�.\n";
	std::cin >> a;

	std::cout << "���� 2�� �Է��Ͻÿ�.\n";
	std::cin >> b;

	std::cout << "�����ڸ� �Է��Ͻÿ�.\n";
	std::cin >> oper;

	switch (oper) // ������ �������� ������ Ÿ�Ը� ���� �� �ִ�.
	{
	// char Ÿ���� ''�� ������� ��.
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
		std::cout << "�߸��� �������Դϴ�.\n";

	}

	std::cout << "���� ������� " << re << " �Դϴ�.\n";
	return 0;
}