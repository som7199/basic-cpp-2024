#include <iostream>
using namespace std;

template <typename T>
T Add(T num1, T num2)
{
	return num1 + num2;
}

int main(void)
{
    // 정수형과 실수형을 모두 받아서 덧셈을 수행하는 템플릿 함수를 호출하여 출력
	cout << Add<int>(15, 20) << endl;
	cout << Add<double>(2.9, 3.7) << endl;
	cout << Add<int>(3.2, 3.2) << endl;
	cout << Add<double>(3.14, 2.75) << endl;
	return 0;
}

/*
1. template <typename T>:
    -> 템플릿 함수의 선언부로, 템플릿 매개변수 T를 사용하여 일반화된 함수를 정의.

2. T Add(T num1, T num2):
    -> 템플릿 함수의 정의부로, 템플릿 매개변수 T로 받은 두 인자를 더한 값을 반환.

3 .int main(void):
    -> 프로그램의 시작을 나타내는 main 함수의 정의부로, 템플릿 함수를 호출하여 다양한 자료형의 덧셈을 수행함.

4. cout << Add(15, 20) << endl;:
    -> Add 함수를 호출하여 정수형 두 개를 더한 결과를 출력함.
        -> 여기서 Add<int>와 같이 템플릿 인자를 명시적으로 지정하지 않아도, 컴파일러가 자동으로 타입을 추론하여 호출함.

5. cout << Add(2.9, 3.7) << endl;:
    -> 실수형 두 개를 더한 결과를 출력함.
        -> 마찬가지로 템플릿 인자를 명시적으로 지정하지 않아도, 컴파일러가 타입을 추론하여 호출함.

6. cout << Add(3.2, 3.2) << endl;:
    -> 정수형과 실수형을 혼합하여 덧셈을 시도함.
        -> C++에서는 타입을 일치시키지 않고 혼합하여 계산할 수 있지만, 결과는 예측할 수 없음.
            -> 이 경우에는 정수형으로 해석되어 6을 출력함.

7.cout << Add(3.14, 2.75) << endl;:
    -> 실수형 두 개를 더한 결과를 출력한다.
        -> 부동 소수점 연산으로 인해 예상 결과인 5.89를 출력함.
*/