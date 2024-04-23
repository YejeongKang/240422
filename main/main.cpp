//
// 작성자 : Yejeong
// 작성일자 : 2024. 04. 22
//
// main 문이 있는 파일

//도구 모음 헤더파일, 라이브러리,...

#include <iostream>
#include <vector>
#include <string>

// 1. 프로그램 전체에서 딱 1개만 존재하는 "함수"
// 2. 프로그램에서 가장 먼저 "실행" 되는 소스코드

int main() // 정의
{	// 코드 블럭

	// 콘솔 문자 "출력"
	std::cout << "hello, world.\n";

	int num;

	// 콘솔 문자 "입력"
	std::cin >> num;

	//// main 함수 연습
	int number;
	std::cout << "숫자를 입력해주세요: ";
	std::cin >> number;
	std::cout << number;

	std::string myname = "yejeong";

	char test2 = 'a'; //65
	
	char test1 = 'b'; //66	
	
	std::string test3 = "포스코";
	std::string test4 = "포스코";
	test4 = "코딩온";

	std::cout << "내가 할 말은 "
		<< test3 + test4 << "입니다.";
	//std::cout << test1 + test2;

	return 0;

}
