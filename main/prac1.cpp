#include <iostream>
int main() {
	std::cout << "���̸� �Է��ϼ���.\n";
	int age = 0;
	std::cin >> age;

	std::string result;

	if (age <= 7) {
		result = "����";
	} else if (age <= 13) {
		result = "�ʵ��л�";
	} else if (age <= 16) {
		result = "���л�";
	} else if (age <= 19) {
		result = "����л�";
	} else if (age < 200) {
		result = "����";
	} else if (200 <= age) {
		result = "���̰� �ʹ� �����ϴ�..!";
	}
	else {
		return false ;
	}
	std::cout << result;
}

//// ������
//int main() {
//	int num1 = 5;
//	int num2 = 10;
//	int num3 = 0;
//	bool result = false;
//
//	// true? false?
//	// && AND true && true == true
//	// || OR true || false == true, t || t == t
//	// ! NOT !true == false, !false == true
//
//	result = (num1 > num2) && (num1 > num3);
//
//	return 0;
//}
//
//// ���ǹ�
//int main() {
//	int num1 = 5;
//	int num2 = 10;
//	int num3 = 0;
//	if (num1 > num2) {
//		std::cout << "����1�� ����2���� ũ��.";
//	}
//	else if (num1 > num3) {
//		std::cout << "���� 1�� (����2���� �۰ų� ����) ����3���� ũ��.";
//	}
//	else {
//		std::cout << "����1�� ���� �۰ų� ����2 �Ǵ� ����3�� ����.";
//	}
//	
//
//	return 0;
//}



