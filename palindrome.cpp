#include<iostream>
#include"input_output.cpp" 
using namespace std;

bool check_palindrome( char* arr , int n); 

int main()
{   
  int n ; //size of an array which is enterd and fixed by user 
    cout<<"Enter the size of an array : ";
        cin>>n;
        
char* arr = new char[n];

//input the caharcters in an array from 0 to n-1
    input_char_array(arr , n);  // the definition of function are mentioned in "input_output.cpp" and whithout including this file ----> Error

//print the array 
    print_char_array(arr , n);  // the definition of function are mentioned in "input_output.cpp" and whithout including this file ----> Error


//call palindrome function by reference to check the array is palindrome or not
    bool is_palindrome = check_palindrome( arr , n);
    if( is_palindrome == 1)
      {
        cout<<endl<<" The given array is palindrome ";
      }

    else 

    {
      cout<<endl<<"The given array is not palindrome";
    }
    




        return 0;
}

bool check_palindrome( char* arr , int n)
{
    int left = 0 ;
    int right = n - 1 ;
      for( int i = 0 ; i< n ; i++)
        {
          if( arr[left++] == arr[right--])
            {
              return true;
            }
          
          else
          {
            return false;
            break;    // this break statetement optimised the code ? how --> if condition fails for one time i.e the array is not palindroem
          }
            
        }

        return false;
}
