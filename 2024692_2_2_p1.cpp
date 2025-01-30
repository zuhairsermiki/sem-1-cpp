#include <iostream>
using namespace std;

int main() {
    int a = 7;

    
    char chars[] = {'c', 'i', 's', 'b', 'e', 's'};
    
    
    for (int i = 0; i < a ; i++) {
        
        for (int j = 0; j < 3 * (a - i - 1); j++) {
            cout << " ";
        }

        
        cout << chars[i];
        if (i > 0) {
            for (int j = 0; j < 6 * i - 1; j++) {
                cout << " ";
            }
            cout << chars[i];
        }
        cout << endl;
    }

    
    cout << "t  ";
 
    for (int i = 5; i >= 0; i--) {
        cout << chars[i] << "  ";
    }for (int i = 1; i <= 5; i++) {
      cout << chars[i] << "  ";
    }
   cout << " t" << endl;

    return 0;
}