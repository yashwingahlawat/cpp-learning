#include<iostream>
using namespace std;
/*

int factorial(int n){
        
    int fact = 1;

    for(int i = 1; i<=n; i++) {
        fact = fact *i;
    }
    return fact;

}
int nCr(int n , int r) {

    int num = factorial(n);

    int denom = factorial(r) * factorial(n-r);

    return num/denom;
}
    int main() {

        int n,r;
        cin >> n >> r;
        cout << "Answer is " << nCr(n,r) << endl;


    }
    
    //function signature 
    void printcounting(int n) {

        //function body
        for(int i = 1; i <=n; i++){
            cout << i << " ";

        }
        cout << endl;
        
    }
    int main() {
        int n;
        cin>>n;

        //function call
        printcounting(n);

        return 0;

    */
   //1 --> prime
   //0 --> not prime
    bool isPrime(int n) {

        for(int i = 2; i<n; i++) {
            if(n%i == 0) {
                return 0;
            }
            
        }
            return 1; 
    }
        int main(){
            int n;
            cin >> n;
            
            if(isPrime(n)) {
                cout << "is a prime no. " << endl;
            }
            else {
                cout << "is not a prime no." << endl;
            }
        }
    