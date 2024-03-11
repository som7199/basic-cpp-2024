#include "127_1_Training.h"
#include "127_2_TrainingFunc.cpp"
#include <string>
#include <typeinfo>
using namespace std;

int main(void)
{
	Product* product[100] = {};
	int click1 = 0;
	int i = 0;	// ������ ��ü �������� ����
	string id;
	int price = 0;
	string producer;
	string ISBN;
	string author;
	string title;
	string model;
	int RAM = 0;
	string cpu;

	while (true)
	{
		cout << "-----��ǰ ���� ���α׷�-----" << endl;
		cout << "1. ��ǰ�߰� 2. ��ǰ��� 3. ��ǰ�˻� 4. ����" << endl;
		cin >> click1;
		if (cin.fail())
		{
			cin.ignore(INT_MAX, '\n');	// �Է��Ͽ� ���ڷ� �ν���'\n'�� ����
										// cin.ignore(A,B) => A: ���������ϴ� ���� ��, B: ���� ����
			cin.clear();				// �Է� ������ ���·� �ǵ�����
		
		rewind(stdin);					// �Է� ���� ����

		cout << "<1~4�߿� �Է��ϼ���.> " << endl;
		}	
		else if (click1 == 1)
		{
			cout << "_____[��ǰ �߰�]_____" << endl;
			cout << "1. å 2. �ڵ��� 3. ��ǻ�� 4. �ڷΰ���" << endl;
			int click2 = 0;
		tryAgain1:
			cin >> click2;
			if (cin.fail())
			{
				cin.ignore(INT_MAX, '\n'); // �Է��Ͽ� ���ڷ� �ν���'\n'�� ����
				cin.clear();

				rewind(stdin);

				cout << "1~4�߿� �Է��ϼ���. > ";
				goto tryAgain1;
			}
			else if (click2 == 1)	// ��ǰ�߰� - å
			{
				cout << "ID > ";
				cin >> id;
				cout << "���� > ";
				cin >> price;
				cout << "���ǻ� > ";
				cin >> producer;
				cout << "ISBN > ";
				cin >> ISBN;
				cout << "���� > ";
				cin >> author;
				cout << "������ > ";
				cin >> title;
				product[i] = new Book(id, price, producer, ISBN, author, title);
				i++;
				continue;
			}
			else if (click2 == 2)	// ��ǰ�߰� - �ڵ���
			{
				cout << "ID > ";
				cin >> id;
				cout << "���� > ";
				cin >> price;
				cout << "������ > ";
				cin >> producer;
				cout << "�𵨸� > ";
				cin >> model;
				cout << "RAM ũ�� > ";
				cin >> RAM;
				product[i] = new Handphone(id, price, producer, model, RAM);
				i++;
				continue;
			}
			else if (click2 == 3)	// ��ǰ�߰� - ��ǻ��
			{
				cout << "ID > ";
				cin >> id;
				cout << "���� > ";
				cin >> price;
				cout << "������ > ";
				cin >> producer;
				cout << "�𵨸� > ";
				cin >> model;
				cout << "CPU > ";
				cin >> cpu;
				cout << "RAM ũ�� > ";
				cin >> title;
				product[i] = new Computer(id, price, producer, model, cpu, RAM);
				i++;
				continue;
			}
			else if (click2 == 4)	// ��ǰ�߰� - �ڷΰ���
			{
				continue;
			}
			else
			{
				cout << "1~4�߿� �Է��ϼ���." << endl;
			}
		}
		else if (click1 == 2) // ��ǰ ���
		{
			int click3 = 0;
			cout << "_____[��ǰ ���]_____" << endl;
			cout << "1. å 2. �ڵ��� 3. ��ǻ�� 4. �ڷΰ���" << endl;
		tryAgain2:
			cin >> click3;
			if (cin.fail())
			{
				cin.ignore(INT_MAX, '\n'); // �Է��Ͽ� ���ڷ� �ν���'\n'�� ����
				cin.clear();

				rewind(stdin);

				cout << "1~4�߿� �Է��ϼ���. > ";
				goto tryAgain2;
			}

			if (click3 == 1)	// ��ǰ ��� -> å
			{
				for (int n = 0; n < i; n++)
				{
					if (product[n]->mytype() == "Book")
					{
						product[n]->ShowProduct();
					}

				}
			}
			else if (click3 == 2)	// ��ǰ ��� -> �޴���
			{
				for (int n = 0; n < i; n++)
				{
					if (product[n]->mytype() == "Handphone")
					{
						product[n]->ShowProduct();
					}
				}
			}
			else if (click3 == 3)	// ��ǰ ��� -> ��ǻ��
			{
				for (int n = 0; n < i; n++)
				{
					if (typeid(product[n]).name() == "Computer")
					{
						product[n]->ShowProduct();
					}
				}
			}
			else if (click3 == 4)	// ��ǰ ��� -> �ڷ� ����
			{
				continue;
			}
			else
			{
				cout << "1~4�߿� �Է��ϼ���." << endl;
				continue;
			}
		}
		else if (click1 == 3)	// ��ǰ �˻�
		{
			int click4 = 0;
			string searchThing;
			cout << "_____[��ǰ �˻�]_____" << endl;
			cout << "�˻��ϰ� ���� ��ǰ�� ������ �����ϼ���." << endl;
			cout << "1. å 2. �ڵ��� 3. ��ǻ�� 4. �ڷΰ���" << endl;
		tryAgain3:
			cin >> click4;
			if (cin.fail())
			{
				cin.ignore(INT_MAX, '\n'); // �Է��Ͽ� ���ڷ� �ν���'\n'�� ����
				cin.clear();

				rewind(stdin);

				cout << "1~4�߿� �Է��ϼ���. > ";
				goto tryAgain3;
			}
			if (click4 == 1)	// ��ǰ �˻� -> å
			{
				int Searchresult = 0;
				for (int n = 0; n < i; n++)
				{
					if (product[n]->mytype() == "Book")
					{
						product[n]->ShowProduct();
					}
				}
				cout << "�˻��ϰ� ���� �������� �Է��ϼ���. > ";
				cin >> searchThing;
				cout << "[�˻� ���]" << endl;
				for (int n = 0; n < i; n++)
				{
					if (product[n]->getInfo().find(searchThing) != string::npos)
					{
						product[n]->ShowProduct();
						Searchresult += 1;
					}
				}
				if (Searchresult == 0)
				{
					cout << "�˻��� ��ǰ�� �����ϴ�." << endl;
				}
			}
			else if (click4 == 2)	// ��ǰ �˻� -> �ڵ���
			{
				int Searchresult = 0;
				for (int n = 0; n < i; n++)
				{
					if (product[n]->mytype() == "Handphone")
					{
						product[n]->ShowProduct();
					}
				}
				cout << "�˻��ϰ� ���� �޴��� �𵨸��� �Է��ϼ���. > ";
				cin >> searchThing;
				cout << "[�˻� ���]" << endl;
				for (int n = 0; n < i; n++)
				{
					if (product[n]->getInfo().find(searchThing) != string::npos)
					{
						product[n]->ShowProduct();
						Searchresult += 1;
					}
				}
				if (Searchresult == 0)
				{
					cout << "�˻��� ��ǰ�� �����ϴ�." << endl;
				}
			}
			else if (click4 == 3)	// ��ǰ �˻� -> ��ǻ��
			{
				int Searchresult = 0;
				for (int n = 0; n < i; n++)
				{
					if (product[n]->mytype() == "Computer")
					{
						product[n]->ShowProduct();
					}
				}
				cout << "�˻��ϰ� ���� ��ǻ�� �𵨸��� �Է��ϼ���. > ";
				cin >> searchThing;
				cout << "[�˻� ���]" << endl;
				for (int n = 0; n < i; n++)
				{
					if (product[n]->getInfo().find(searchThing) != string::npos)
					{
						product[n]->ShowProduct();
						Searchresult += 1;
					}
				}
				if (Searchresult == 0)
				{
					cout << "�˻��� ��ǰ�� �����ϴ�." << endl;
				}
			}
			else if (click4 == 4)	// ��ǰ �˻� -> �ڷΰ���
			{
				continue;
			}
			else
			{
				cout << "1~4�߿� �Է��ϼ���." << endl;
				continue;
			}
		}
		else if (click1 == 4)
		{
			break;
		}
		else
		{
			cout << "1~4�߿� �Է��ϼ���." << endl;
			continue;
		}
	}

	return 0;
}