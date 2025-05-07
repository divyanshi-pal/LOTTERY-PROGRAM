#include <iostream>
#include<stdlib.h>
using namespace std;
main(){
	int Select_People[24];
	int temp;
	int num;
	for(int i=0; i<24; i++)
	{
		num = rand() % 60;
	for(int j=0; j<i; j++)
	{
		if(num == Select_People[j])
		{
			j=0;
			num = rand()%60;
		}
		
	}
	Select_People[i]=num;
	}
	for(int i=0; i<24; i++)
	Select_People[i] = rand()%60;
	//Sorting array of people
	for(int j=0; j<24; j++)
	for(int i=0; i<24-1; i++)
	if(Select_People[i] > Select_People[i+1])
	{
		temp = Select_People[i];
		Select_People[i] = Select_People[i+1];
		Select_People[i+1] = temp;
	}
	//displaying of 24 people
	cout<<"Final Selected  Candidate are:"<<endl<<endl;
	for(int i=0; i<24; i++)
	cout<<"The first person = "<< Select_People[i]<<endl;
	
	
}

