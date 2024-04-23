#include <iostream>

int main() {
	
	int num;

	std::cout << "숫자를 입력하시오.\n";
	std::cin >> num;

	num % 5 == 0 ? std::cout << num << "는 5의 배수입니다.\n" : 
		std::cout << num << "는 5의 배수가 아니어요. ㅠㅠ\n";

}