#include<iostream>
#include"input_output.cpp"
#include"create_array.cpp"

void adjacent_swapping_in_array( int* arr , int n);
using namespace std;

int main()
{ 

 int size_of_array ; 
 int* size = &size_of_array;

    int* arr = create_integer_array(size);  //create_integer_array(): --> user-defined function for modularity in code :->definition mentioned in input_output.cpp"

int choice;
    cout<<"Enter your choice : "<<endl;
       

cout<<"1) Take input each and every element from user "<<endl;
cout<<"2) Generate random integrs"<<endl;

cin>>choice;

if(choice == 1)
{
   input(arr,size_of_array);
}

else if( choice == 2)
{
    random(arr , size_of_array );
}

//print the intger array 
    print(arr , size_of_array); 

//call function by refernce which swapped the adjacent elemnts in an array
    adjacent_swapping_in_array( arr , size_of_array);
        cout<<endl<<"After swappig the array : ";
//print the array
    print(arr , size_of_array );

}

void adjacent_swapping_in_array( int* arr , int n)
{  
   
    for(int i = 0 ;i< n-1; i+=2)  //  Let 5 6 are the elemts of array and n = 2 : size of an array
    {                                
         int temp = arr[i];   //temp = 6
         arr[i] = arr[i + 1];  // arr[0] = 6
         arr[i + 1] = temp;    // arr[1] = temp : -> 5
    }
}
