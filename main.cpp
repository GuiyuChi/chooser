#include<iostream>
#include<string>
#include<stdlib.h>
#include<ctime>
using namespace std;

#define radom(x) (rand()%x)

int main()
{
	int quit = 0;
	while (!quit){

		string firstThing;
		string secondThing;
		int chooser = 1;
		cout << "********************************************************" << endl;
		cout << "                       ����ѡ����                       " << endl;
		cout << "********************************************************" << endl;

		cout << endl << "�����һ������";
		cin >> firstThing;
		cout << "����ڶ�������";
		cin >> secondThing;

		srand(time(0));
		chooser = radom(2);
	
		cout << endl << "�������˵�ѡ����Ӧ������";
		if (chooser == 0)
		{
			cout << firstThing << endl;
		}
		else
		{
			cout << secondThing << endl;
		}
		cout << "����������0��";
		scanf("%d", &quit);
		if (quit != 0) quit = 1;
	}
	return 0;
}