#include<iostream>
#include<vector>
using namespace std;

int main()
{

vector<int> v;

vector<int> a(5,1);
//iska mtlb h ki ek vector a h uska size 5 h aur saare element 1 h

cout<<"print a"<<endl;
for(int i:a){
cout<<i<<" ";
}cout<<endl;


vector<int> last(a);//iska mtlb h ek element h last name ka jisme saare a ke element copy krr diye

cout<<"print last"<<endl;
for(int i:last){
cout<<i<<" ";
}cout<<endl;



cout<<"capacity->"<<v.capacity()<<endl;

v.push_back(1);
cout<<"capacity->"<<v.capacity()<<endl;

v.push_back(2);
cout<<"capacity->"<<v.capacity()<<endl;

v.push_back(3);
cout<<"capacity->"<<v.capacity()<<endl;

cout<<"size->"<<v.size()<<endl;

cout<<"element at 2nd index ->"<<v.at(2)<<endl;
cout<<"first element->"<<v.front()<<endl;
cout<<"last element->"<<v.back()<<endl;

cout<<"before pop"<<endl;

for(int i:v){
cout<<i<<" ";
}cout<<endl;

v.pop_back();

cout<<"after pop"<<endl;

for(int i:v){
cout<<i<<" ";
}cout<<endl;

cout<<"before clear size"<<v.size()<<endl;
v.clear();

cout<<"after clear size"<<v.size()<<endl;





}