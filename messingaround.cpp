#include <iostream>


using namespace std;

int userInput;
bool running = true;
int main(){
    
    while (running){
        cout << "Enter a number between 1 and 10, press 0 to end program" << endl;
        cin >> userInput;
        if(userInput == 0)
            running = false;
        if (userInput > 10)
            cout << "Invalid number, try again" << endl;
        else 
            for (int i = 0; i < userInput; i++)
                cout << "Hello, World!" << endl;
    }
    
    return 0;
}

