#include<iostream>
using namespace std;

int main(){
  
int a,b,c;
cin>>a>>b>>c;

if(a>b){
  if(a>c){
    cout<<a<<"  is the biggest Number"<<endl;
  }
  else{
    cout<<c<<"  is the biggest Number"<<endl;
  }
}
else{
  if(b>c){
    cout<<b<<endl;
  }
  else{
    cout<<c<<"  is the biggest Number"<<endl;
  }
}
return 0;
}
