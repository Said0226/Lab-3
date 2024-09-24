#include<iostream>
using namespace std;
int main()
{
    int array[] = {3, 4, 2, 6, 7};
    array[2]=50;
    for(int i=0; i<5; i++)
    {
        cout<<array[i]<<" ** ";
    }
return 0;
}
