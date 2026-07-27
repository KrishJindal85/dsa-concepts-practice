#include<iostream>
using namespace std;
int main(){

    cout << "enter the value of a" << endl;
    
int a;
cin>>a;
/*
if (a>0) {
    cout<< "a is a positive number" << endl;

}
else {cout << "a is not a positive number" << endl;
}*/

if (a>0){
    cout<< "value of a is positive"<< endl;
}
else if(a<0){
    cout<< " the value of a is negative" <<endl;
}
else {cout<< "value of a is zero" << endl;
}




}