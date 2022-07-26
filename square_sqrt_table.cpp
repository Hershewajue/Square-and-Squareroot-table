// Main function of the C++ program.
#include <iostream>
#include <cmath>
using namespace std;


float square(float); 
float squareRoot(float);

int main()
{
    int userInput;
    
    cout << "Please enter a number: ";
    cin >> userInput;
    
    
    cout << "The square and squareroot of numbers between 1 and " << userInput << " are as below." << endl;
    cout << "x\tx^2\tx^1/2 " << endl;
    cout << "------------------------" << endl;
        
            for(int i = 1; i<=userInput; i++)
            {
                cout << i << "\t" << square(i) << "\t" << squareRoot(i) << endl;
            }
}

float square(float x){
    return pow(x,2);
}

float squareRoot(float y){
    return pow(y,0.5);
}
