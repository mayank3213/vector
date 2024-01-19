#include<iostream>
#include<vector>
using namespace std;
int main()
{
   vector<int>v(5);
   cout<<"size of vector: "<<v.size()<<endl;
   cout<<"capacity of vector: "<<v.capacity()<<endl;
   v.push_back(2);
   v.push_back(3);
   v.push_back(4);
   v.push_back(5);
   cout<<"size of vector: "<<v.size()<<endl;
   cout<<"capacity of vector"<<v.capacity();
}
