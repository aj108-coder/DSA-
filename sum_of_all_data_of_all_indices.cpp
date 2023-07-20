#include<iostream>
#include"input_output.cpp" 
using namespace std;

int sum(int arr[] , int n);

int main()
{   
    int n;       // n : size of an array 
        cin>>n;

    int* arr = new int [n]; // dynamic memory allocation of array 

//call function by refernce to take input 

        input( arr , n );         // Do not confuse with the function , their definitions are mentioned in the :-> input_output.cpp 

//call function by refernce to print an array 

        print( arr , n );          // Do not confuse with the function , their definitions are mentioned in the :-> input_output.cpp 

// call function by value to calculate the sum of all data of all indices

       int sum_of_all_data_of_indices =  sum( arr , n );

        cout<<endl<<"Sum of all data of all indices of given array : ";
            cout<<sum_of_all_data_of_indices;
    

}

int sum(int arr[] , int n)
{ 
   /* Time complexity :
     1) Worst case : O(n) 2) Average case : Ω(n) 3)Best Case : θ(1)
   */
    long int sum = 0;  // if we not intialised the sum =0  then garbage value is added to the data of all indices 
        for( int i = 0 ; i < n ; i++ )
        {
            sum += arr[i];
        }

            return sum;
}

// total time complexity : 
// input() : O(n)
// print() : O(n)
// sum()   : O(n)
//total = O(n) + O(n) + O(n) = O(3n) --> ignore lower bound for worst case
//total time complexity  : O(n);

// note :  same we do for subtractio n ,product ,division of all data of all indices from 0 to n-1 and nis the sixe of an array 