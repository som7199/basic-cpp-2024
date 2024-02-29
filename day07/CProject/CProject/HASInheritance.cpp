#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
using namespace std;

class Gun
{
private:
	int bullet;		// 장전된 총알의 수
public:
	Gun(int bnum) : bullet(bnum)
	{ }
	void Shot()
	{
		cout << "BBANG!" << endl;
		bullet--;
	}
	int getBullet() {
		return bullet;
	}
};

class Police : public Gun
{
private:
	int handcuffs;	// 소유한 수갑의 수
public:
	Police(int bnum, int bcuff) : Gun(bnum), handcuffs(bcuff)
	{ }
	void PutHandCuff()
	{
		cout << "SNAP!" << endl << endl;
		handcuffs--;
	}
	void state() {
		cout << "bullet : " << getBullet() << endl <<  "handcuffs : " << handcuffs << endl << endl;
	}
};

int main(void)
{
	Police pman(5, 3);
	pman.state();
	pman.Shot();
	pman.PutHandCuff();
	pman.state();
	return 0;
}