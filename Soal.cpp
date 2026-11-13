#include <iostream>
using namespace std;

int main() {
    system("cls");
    int l1[2][3][4];
    for (int i = 0; i < 2; i++) {
        cout << "Layer ke-" << i+1 << endl;
        for (int j = 0; j < 3; j++) {
            for (int k = 0; k < 4; k++) {
                cin >> l1[i][j][k];
            }
        }
        cout << "\n";
    }

    for (int i = 0; i < 2; i++) {
        cout << "Layer ke-" << i+1 << endl;
        for (int j = 0; j < 3; j++) {
            for (int k = 0; k < 4; k++) {
                cout << l1[i][j][k] << " ";
            }
            cout << "\n";
        }
        cout << "\n";
    }
}