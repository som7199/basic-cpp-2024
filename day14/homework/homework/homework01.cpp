// while���� if�������� �迭 ����(��������)�� �ٲپ� ���� ���
#include <iostream>
using namespace std;

int main(void)
{
	char arr[] = { 'a', 'b', 'c', 'd', 'e', 'f', 'g'};
	char reversedArr[sizeof(arr)] = {};		// f e d c b a

	int idx = 0;
	int endIdx = sizeof(arr) - 1;

	while (idx != sizeof(arr))
	{
		reversedArr[idx] = arr[endIdx];
		idx++;
		endIdx--;
		
	}
	//cout << sizeof(arr) << endl;

	for (int i = 0; i < sizeof(reversedArr); i++)
	{
		cout << reversedArr[i] << " ";
	}
	return 0;
}

