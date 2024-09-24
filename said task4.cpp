#include<iostream>
using namespace std;

int main() 
{
    int Num[] = {2, 3, 5, 4, 5};
    Num[3]=Num[4];
    Num[4]= Num[5];
    for(int i=0; (i+1)<5; i++)
    {
        cout<<Num[i]<<endl;
    }


return 0;
}
