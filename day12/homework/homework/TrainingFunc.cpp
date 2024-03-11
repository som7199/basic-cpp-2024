#include "Training.h"
#include <iostream>
#include <string>

using namespace std;

Product::Product()
{
	price = 0;
}

Product::Product(string Pid, int Pprice, string Pproducer)
{
	id = Pid;
	price = Pprice;
	producer = Pproducer;
}

void Product::ShowProduct()
{
	cout << "ID : " << id << endl << "���� : " << price << " ��" << endl << "������(���ǻ�) : " << producer << endl;
}

string Product::mytype()
{
	return "Product";
}

string Product::getInfo()
{
	return "ID";
}

Product::~Product()
{
	cout << "Product �Ҹ��� ����" << endl;
}

Book::Book(string Bid, int Bprice, string Bproducer, string BISBN, string Bauthor, string Btitle) : Product(Bid, Bprice, Bproducer)
{
	ISBN = BISBN;
	author = Bauthor;
	title = Btitle;
}

void Book::ShowProduct()
{
	Product::ShowProduct();
	cout << "ISBN : " << ISBN << endl << "���� : " << author << endl << "������ : " << title << endl;
	cout << "---------------" << endl;
}

string Book::mytype()
{
	return "Book";
}

string Book::getInfo()
{
	return title;
}

Handphone::Handphone(string Hid, int Hprice, string Hproducer, string Hmodel, int HRAM) : Product(Hid, Hprice, Hproducer)
{
	model = Hmodel;
	RAM = HRAM;
}

void Handphone::ShowProduct()
{
	Product::ShowProduct();
	cout << "�𵨸� : " << model << endl << "RAM ũ�� : " << RAM << " G" << endl;
	cout << "---------------" << endl;
}

string Handphone::mytype()
{
	return "Handphone";
}

string Handphone::getInfo()
{
	return model;
}

Computer::Computer(string Cid, int Cprice, string Cproducer, string Cmodel, string Ccpu, int CRAM) : Product(Cid, Cprice, Cproducer)
{
	model = Cmodel;
	cpu = Ccpu;
	RAM = CRAM;
}

void Computer::ShowProduct()
{
	Product::ShowProduct();
	cout << "�𵨸� : " << model << endl << "CPU : " << cpu << "RAM ũ�� : " << RAM << " G" << endl;
	cout << "---------------" << endl;
}


string Computer::mytype()
{
	return "Computer";
}

string Computer::getInfo()
{
	return model;
}