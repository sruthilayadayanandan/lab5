//including library
#include<iostream>
using namespace std;

//use main function
int main(){

// declaration
float a,b,c ;

//ask the user for the input
cout<< " enter three numbers : " << endl;
cin>> a >> b >> c;

//condition
if ((a>b) && (a>c)) {
cout<< a << " is the maximum number. " ;
}
else if ((b>a) && (b>c)){
cout << b << " is the maximum number. " ;
}
else {
cout << c << " is the maximum number. " ;
}
}

