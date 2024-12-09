#include <iostream>
using namespace std;
//user input and output array
int main ()
{
     //initialize and input
    int num [5],sum,product = 1;
      //using the for loop
    cout <<"using the for loop"<<endl;
    int i=1;
     cout <<"please enter 5 integers "<<endl;
    for ( i = 0; i < 5; i++)
    {
        //input
      
       cin >>num[i];
       sum +=num[i];//sum=sum+num[1],adding array elements
       product *=num[i];//product=product*num;[i],multiplying arrray
    }
    
    // Output the array elements foreach
    cout << "The 5 integers are:" << endl;
    for (int i = 0; i < 5; i++) { // Loop for output
        cout << num[i] << endl;
    }
    
    //
    for (int i :num)
{
    cout << i <<endl;
    cout <<"the sum of the array elements using for loop=:" <<sum <<endl;
}
//output the mean
int n=sizeof(num)/4;
int mean = sum/n;
cout <<"the mean is:" <<mean<<endl;
return 0;
}
