#include <iostream>
/*
namespace 개념
*/
using namespace std;

namespace Hybrid
{
	void HybFunc(void)
	{
		std::cout << "So simple function!" << std::endl;
		std::cout << "In namespace Hybrid!" << std::endl;
	}
}

int main(void)
{
	using Hybrid::HybFunc;	// 키워드 using을 이용해서 이름공간 Hybrid에 정의된 HybFunc 호출 시, 이름 공간을 지정하지 않고 호출하겠다는 것을 명시(선언)
	HybFunc();				// using 선언을 통해 이름공간의 지정 없이 HybFunc() 호출 ㅎㅎ
	return 0;
}