#include<iostream>
using namespace std;

int fact(int n){
	if(n == 0){
		return 1;}
	else{
		return n*fact(n-1);}
}
int main(){
int n;

cout << "Enter a number" <<endl;
cin>> n;

if(n<0){
	cout<<"INVALID NEGATIVE INPUT";}
else{
	cout<<"Factorial is "<<fact(n)<<endl;}
return 0;
}
