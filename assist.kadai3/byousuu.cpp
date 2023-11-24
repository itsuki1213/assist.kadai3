#include <iostream>
using namespace std;

void TimeChange(int time)
{
	int minutes = time / 60;
	int seconds = time % 60;
	char sLeft = seconds / 10 + '0';
	char sRight = seconds % 10 + '0';
	cout << minutes << ":" << sLeft << sRight << "•b" << endl;
}

int main()
{
	int time;
	cout << "•b”‚ð“ü—Í > " << flush;
	cin >> time;

	TimeChange(time);
}
