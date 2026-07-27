#include<iostream>
using namespace std;
int main(){
cout<< "enter the value a and b" << endl;

int a,b;
cin>> a >> b ;
cout<<"the value of a and b is :" << a <<"  "<< b << endl;

if(a>b){
    cout<< "a is greater than b"<< endl;
}
else if(a<b){
    cout<< "b is greater than a" << endl;

}
else{
    cout << "a is equal to b"<< endl;

}
cin.get();



}