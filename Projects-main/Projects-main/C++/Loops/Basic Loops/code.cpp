#include<iostream>
using namespace std;

int main(){

    int number;                                         //taking the integer variable in which value will be stored
    cin>>number;                                        //Asking integer value from the user

    int sum=0;                                          
    for(int counter=1;counter<=number;counter++) {      //inserting loop into the code
    sum=sum+counter;
    }

cout<<sum<<endl;                                        //printing the sum


}
