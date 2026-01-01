// cout << "Press Enter 3 times to reveal your future.";
// cout << "You will get A in this 261102.";
#include<iostream>
#include<string>
#include<cstdlib>
using namespace std;

int main(){

    cout<<"Press Enter 3 times to reveal your future.\n";
    int i=0;
    while(i<3){
        cin.get();
        i++;
    }
    srand(time(0));
    int grade = rand()%9+1;
    string x;
    if(grade==1) x ="A";
    else if(grade == 2)x ="B+";
    else if(grade == 3)x ="B";
    else if(grade == 4)x ="C+";
    else if(grade == 5)x ="C";
    else if(grade == 6)x ="D+";
    else if(grade == 7)x ="D";
    else if(grade == 8)x ="F";
    else  x="W";
    cout<<"You will get "<<x<<" in this 261102.";
}   