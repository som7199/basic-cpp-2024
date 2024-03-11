/*
vector 객체를 생성하고 정수를 입력 받을 때마다 벡터에 삽입하고 평균 출력하기
*/

#include <iostream>
#include <vector>
using namespace std;

int main(void)
{
	vector<int> v;
	int inKey;

	int sum = 0;
	int idx = 0;
	while (true)
	{
		cout << "정수를 입력하세요 (0은 프로그램 종료) > ";
		cin >> inKey;
		if (!inKey)
		{
			cout << "프로그램 종료!" << endl;
			break;
		}
		v.push_back(inKey);
		sum += v.at(idx);
		idx++;
	}

	/*vector<int>::iterator it;
	for (it = v.begin(); it != v.end(); it++) {
		cout << *it << endl;
	}*/

	cout << "> 벡터 요소 값의 평균 출력 : " << sum / v.size();

	return 0;
}

