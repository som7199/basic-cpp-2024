#include <iostream>
/*
namespace º°Äª
*/
using namespace std;

namespace AAA
{
	namespace BBB
	{
		namespace CCC
		{
			int num1;
			int num2;
		}
	}
}

int main(void)
{
	AAA::BBB::CCC::num1 = 20;
	AAA::BBB::CCC::num2 = 30;

	namespace ABC = AAA::BBB::CCC;	// AAA::BBB::CCC¿¡ ABC¶ó´Â º°ÄªÁÖ±â!
	cout << ABC::num1 << endl;
	cout << ABC::num2 << endl;
	return 0;
}