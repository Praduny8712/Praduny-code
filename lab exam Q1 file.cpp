//Q.No 1. Bookshop Management System
//File handling has been effectively used for each feature of this project
//Operations
//1. Add Book Records:
//2. Show Book Records:
//3. Check Availability:
//4. Modify Book Records:
//5. Delete Book Records: [Q.No 1 Marks 15 ]
//
#include<iostream>
#include<fstream>
using namespace std;
main()
{
	

		string bn,bw;
		int date;
        ifstream myfile("Bookshop Management System.txt");
	   
		 cout<<"\n enter the book name=";
		 cin>>bn;
		cout<<"\n enter the book w name= ";
		 cin>>bw;
		 cout<<"\n enter the i date= ";
		 cin>>date;

		
			myfile<<"\n name="<<bn;
			myfile<<"\n w name"<<bw;
			myfile<<"\n i date= "<<date;
 myfile.close();
				
}
	
			
			
			
			
			
			
		
