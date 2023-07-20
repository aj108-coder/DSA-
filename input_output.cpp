#include<iostream>
using namespace std;

void input(int* arr ,int n)
{
    cout<<"Enter the elements in an array : "<<endl;
        for( int i = 0 ; i < n ; i++ ) 
        {
            cin>>arr[i];     // here ,we input all data in an array from indice 0 to n-1
        }

}

void print(int* arr , int n)
{
    cout<<"Given array is : ";
        for( int i = 0 ; i < n ; i++ ) 
         {
            cout<<arr[i]<<" ";     // here ,we print all data in an array from indice 0 to n-1
         }
}