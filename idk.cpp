#include<iostream>
using namespace std;

int main() {
/*
    char ch = '1';
    int num = 1;

    cout << endl;
    switch( ch ) {
        
        case 1: cout << "First" << endl;
        break;

        case '1' : switch(num){
            case 1: cout << "Value of num is" << num << endl;
            break;
        }
        break;

        default: cout << "It is a default case" << endl;

    }
    cout << endl;
    */
   int a,b;

   cout << " Enter the value of a" << endl;
   cin>>a;

   cout << "enter the value of b" << endl;
   cin>>b;

   char op;
   cout<< "enter the operation u want to perform" << endl;
   cin>>op;

   switch(op) {
    case '+': cout << (a+b) << endl;
              break;
              
    case '-': cout << (a-b) << endl;
              break;

    case '%': cout << (a%b) << endl;
              break;
    
    case '*': cout << (a*b) << endl;
              break;

    case '/': cout << (a/b) << endl;          
              
    default: cout << "enter a valid operation" << endl;          
   }
   return 0;
}
