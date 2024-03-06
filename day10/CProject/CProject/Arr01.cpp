/*
* 배열 이름 arr는 배열의 시작 주소이다.
int arr[3];	// 배열 선언부에서 배열 인덱스에 있는 숫자는 방의 크기
arr[2];		// 코드 실행에서 배열 인덱스에 있는 숫자는 방 번호

arr[0] = 10;		// 0번방, 첫 번째방의 데이터
*(arr + 0) = 10;	// *(배열의 시작 주소 + 0) = 10
*(arr + 1) = 20; == arr[1] = 20;	// 1번 방에다 20을 집어넣어라!
arr 주소가 0x0011이라면 다음 방, 1번방(두번째방) 주소는 0x0015이다.
방 하나의 크기는 4byte!

int *p;
*p;
*/

#include <iostream>

int main(void)
{
	int arr[5] = { 1, 2, 3, 4, 5 };		// int형 배열 선언
	int* parr = arr;					// 배열의 이름은 주소이다!

	printf("arr 주소 : %p\n", arr);				// arr 주소 : 000000D6B4CFF728
	printf("arr 크기 : %d\n", sizeof(arr));		// int 크기 4 X 방의 개수5 = 20byte
	printf("arr[0]의 주소 : %p\n", &arr[0]);	// arr[0]의 주소 : 000000D6B4CFF728
	printf("arr[1]의 주소 : %p\n", &arr[1]);	// arr[1]의 주소 : 000000D6B4CFF72C
	printf("arr + 1 : %p\n", arr + 1);			// arr + 1 : 000000D6B4CFF72C, arr은 배열의 시작 주소니까 1번방의 주소 리턴! 

	printf("parr 주소 : %p\n", &parr);
	printf("parr 데이터 : %p\n", parr);			// 배열 arr의 주소를 저장하고 있다.
	printf("parr + 1 : %p\n", parr + 1);		// arr[1]의 주소와 동일
	printf("parr[0] : %d\t *pa : %d\t arr[0] :  %d\n", parr[0], *parr, arr[0]);
	return 0;
}