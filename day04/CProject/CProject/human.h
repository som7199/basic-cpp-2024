#pragma once
#ifndef __HUMAN_H__
#define __HUMAN_H__

/*
��������� ������ ��Ƶд�.
*/

class Human {
private:
	const char name[20];
	int age;
	const char job[40];

public:
	void Human(const char* name, int age, const char* job);
	void humanInfo();
};
#endif