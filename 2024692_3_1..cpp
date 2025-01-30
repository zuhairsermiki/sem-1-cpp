#include <iostream>
#include <string>
using namespace std;


const int m = 10;
const int r = 2;    


void DISPLAY(const string family[r][m]);
void SWAP(string family[r][m], int i, int j);
void SELECTION_SORT(string family[r][m]);
void TRANSFER_NON_COVID(const string family[r][m], string iffatHouse[r][m], int &c);


int main() {
   
    string family[r][m] = {
        {"Amna", "Father", "Mother", "Sister", "Brother1", "Brother2", "Grandfather", "Grandmother", "Uncle", "Aunt"},
        {"P", "N", "P", "N", "P", "N", "N", "N", "N", "N"}
    };

    string iffatHouse[r][m]; 
    int nonCvdCnt = 0;           

    cout << " Family Details:\n\n";
    DISPLAY(family);

 
    SELECTION_SORT(family);
    cout << "\nFamily Details After Sorting (first positive, then Negative):\n";
    DISPLAY(family);

   
    TRANSFER_NON_COVID(family, iffatHouse, nonCvdCnt);
    cout << "\nNon-COVID Member Transferred to Iffat's House:\n";
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < nonCvdCnt; j++) {
            cout << iffatHouse[i][j] << "\t";
        }
        cout << endl;
    }

    return 0;
}


void DISPLAY(const string family[r][m]) {
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < m; j++) {
            cout << family[i][j] << "\t";
        }
        cout << endl;
    }
}


void SWAP(string family[r][m], int i, int j) {
    string tempname = family[0][i];
    string tempstatus = family[1][i];

    family[0][i] = family[0][j];
    family[1][i] = family[1][j];

    family[0][j] = tempname;
    family[1][j] = tempstatus;
}


void SELECTION_SORT(string family[r][m]) {
    for (int i = 0; i < m - 1; i++) {
        for (int j = i + 1; j < m; j++) {
            if (family[1][i] > family[1][j]) { 
                SWAP(family, i, j);
            }
        }
    }
}

void TRANSFER_NON_COVID(const string family[r][m], string iffatHouse[r][m], int &c) {
    c = 0;
    for (int i = 0; i < m; i++) {
        if (family[1][i] == "N") { 
            iffatHouse[0][c] = family[0][i];
            iffatHouse[1][c] = family[1][i];
            c++;
        }
    }
}
