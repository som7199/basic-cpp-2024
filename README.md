# 심화 프로그래밍 2024
IoT 개발자 심화 프로그래밍 언어 학습 리포지토리

## 1일차
- 개발환경 설치
	- Visual Studio 2022 Community 설치
	- C, C++ 소스코드 실행
	- C++ 개념
	
- 제어문
	1. 선택제어문 
		- if, switch
		- if, else 문(C언어종류) / elif = Python
		- 반복문 For
		- 반복문 While
		- Overloading(재정의), Overriding
		
	2. 반복제어문 
		- for,while
		- for(초기식; 조건식; 증감식){
			1. 초기식을 가지고 조건식을 따진다.
			2. 참이면 for문의 실행문 실행
			3. 증감식을 실행
			4. 조건식을 따지고
			2.
			3.
			4.
			.
			.
			.
		}
	
- 지역변수 = 로컬변수
	1. 선언되어진 범위 안에서만 사용이 가능(static 영역에 저장)

- 자료형
	1. 문자 : 문자(char),문자열
	2. 숫자 : 정수(int),실수
	
- 계산기 만들기

## 2일차
- C에서 메모리
	- 실행중인 프로그램은 운영체제로부터 메모리 공간을 할당 받는데, 크게 데이터, 스택, 힙 영역으로 나뉜다.
		1. 데이터 : 전역변수가 저장되는 영역, 함수, 전역변수, 상수, 문자리터럴
		2. 스택 : 지역변수 및 매개변수가 저장되는 영역
		3. 힙(heap) : 사용자에게 할당된 영역, malloc 함수호출에 의해 프로그램이 실행되는 과정에서 동적으로 할당이 이뤄지는 영역
		- malloc & free : malloc 함수호출에 의해 할당된 메모리 공간은 free 함수호출을 통해서 소멸하지 않으면 해제되지 않는다.
		- 사용하려면 malloc()(C++:new)으로 할당받고 free()(C++:delete)로 반환

- A & B => 비트연산자 : A와 B를 논리곱 연산해라
	- 0b1000 1111(2진수)	: 0x8f(16진수) // 8421
	- 0b 1011 0010 = 0xb2

- A & B 연산하기
	- A : 0b 1000 1111
	- B : 0b 1011 0010
	- A&B :  1000 0010
	
- A && B => 논리연산자 : 논리곱(A, B 둘 다 참이면 참)

- 참조자
```cpp
int num = 10;		// 일반적인 변수 선언
int* ptr = &num1;	// 포인터 변수 ptr에 num1의 주소값 저장
int& num2 = num1;	// num1에 대한 참조자 num2를 선언
// 이미 선언된 변수 앞에 &가 오면, 주소 값의 반환을 뜻하지만
// 새로 선언되는 변수의 이름 앞에 &가 오면, 참조자의 선언을 뜻함

// 참조자 선언과 동시에 변수로 초기화! 그래야 별명을 지어주지
int* pnum = &num;	// 주소로 num변수에 접근 => 변수의 주소 값 저장 
int &rnum = num;	// 참조로 num변수에 접근 => 참조자 rnum 선언, num의 메모리공간에 rnum이라는 이름이 하나 더 생긴 것! 
```


## 3일차 => 조퇴해서 정리 필요!! (p126-136)
- 객체지향 언어의 꽃은 클래스!
	- new라는 키워드로 객체 생성
	- 그럼 우리가 만드는 객체는 힙 영역에 만들어지겠지
	- 힙 영역에 객체 생성, 스택 영역에서 포인터 변수를 만들기!
	- 힙 영역에 만들어져 있는 메모리 주소를 스택 영역에 있는 포인터 변수에 넣어서 접근한다!

## 4일차
- Class
	- 멤버 변수와 멤버 함수로 구성된다.
	- 클래스 내부에는 멤버들의 선언으로 작성된다.
	- 멤버 함수의 정의를 외부로 빼낸다. (스코프 연산자 사용)
	- 일반적으로 멤버 변수는 private, 멤버함수 public을 사용한다.
	
- 생성자(Constructor)
	- 클래스 이름과 같은 멤버 함수로 출력은 없다.
	- 객체 생성 시 자동으로 호출되는 멤버 함수
	- 모든 클래스는 디폴트 생성자를 가지고 있다.
	- 만약 명시적으로 생성자를 작성하면 디폴트 생성자의 호출은 불가하며 디폴트 생성자가 필요한 경우는 명시적으로 작성한다.
	- 멤버 변수들의 초기화를 담당한다.

- 멤버 이니셜라이저(Member Initializer)
	- 객체 생성 전에 선언과 동시에 초기화가 필요한 경우에 사용한다.
	- const 변수와 참조 변수의 초기화에 사용한다.
	- 이니셜라이저를 사용하면 선언과 동시에 초기화가 이뤄지는 형태로 바이너리 코드가 생성된다.
	- const 변수, 참조자 : 선언과 동시에 초기화해야함

## 5일차 => 조퇴 (복사 생성자 전체)
- 메모리 공간의 할당 이후에 생성자의 호출까지 완료되어야 '객체'라고 할 수 있다.
- 즉, 객체가 되기 위해서는 반드시 하나의 생성자가 호출되어야 한다.
- 생성자를 정의하지 않는 클래스에는 C++ 컴파일러에 의해 디폴트 생성자라는 것이 자동으로 삽입된다.
- 따라서 모든 객체는 한번의 생성자 호출을 동반한다.
- new 연산자를 이용한 객체의 생성 시에도 생성자가 호출된다.
	- AAA *ptr = new AAA;
- 단, C언어의 malloc 함수 사용 시 생성자는 호출되지 않는다!!!
	- AAA *ptr = (AAA*)malloc(sizeof(AAA));
	- malloc 함수 호출 시 실제로는 AAA 클래스의 크기 정보만 바이트 단위로 전달되므로, 생성자가 호출될 리 없다.
=> 객체를 동적으로 할당하려는 경우에는 반드시 new 연산자를 사용해야한다!	

포인터 배열 : 포인터를 저장하는 배열
배열 포인터 : 배열을 가리키는 포인터, 배열의 주소를 저장하고 있는 포인터

## 6일차
- 복사 생성자가 무한히 반복 가능하기 때문에
- 복사 생성자는 입력으로 객체를 받는, 참조 타입으로 받는 생성자
- 생성자의 오버로딩!
- 복사 생성자의 매개변수 선언에 const는 필수가 아님, 그치만 참조형의 선언을 의미하는 &는 반드시 삽입!!
- & 선언이 없다면 복사 생성자의 호출은 무한루프에 빠짐 

- 복사 생성자의 호출 시점
	1. 기존에 생성된 객체를 이용해 새로운 객체를 초기화하는 경우
	2. Call-by-value 방식의 함수 호출 과정에서 객체를 인자로 전달하는 경우
	3. 객체를 반환하되, 참조형으로 반환하지 않는 경우

```cpp
int func(int a) {	// a = 10;, num의 10을 복사해서 사용한다.
	a = 10 + a;
	return a;		// a = 20;
}
// main에서
int num = 10;
int res = func(num);	// res = 20; , a의 20과 res의 20은 다른 놈! a가 없어지기전에 a의 값을 '복사'해서 사용하는거!! => 복사 생성자 호출됨
```

## 7일차


## 8일차

## 9일차

## 10일차

