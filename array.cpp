#include<iostream>
#include<math.h>
using namespace std;

int main(){
   int numbers[5];
   cout<<"enter 5 numbers"<<endl;
   for(int a = 0; a<5; a++){
    cin>>numbers[a];
   }
   cout<<"you entered"<<endl;
   for(int b = 0; b<5; b++){
    cout<<numbers[b]<<endl;
   }
}
