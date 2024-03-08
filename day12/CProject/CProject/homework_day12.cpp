/*
* Parent class
 class Product : id, price, producer
* Child class
*class Book : ISBN, author, title		// 978-89-001-0001-1
 class Handphone : model, RAM
 class Computer : model, cpu, RAM
* ��ü������ �迭 ��� : product[100]
* string Ŭ���� ��� ����
* ���� ����

* ���� ȭ��
 ---- ��ǰ ���� ���α׷� ----
 1. ��ǰ�߰� / 2. ��ǰ��� / 3. ��ǰ�˻� / 0. ����

 1 �Ǵ� 2 �Ǵ� 3 ������ ���
 1 å 2 �ڵ��� 3 ��ǻ��
 ���� ����� ��� �ش� ��ǰ�� ������ �Ŀ� �߰�, ���, �Ǵ� �˻� ����ȴ�.
*/
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
#include <vector>
using namespace std;

// �ܺο��� Ŭ������ private ��������� �����ϱ� ���� getter setter�� �������ֱ�
class Product
{
private:
	string id;
	int price;
	string producer;
public:
	Product(string pid, int pprice, string pproducer) : id(pid), price(pprice), producer(pproducer) {}
	string getId()
	{
		return id;
	}
	int getPrice()
	{
		return price;
	}
	string getProducer()
	{
		return producer;
	}
};

class Book : public Product
{
private:
	int ISBN;
	string author;
	string title;
public:
	Book(string pid, int pprice, string pproducer, int bISBN, string bAuthor, string btitle) : Product(pid, pprice, pproducer)
	{
		ISBN = bISBN;
		author = bAuthor;
		title = btitle;
	}
	int ISBN()
	{
		return ISBN;
	}
	string getAuthor()
	{
		return author;
	}
	string getTitle()
	{
		return title;
	}
};

// getter ��������!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
class Handphone : public Product
{
private:
	string model;
	string RAM;
public:
	Handphone(string pid, int pprice, string pproducer, string hModel, string hRAM) : Product(pid, pprice, pproducer)
	{
		model = hModel;
		RAM = hRAM;
	}
};

class Computer : public Product
{
private:
	string model;
	string cpu;
	string RAM;
public:
	Computer(string pid, int pprice, string pproducer, string cModel, string cCpu, string cRAM) : Product(pid, pprice, pproducer)
	{
		model = cModel;
		cpu = cCpu;
		RAM = cRAM;
	}
};

void startMenu()
{
	printf("===== ��ǰ ���� ���α׷� =====\n");
	printf("1. ��ǰ�߰� / 2. ��ǰ��� / 3. ��ǰ�˻� / 4. ����\n");
}


// å, �ڵ���, ��ǻ�� �� �����ϰ�, ���ð��� ��ȯ�Ͽ� main���� ����غ���..
int selectProduct()
{
	int select = 0;
	cout << "å -> (1) / �ڵ��� -> (2) / ��ǻ�� -> (3)" << endl;
	cin >> select;
	return select;
}
// ��ǰ ���ð��� �Ű������� ���޹ް�, �ش� ��ü �������� ��¹� �����
void ShowProductInfo(int select)
{
	if (select == 1) {
		cout << "å ����" << endl;
	}
	else if (select == 2) {
		cout << "�ڵ��� ����" << endl;
	}
	else if (select == 3) {
		cout << "��ǻ�� ����" << endl;
	}
}

// �̰� ���� ��� ���� ���� ��������
void SearchProduct()
{
	// �θ� Ÿ���� �����ͷ� �ڽ� ��ü���� ����? �̰� �ȵȴٴµ�
	// ��ü �߽����� ����������! �̰� �� ���� �ƴ��� virtual Ű����??
}

int main(void)
{
	
	Product* productArr[100];		// ��ü ������ �迭
	int menu_num, select_product;
	int idx = 0;

	while (true)
	{
		startMenu();
		cout << "> ";
		cin >> menu_num;

		// ��ǰ �߰�
		if (menu_num == 1)
		{
			cout << "�߰��� ��ǰ�� �����ϼ��� > " << endl;
			select_product = selectProduct();
			// å �߰�
			if (select_product == 1) {

				int price, ISBN;
				string id;
				string producer;
				string author;
				string title;

				cout << "id : ";
				cin >> id;

				cout << "producer : ";
				cin >> producer;

				cout << "author : ";
				cin >> author;

				cout << "title : ";
				cin >> title;

				cout << "price : ";
				cin >> price;

				cout << "ISBN : ";
				cin >> ISBN;

				productArr[idx] = new Book(id, price, producer, ISBN, author, title);
				idx++;
			}
			// �ڵ��� �߰�
			else if (select_product == 2)
			{
				int price;
				string id;
				string producer;
				string model;
				string RAM;

				cout << "id : ";
				cin >> id;

				cout << "producer : ";
				cin >> producer;

				cout << "model : ";
				cin >> model;

				cout << "RAM : ";
				cin >> RAM;

				cout << "price : ";
				cin >> price;

				productArr[idx] = new Handphone(id, price, producer, model, RAM);
				idx++;
			}
			// ��ǻ�� �߰�
			else if (select_product == 3)
			{
				int price;
				string id;
				string producer;
				string model;
				string cpu;
				string RAM;

				cout << "id : ";
				cin >> id;

				cout << "producer : ";
				cin >> producer;

				cout << "model : ";
				cin >> model;

				cout << "RAM : ";
				cin >> RAM;

				cout << "cpu : ";
				cin >> cpu;

				cout << "price : ";
				cin >> price;

				productArr[idx] = new Computer(id, price, producer, model, cpu, RAM);
				idx++;
			}
		}

		// ��ǰ���
		else if (menu_num == 2)
		{
			cout << "��ǰ���" << endl;
			// ��ü�� ��� ���� �� �ϳ��� �˻��ؼ� ��ü ���(��ü ���� ����̰���?)
			for (int i = 0; i < size(productArr); i++)
				cout << productArr[i]->id << endl;
		}
		// ��ǰ�˻�
		else if (menu_num == 3)
		{
			cout << "��ǰ�˻�" << endl;
		}
		// ����
		else if (menu_num == 4)
		{
			cout << "���α׷� ����" << endl;
			break;
		}
		else {
			cout << "���� ��ȣ Ȯ�� ��Ź�����~~^^" << endl;
			continue;
		}
	}
	return 0;
}