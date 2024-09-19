//Write a C++ program to accpet worker information Worker_Name, No_Of_Hours_Worked,
//Pay_Rate and Salary. Write necessary functions to calculate and display the salary of Worker. (Use
//Default values for Payrate Rs. 500 per hours)

#include<iostream>
using namespace std;
class Worker
{
	private:
	string name;
	int sal,hr,rate=0;
	public:
		Worker()
		{
			rate=500;
		}
		void get ()
		{
			cout<<"\n enter the name=";
			cin>>name;
			cout<<"\n enter the hr";
			cin>>hr;
			
}
	  void show()
	  {
	  	Worker();
	  	cout<<"\n name= "<<name;
		cout<<"hr= "<<hr;
		sal=hr*rate;
		cout<<"salary="<<sal;
	  }
};
int main()
{
Worker w;
w.get();
w.show();


}