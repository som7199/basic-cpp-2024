#include <iostream>
/*
namespace ����
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
	using Hybrid::HybFunc;	// Ű���� using�� �̿��ؼ� �̸����� Hybrid�� ���ǵ� HybFunc ȣ�� ��, �̸� ������ �������� �ʰ� ȣ���ϰڴٴ� ���� ���(����)
	HybFunc();				// using ������ ���� �̸������� ���� ���� HybFunc() ȣ�� ����
	return 0;
}