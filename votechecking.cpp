#include<iostream>
using namespace std;

int main()
{
	int age;
    cout<<"\n\tvote eligibility checking";
    cout<<"\n\t__________________________";
	cout<<"Enter your age: ";
	cin>>age;
	if(age>=13 && age<=19)
	{
		cout<<"you are  Teenager";
	}
	else
	{
		cout<<"you are not a Teenager";
	}

	if(age>=18)
	{
		cout<<"you are eligible for voting";
	}
	else
	{
		cout<<"you are not eligible for voting";
	}

	return 0;
}
