#include<iostream>
using namespace std;

    void printArray(int arr[], int size) {
        cout << "printing the array" << endl;

        for(int i = 0; i<size; i++) {
            
            cout << arr[i] << " ";
        }
        cout << "printing done" << endl;
    
    }

    int main() {

        //declare
        int number[15];

            //accessing an array
            cout << endl << "Value at 14 index" << number[14] << endl;

            cout << endl << "Value at 10 index" << number[10] << endl;

            //initialising an array
        int second[3] = {5, 7, 11};

            //accessing an element
            cout << endl << "Value at 2 index" << second[2] << endl;

        int third[15] = {2 ,7 };

            int n = 15;
            printArray(third, 15);

            //initialising all locations with 0
        int fourth[10] = {0};
            n = 10;
            printArray(fourth, 10);
        
        int fifth[10] = {1};
            n = 10;
            printArray(fifth, 10);
            
        int fifthSize = sizeof(fifth)/sizeof(int);
        cout << "size of fifth is" << " " << fifthSize << endl;

        char ch[5] = {'a' , 'b' , 'c' , 'x' , 'y'};
        cout << ch[3] << endl;

        cout << "printing the array" << endl;

        for(int i = 0; i<5; i++) {
            
            cout << ch[i] << " ";
        }    
            cout << "printing done" << endl;

        double firstdouble[5];
        float firstfloat[6];
        bool firstbool[9];



        cout << endl << "everything is fine" << endl << endl;

            return 0;
}
     
            

            
            
    