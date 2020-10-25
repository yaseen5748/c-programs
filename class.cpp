#include<iostream>
using namespace std;

class Time {
private:
 int hours;
 int minutes;
 int seconds;

 public:

 calculateSeconds();
};

Time :: calculateSeconds(){
 int totalSeconds;
 cout<<"...............Convert Time to seconds..............."<<endl;
 cout<<"Enter Hours : ";
 cin>>hours;
 cout<<"\nEnter minutes : ";
 cin>>minutes;
 cout<<"\nEnter seconds";
 cin>>seconds;
 totalSeconds = (hours * 60 * 60) + (minutes * 60) + seconds;
 cout<<"\nThe time "<<hours<<":"<<minutes<<":"<<seconds<<" is "<<totalSeconds<<"seconds in total"<<endl;
}


int main()
{
    Time s1;
    s1.calculateSeconds();
}
