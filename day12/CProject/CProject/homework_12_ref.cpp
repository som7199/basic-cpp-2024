#include <iostream>
#include <string>
using namespace std;

// Ŭ���� ����

class Product
{
private:
    string id;
    int price;
    string producer;

public:
    // ������
    Product(string pid, int pprice, string pproducer) : id(pid), price(pprice), producer(pproducer) {}

    // Getter �Լ���
    string getId() { return id; }
    int getPrice() { return price; }
    string getProducer() { return producer; }
};

class Book : public Product
{
private:
    int ISBN;
    string author;
    string title;

public:
    // ������
    Book(string pid, int pprice, string pproducer, int bISBN, string bAuthor, string btitle)
        : Product(pid, pprice, pproducer), ISBN(bISBN), author(bAuthor), title(btitle) {}

    // Getter �Լ���
    int getISBN() { return ISBN; }
    string getAuthor() { return author; }
    string getTitle() { return title; }
};

class Handphone : public Product
{
private:
    string model;
    string RAM;

public:
    // ������
    Handphone(string pid, int pprice, string pproducer, string hModel, string hRAM)
        : Product(pid, pprice, pproducer), model(hModel), RAM(hRAM) {}

    // Getter �Լ���
    string getModel() { return model; }
    string getRAM() { return RAM; }
};

class Computer : public Product
{
private:
    string model;
    string cpu;
    string RAM;

public:
    // ������
    Computer(string pid, int pprice, string pproducer, string cModel, string cCpu, string cRAM)
        : Product(pid, pprice, pproducer), model(cModel), cpu(cCpu), RAM(cRAM) {}

    // Getter �Լ���
    string getModel() { return model; }
    string getCPU() { return cpu; }
    string getRAM() { return RAM; }
};

// �Լ� ����

void startMenu()
{
    cout << "===== ��ǰ ���� ���α׷� =====" << endl;
    cout << "1. ��ǰ�߰� / 2. ��ǰ��� / 3. ��ǰ�˻� / 4. ����" << endl;
}

int selectProduct()
{
    int select = 0;
    cout << "å -> [1] / �ڵ��� -> [2] / ��ǻ�� -> [3]" << endl;
    cin >> select;
    return select;
}

void ShowProductInfo(Product* product)
{
    cout << "ID: " << product->getId() << endl;
    cout << "����: " << product->getPrice() << endl;
    cout << "������: " << product->getProducer() << endl;
}

void SearchProduct()
{

}

int main(void)
{
    Product* productArr[100]; // Product ��ü ������ �迭
    int menu_num, select_product;
    int idx = 0;

    while (true)
    {
        startMenu();
        cout << "> ";
        cin >> menu_num;

        if (menu_num == 1)
        {
            cout << "�߰��� ��ǰ�� �����ϼ��� > " << endl;
            select_product = selectProduct();

            if (select_product == 1)
            {
                // Book ��ü �߰�
                int price, ISBN;
                string id, producer, author, title;

                cout << "Book's id : ";
                cin >> id;

                cout << "Book's price : ";
                cin >> price;

                cout << "Book's producer : ";
                cin >> producer;

                cout << "Book's ISBN : ";
                cin >> ISBN;

                cout << "Book's author : ";
                cin >> author;

                cout << "Book's title : ";
                cin >> title;

                productArr[idx] = new Book(id, price, producer, ISBN, author, title);
                idx++;
            }
            else if (select_product == 2)
            {
                // Handphone ��ü �߰�
                int price;
                string id, producer, model, RAM;

                cout << "Handphone's id : ";
                cin >> id;

                cout << "Handphone's price : ";
                cin >> price;

                cout << "Handphone's producer : ";
                cin >> producer;

                cout << "Handphone's model : ";
                cin >> model;

                cout << "Handphone's RAM : ";
                cin >> RAM;

                productArr[idx] = new Handphone(id, price, producer, model, RAM);
                idx++;
            }
            else if (select_product == 3)
            {
                // Computer ��ü �߰�
                int price;
                string id, producer, model, cpu, RAM;

                cout << "Computer's id : ";
                cin >> id;

                cout << "Computer's price : ";
                cin >> price;

                cout << "Computer's producer : ";
                cin >> producer;

                cout << "Computer's model : ";
                cin >> model;

                cout << "Computer's cpu : ";
                cin >> cpu;

                cout << "Computer's RAM : ";
                cin >> RAM;

                productArr[idx] = new Computer(id, price, producer, model, cpu, RAM);
                idx++;
            }
        }
        else if (menu_num == 2)
        {
            // ��ǰ ��� - productArr[i]->mytype() == "Book" �̷� ������ �غ���!
            cout << "��ǰ ���" << endl;
            for (int i = 0; i < idx; i++)
                ShowProductInfo(productArr[i]);
                if (productArr[i]->mytype() == "Book")
                {
                    productArr[i]
                }
        }
        else if (menu_num == 3)
        {
            // ��ǰ �˻�
            cout << "��ǰ �˻�" << endl;
            cout << "���� �˻��� �Ұ��մϴ�." << endl;
        }
        else if (menu_num == 4)
        {
            // ���α׷� ����
            cout << "���α׷� ����" << endl;
            break;
        }
        else
        {
            cout << "1 ~ 4���� ���� ���� ^____^" << endl;
            continue;
        }
    }
    return 0;
}
