/*성적 평균 계산 프로그램2*/

#include<iostream>
using namespace std;

void main()
{
	int score[3][10] =
	{ { 90,60,80,50,30,91,66,88,58,80 },
		{100,80,100,60,70,95,69,99,55,88 },
		{ 10,90,88,66,71,90,60,90,50,80 } };

	double subject_average[3];

	for (int subj = 0; subj < 3; subj++) {
		int sum = 0;
		for (int stdnt = 0; stdnt < 10; stdnt++)
			sum += score[subj][stdnt];
		subject_average[subj] = (double)sum / 10;
		cout << "과목별 평균= " << subject_average[subj] << endl;
	}

	double personal_average[10];

	for (int stdnt = 0; stdnt < 10; stdnt++) {
		int sum = 0;
		for (int subj = 0; subj < 3; subj++)
			sum += score[subj][stdnt];
		personal_average[stdnt] = (double)sum / 10;
		cout << "학생별 평균= " << personal_average[stdnt] << endl;
	}
}