#include<iostream>
using namespace std;

int main() {
    /*
    int n;
    cin>>n;

    int i = 1;
    int count = 1;

    while(i<=n){

        int j = 1;
        while(j<=n){
            cout<<count<<" ";
            count = count + 1;
            j = j + 1;

        }
        cout<<endl;
        i = i + 1;

    }
  
    int n;
    cin>>n;

    int row = 1;
    int print = 1;

    while(row<=4) {

        int col = 1;
        while(col<=row){
            cout<<print++<<" ";
            col++;

        }
        cout<<endl;
        row++;
        
    }
    
   int n;
   cin>>n;

   int row = 1;

   while(row<=n) {
        
        int col = 1;
        int value = row;
        while(col <= row){ 
            cout<<value;
            value = value + 1;
            col = col + 1;

        }
        cout<<endl;
        row = row +1;

        
    }
    
   int n;
   cin>>n;

   int i=1;
   while(i<=n){
        int j = 1;
        while(j<2*i){
            cout << j <<" ";
            j = j + 1;

        }
        cout<<endl;
        i = i +1;

   }
    
   int n;
   cin>>n;

   int i = 1;

   while(i<=n) {
        int j = 1;
        while(j <= i){
            cout<< i - j + 1 <<" ";
            j = j + 1;

          }
          cout<<endl;
          i = i +1;



       }
    
   int n;
   cin>>n;
   
   int row = 1;

   while(row <= n){
        int col = 1;
        while(col<=n){
            char ch = 'A' + row - 1;
        cout<< ch;
        col = col + 1;

        }
        cout<<endl;
        row = row + 1;

    
   }
        
       int n;
   cin>>n;
   
   int row = 1;

   while(row <= n){
        int col = 1;
        while(col<=n){
            char ch = 'A' + col - 1;
        cout<< ch;
        col = col + 1;

        }
        cout<<endl;
        row = row + 1;

    
   }
        
       int n;
       cin>>n;

       int start = 'A';

       while(start <= n) {
            int col = 1;
            while(col<=n){
                
                cout<<start;
                col = col + 1;


            }
            cout<<endl;
            start = start + 1;


       }
    
   int n;
   cin>>n;

   int row = 1;
   while(row<=n) {

    int col = 1;

    while(col<=n) {
        
        char ch = 'A' + row + col - 2;
        cout<<ch;
        col = col + 1;

    }
    cout<<endl;
    row = row + 1;
   }
    */
   int n;
   cin>>n;

   int row = 1;
    while(row<=n) {

        int col = 1;
        char ch = 'A' + row - 1;
        
        while(col<=row) {

            
            cout<<ch;
            col = col + 1;

        }
        cout<<endl;
        row = row + 1;
   }
       

}
        
   

