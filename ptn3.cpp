#include<iostream>
using namespace std;
int main() {
    /*
    int n;
    cin>>n;

    int row = 1;
    int value = 'A';

    while(row<=n) {
        int col = 1;
        while(col<=row) {
            cout<<value;
            value = value + 1;
            col = col + 1;

        }
        cout<<endl;
        row = row + 1;

    }

    int n;
    cin>>n;

    int row = 1;
    
    while(row<=n){
        int col = 1;
        while(col<=row) {
            char ch = 'A' + row + col + - 2;
            cout<< ch;
            col = col + 1;

         }
         cout<<endl;
         row = row + 1;

        }
         
        int n;
        cin>>n;

        int row = 1;

        while(row<=n) {
            int col = 1;
            char start = 'A' + n - row;
            while(col<=row) {
                
                cout<<start;
                start = start + 1;
                col = col + 1;

            }
            cout<<endl;
            row = row + 1;

        }
        
       int n;
       cin>>n;

       int i = 1;

       while(i<=n){

        //space
        int space = n - i;
        while(space) {
            cout<<" ";
            space = space - 1;

        }
        //stars
        int j = 1;
        while(j<=i) {
            cout<< "*";
            j = j + 1;

        }
        cout<<endl;
        i = i + 1;

       }
        
       int n; 
       cin>>n;

       int row = 1;

        while(row<=n){

        int col = 1;

        while(col <= n - row + 1){
            cout<<"*";
            col = col + 1;


            }
            cout << endl;
            row = row + 1;
       }
       
      */
     int n;
     cin>>n;

     int row = 1;
    
     while(row<=n) {

        //space
        int space = row - 1;

        while(space) {

                cout<<" ";
                space = space + 1;


        }
        //star
        int col = 1;
        while(col<=n-row+1); 
        cout<<"*";
        col = col + 1;


     }
     cout<<endl;
     row = row +1;
    }
    
    