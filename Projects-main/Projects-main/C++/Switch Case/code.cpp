#include<iostream>
using namespace std;

int main(){

    char button;                            // taking the character variable
    cout<<"Input a Character : ";           
    cin>>button;                            //taking the input from user and store in button variable

    if(button=='a')
    {
        cout<<"Hello, How are you!!";       //if button variable has value a it will show this text
        cin>>button;
    }
    else if(button=='b')
    {
        cout<<"Namaste, Kese h aap!!"<<endl; //if button variable has value b it will show this text
        cin>>button;
    }
    else if(button=='c')
    {
        cout<<"Kem cho!!"<<endl;             //if button variable has value c it will show this text
        cin>>button;
    }
    else
    {
        cout<<"I am learning more"<<endl;    //if the button variable has no value of above give then this thext will appear.
    } 
    return 0;
    }
    