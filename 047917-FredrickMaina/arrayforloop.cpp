#include <iostream>
using namespace std;
//user input and output array
int main ()
{
     //initialize and input
    int num [5];
      //using the for loop
    cout <<"using the for loop"<<endl;
    int i=1;
     cout <<"please enter 5 integers "<<endl;
    for ( i = 0; i < 5; i++)
    {
        //input
      
       cin >>num[i];
    }
    
    // Output the array elements
    cout << "The 5 integers are:" << endl;
    for (int i = 0; i < 5; i++) { // Loop for output
        cout << num[i] << endl;
    }
    //or we can use for reach on the output
   /* for (int i:num)
    {
    cout <<num[i] <<endl;
    }*/
    
    return 0;
}