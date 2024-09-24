#include<iostream>
using namespace std;
int main()
{
	int select ;
	cout<<"enter choice "<<endl;
	cin>>select;
	bool found=false;
	int arry[]={12,13,14,15,16,19,18,10,19,17};
	 for (int i=0; i<10; i++)
	 {
	 	if(arry[i]==select)
	 	{
	 		found=true;
	 		cout<<"***found***"<<endl;
	 		break;
		 }
	 }
	 if(found= false)
	 {
	 
	 cout<<"not found"<<endl;
}
}
