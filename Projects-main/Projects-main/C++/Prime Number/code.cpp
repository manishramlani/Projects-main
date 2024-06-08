#include<iostream>
using namespace std;

int main(){

    int i;                          //taking integer variable 
    cin>>i;
    int n;
    for(int n=2;n<i;n++){
        if(i%n==0){
            cout<<"Non-Prime"<<endl;
            break;
        }
         
    }
    if(n==i){
        cout<<"Prime"<<endl;
    }

}
