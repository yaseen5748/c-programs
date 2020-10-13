//program to check if you are eligible to code;
#include<iostream>
#include<math.h>
using namespace std;

int main(){
int age;
string name;
cout<<"Hi this program checks your eligibilty to vote, please enter your name"<<endl;
cin>>name;
cout<<"Hello "<<name<<" please enter your age:"<< endl;
cin>>age;
if(age>=18){
    cout<<"Congratulations "<<name<<" you are eligible to vote, make sure to do research before voting"<<endl;

}
else{
    cout<<"I'm sorry "<<name<<" you need to wait "<<18 - age<<" years more to vote. Have patience."<<endl;
}
return 0;
}
