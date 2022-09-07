/*성적평균 계산 프로그램*/

#include <iostream>
using namespace std;

void main()
{
	int score[10] = { 80,90,100,66,55,44,80,90,100,66 };
	int sum = 0;

	for (int i = 0; i < 10; i++)
		sum += score[i];

	double average = (double)sum / 10;

	cout << "평균 = " << average << endl;
}