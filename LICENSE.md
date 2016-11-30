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
		cout << "                       命运选择器                       " << endl;
		cout << "********************************************************" << endl;

		cout << endl << "输入第一件任务：";
		cin >> firstThing;
		cout << "输入第二件任务：";
		cin >> secondThing;

		srand(time(0));
		chooser = radom(2);
	
		cout << endl << "根据命运的选择，你应该做：";
		if (chooser == 0)
		{
			cout << firstThing << endl;
		}
		else
		{
			cout << secondThing << endl;
		}
		cout << "继续请输入0：";
		scanf("%d", &quit);
		if (quit != 0) quit = 1;
	}
	return 0;
}
