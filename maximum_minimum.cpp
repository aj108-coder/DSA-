#include<iostream>
#include<climits>
#include"input_output.cpp" 
using namespace std;


void find_maximum_minimum(int* arr , int n , int* max , int* min);

int main()
{       
    int n ; //n is size of an array in 
        cin>>n;

    int* arr = new int[n]; //way of declararing array with dynamic memory location

cout<<"Choose an option given below : "<<endl;
    cout<<"1)"<<"USER-Input"<<endl;
    cout<<"2)"<<"RANDOM-INTEGERS generated by itself " <<endl;

    int choice;
        cin>>choice;

    if(choice == 1)
    {
        //call function by refernce to input data in  an array 
        input(arr , n );

    
    }

    else if( choice == 2)
    {

//call function by refernce to take random value 
        random(arr , n);
    }

//call function by refernce to print an array 
        print(arr , n );

    
  int maximum_in_array = INT_MIN;   //INT_MIN : smallest number in the range of int in c++
        int* max = &maximum_in_array;
    
    int minimum_in_array = INT_MAX;
        int* min = &minimum_in_array;

//call function by refernce to find out the maximum and minimum number from an given array
find_maximum_minimum( arr , n ,max , min);

//print maximum and minimum data in array 

cout<<endl<<"Maximum number in an array : "<<maximum_in_array<<endl;
    cout<<"Minimum number in an array : "<<minimum_in_array<<endl;


    return 0;
}

void find_maximum_minimum(int* arr , int n , int* max , int* min )
{
   

    for( int i = 0 ; i < n ; i++)
    {
        if(arr[i] > *max)
        {
            *max = arr[i];

        }
    
        if( arr[i] < *min )
        {
            *min = arr[i];
        }
    }

}