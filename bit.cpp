#include<iostream>
using namespace std;
int main() {
/*
    int a = 4;
    int b = 6;

    cout << "a&b" << (a&b) << endl;
    cout << "a|b" << (a|b) << endl;
    cout << "~a" << (~a) << endl;
    cout << "a^b" << (a^b) << endl;

    cout<< (17>>1) << endl;
    cout<< (17>>2) << endl;
    cout<< (19<<1) << endl;
    cout<< (21<<2) << endl;

    int i = 8;

    cout<< (++i) <<endl;
    //9
    cout<< (i++) <<endl;
    //9, i= 10
    cout<< (--i) <<endl;
    //9,i= 9
    cout<< (i--) <<endl;
    //9,i=8
     
    int n;
    cout<<" enter the value of n "<<endl;
    cin>>n;

    cout<< "printing count from 1 to n" <<endl;

    int i = 1;
    for(; ;) {
        if(i<=n){
            cout<<i <<endl;

        }
        else {
            break;
        }
        i++;

    }
        
       int n;
       cout<<" enter the value of n "<<endl;
       cin>>n;
   
       cout<< "printing count from 1 to n" <<endl;
       for(int a = 0 , b = 1; a>=0 & b >=1; a-- , b--){
        cout << a <<" " << b << endl;

       }
        
       int n;
       cout<<" enter the value of n "<<endl;
       cin>>n;

       int sum = 0;
       for(int i = 1; i<=n; i++) {
        sum = sum + i;

       }
       cout<<sum<<endl;
    
       */
      int n;
      cout<<"enter the value of n"<<endl;
      cin>>n;

      bool isprime = 1;

      for(int i = 2; i<n; i++){
        //rem = 0 , not a prime number
        if(n%i==0) {
            //cout<<"not a prime number "<<endl;
            isprime = 0 ;
            break;
        }
       

      }
      if(isprime == 0) {
        cout<<"not a prime number"<< endl;

       }
       else
       {
        cout<<" is a prime number"<<endl;
       }
}