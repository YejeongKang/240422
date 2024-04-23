#include <iostream>
int main() {
	std::cout << "나이를 입력하세요.\n";
	int age = 0;
	std::cin >> age;

	std::string result;

	if (age <= 7) {
		result = "유아";
	} else if (age <= 13) {
		result = "초등학생";
	} else if (age <= 16) {
		result = "중학생";
	} else if (age <= 19) {
		result = "고등학생";
	} else if (age < 200) {
		result = "성인";
	} else if (200 <= age) {
		result = "나이가 너무 많습니다..!";
	}
	else {
		return false ;
	}
	std::cout << result;
}

//// 연산자
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
//// 조건문
//int main() {
//	int num1 = 5;
//	int num2 = 10;
//	int num3 = 0;
//	if (num1 > num2) {
//		std::cout << "숫자1이 숫자2보다 크다.";
//	}
//	else if (num1 > num3) {
//		std::cout << "숫자 1이 (숫자2보다 작거나 같고) 숫자3보다 크다.";
//	}
//	else {
//		std::cout << "숫자1이 가장 작거나 숫자2 또는 숫자3과 같다.";
//	}
//	
//
//	return 0;
//}



