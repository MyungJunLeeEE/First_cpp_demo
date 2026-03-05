
#include <iostream>
#include <vector>

using namespace std;


int main() {

    char menu {};   // user enters the menu
    vector <char> vec;
    int add_number {0};
    
    while(true){
        
        cout << "\nPress menu you want!\n P: print all number\n A: add number \n M: mean number\n S: smallest number B: biggest number Q: quit\n\n";
        cout << "\nPress the menu: ";
        cin >> menu;
        
        if (menu == 'p' || menu == 'P') {
            if (vec.size() == 0) {
                cout << "\nThere's no number in storage.\n";
                continue;
            }
            else {
               cout << "["; 
                
               for (size_t number : vec) {
                   cout << " " << number << " ";
               }
               
               cout << "]";
            }
            
        }
        
        
        if (menu == 'A' || menu == 'a') {
            
            cout << "Enter any number you like! But only one!: ";
            cin >> add_number;
            
            vec.push_back(add_number);
        }
        
        if (menu == 'M' || menu == 'm') {
            
            double total {0};
            double avg {};
            
            for (size_t i = 0; i < vec.size(); i++) {
                total += vec.at(i);
            }
            avg = total / vec.size();
            
            cout <<"mean of numbers are " << avg;
            
        }
        
        if (menu == 'b' || menu == 'B') {
            
            int comp {0};
            for (int number : vec) {
                if (number > comp)
                    comp = number;
            }
            cout << "The Biggest number is " << comp; 

            
        }
        
        if (menu == 'Q' || menu == 'q') {
            cout << "Thank you fir enjoying program!" << endl;
            break;
        }
        
        
        
        
        
        
        
        
    }
    
    
    return 0;
}