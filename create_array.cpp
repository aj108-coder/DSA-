#include<iostream>
using namespace std;

int* create_integer_array(int* size)
{  

 cout<<"Enter the size of an array : ";
      int n;
        cin>>n;

*size = n;
    
    int* arr = new int[n];

        return (arr);
}