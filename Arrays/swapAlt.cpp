#include<iostream>
using namespace std;
void print(int arr[])
{
    for(int i = 0 ; i < 11 ; i++)
    {
        cout<<arr[i];
    }
}
int main()
{
    int arr[11]={1,2,3,4,5,6,7,8,9,10,11};
    for(int i = 0 ; i < 11; i ++)
     {
        print(arr);
        cout<<endl<<i;
        cout<<endl;
        if(i%2 !=0)
        {
             
             swap(arr[i],arr[i-1]);
        }
     }
    print(arr);
}