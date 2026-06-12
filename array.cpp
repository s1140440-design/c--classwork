#include <iostream>
using namespace std;

int main()
{
	double catWeight[6]={11.2,13.8,14.2,15.5,16.0,17.0};
	double sum = 0;
	for (int i=0; i<=5; i++ ){
		sum=sum+catWeight[i]; 
	}
    cout << "貓咪平均體重:" <<sum/6;

    return 0;
}
