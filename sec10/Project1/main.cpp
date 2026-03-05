#include <iostream>

using namespace std;

int main() {
    
    char word {};
    
    
    do {
        
        cout << "Im Back, Type 's' to restart your Journey!: ";
        cin >> word;
        
        if (word == 's' || word == 'S') {
            cout << "Allright. Let's Dance!!" << endl;
        }
        else {
        cout << "Ah, shame!!" << endl;

        }
    } while (word != 's');
    
    return 0;
}