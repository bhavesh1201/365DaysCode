#include<bits/stdc++.h>
using namespace std;
int findUnique(int *arr, int size)
{
    map<int , bool> uni;
    for(int i = 0 ; i < size ; i++)
    {
        if(uni[arr[i]]==false)
       uni[arr[i]]=true;
        else
            uni[arr[i]]=false;
       
    }
    int ans;
    map<int , bool> :: iterator itr;
    for( itr = uni.begin(); itr != uni.end() ; itr++)
    {
        if(itr->second)
        {
              ans=itr->first;    
                     }

               }
    return ans;
    
}
int main()
{
        int arr[7]={2, 5, 20, 6, 5, 6, 2};
        cout<<findUnique(arr,7);
}