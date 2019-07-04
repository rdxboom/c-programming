/*STUDENT USING CPP*/
#include<iostream>
#include<string.h>
using namespace std;
class Student{
	
	public:
	char name[20];
	int age;
	void getName();
	void getAge();
};

void Student::getName(){
	cout<<"enter name of student"<<endl;
	cin>>name;
	}

void Student::getAge(){
	cout<<"enter age of student"<<endl;
	cin>>age;
}



int main()
{	
	int n,i;
	cout<<"enter the number of students\n";
	cin>>n;
	Student s[n];
	for(i=0;i<n;i++){
	s[n].getName();
	s[n].getAge();
	}
	for(i=0;i<n;i++){
	cout<<"the name of student is : "<<s[n].name;
	cout<<"the age of student is : "<<s[n].age;
	}
}
