#include <iostream>
#include <string>
using namespace std;

// 클래스 정의

class Product
{
private:
    string id;
    int price;
    string producer;

public:
    // 생성자
    Product(string pid, int pprice, string pproducer) : id(pid), price(pprice), producer(pproducer) {}

    // Getter 함수들
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
    // 생성자
    Book(string pid, int pprice, string pproducer, int bISBN, string bAuthor, string btitle)
        : Product(pid, pprice, pproducer), ISBN(bISBN), author(bAuthor), title(btitle) {}

    // Getter 함수들
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
    // 생성자
    Handphone(string pid, int pprice, string pproducer, string hModel, string hRAM)
        : Product(pid, pprice, pproducer), model(hModel), RAM(hRAM) {}

    // Getter 함수들
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
    // 생성자
    Computer(string pid, int pprice, string pproducer, string cModel, string cCpu, string cRAM)
        : Product(pid, pprice, pproducer), model(cModel), cpu(cCpu), RAM(cRAM) {}

    // Getter 함수들
    string getModel() { return model; }
    string getCPU() { return cpu; }
    string getRAM() { return RAM; }
};

// 함수 선언

void startMenu()
{
    cout << "===== 상품 관리 프로그램 =====" << endl;
    cout << "1. 상품추가 / 2. 상품출력 / 3. 상품검색 / 4. 종료" << endl;
}

int selectProduct()
{
    int select = 0;
    cout << "책 -> [1] / 핸드폰 -> [2] / 컴퓨터 -> [3]" << endl;
    cin >> select;
    return select;
}

void ShowProductInfo(Product* product)
{
    cout << "ID: " << product->getId() << endl;
    cout << "가격: " << product->getPrice() << endl;
    cout << "생산자: " << product->getProducer() << endl;
}

void SearchProduct()
{

}

int main(void)
{
    Product* productArr[100]; // Product 객체 포인터 배열
    int menu_num, select_product;
    int idx = 0;

    while (true)
    {
        startMenu();
        cout << "> ";
        cin >> menu_num;

        if (menu_num == 1)
        {
            cout << "추가할 상품을 선택하세요 > " << endl;
            select_product = selectProduct();

            if (select_product == 1)
            {
                // Book 객체 추가
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
                // Handphone 객체 추가
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
                // Computer 객체 추가
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
            // 상품 출력 - productArr[i]->mytype() == "Book" 이런 식으로 해보기!
            cout << "상품 출력" << endl;
            for (int i = 0; i < idx; i++)
                ShowProductInfo(productArr[i]);
                if (productArr[i]->mytype() == "Book")
                {
                    productArr[i]
                }
        }
        else if (menu_num == 3)
        {
            // 상품 검색
            cout << "상품 검색" << endl;
            cout << "현재 검색이 불가합니다." << endl;
        }
        else if (menu_num == 4)
        {
            // 프로그램 종료
            cout << "프로그램 종료" << endl;
            break;
        }
        else
        {
            cout << "1 ~ 4번만 선택 가능 ^____^" << endl;
            continue;
        }
    }
    return 0;
}
