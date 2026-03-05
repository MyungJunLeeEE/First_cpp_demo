
#include <iostream>
#include <vector>

using namespace std;

int main() {
    
    int cent {0};
    
    cout << "Enter an amount in cent: ";
    cin >> cent;
    
    int dollars, quaters, dimers, nikels, pennie {0};
  
    dollars = cent / 100;
    cent %= 100;
    
    quaters = cent / 25;
    cent %= 25;
    
    dimers = cent / 10;
    cent %= 10;
    
    nikels = cent / 5;
    cent %= 5;
    
    pennie = cent;
    
    cout << "\nYou can provide the change as follows:" << endl;
    cout << "dollars: " << dollars << endl;
    cout << "quaters: " << quaters << endl;
    cout << "dimers: " << dimers << endl;
    cout << "nikels: " << nikels << endl;
    cout << "pennies: " << pennie << endl;

    
     
    return 0;
}

