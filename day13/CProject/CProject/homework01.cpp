/*
vector ��ü�� �����ϰ� ������ �Է� ���� ������ ���Ϳ� �����ϰ� ��� ����ϱ�
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
		cout << "������ �Է��ϼ��� (0�� ���α׷� ����) > ";
		cin >> inKey;
		if (!inKey)
		{
			cout << "���α׷� ����!" << endl;
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

	cout << "> ���� ��� ���� ��� ��� : " << sum / v.size();

	return 0;
}

