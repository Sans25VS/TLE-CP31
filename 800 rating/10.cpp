#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        char matrix[10][10];
        for (int i = 0; i < 10; i++) {
            for (int j = 0; j < 10; j++) {
                cin >> matrix[i][j];
                //cout<<matrix[i][j]
            }

        }
        
        int sum = 0;

        // Check the border elements
        for (int i = 0; i < 10; i++) {
            if (matrix[0][i] == '*') sum += 1;
            if (matrix[9][i] == '*') sum += 1;
            if (matrix[i][0] == '*') sum += 1;
            if (matrix[i][9] == '*') sum += 1;
            
        }
        //continue;

        // Check the inner layers
        for (int i = 1; i < 9; i++) {
            if (matrix[1][i] == '*' || matrix[i][1] == '*' || matrix[8][i] == '*' || matrix[i][8] == '*') {
                sum += 2;
            }
        }

        for (int i = 2; i < 8; i++) {
            if (matrix[2][i] == '*' || matrix[i][2] == '*' || matrix[7][i] == '*' || matrix[i][7] == '*') {
                sum += 3;
            }
        }

        for (int i = 3; i < 7; i++) {
            if (matrix[3][i] == '*' || matrix[i][3] == '*' || matrix[6][i] == '*' || matrix[i][6] == '*') {
                sum += 4;
            }
        }

        for (int i = 4; i < 6; i++) {
            if (matrix[4][i] == '*' || matrix[i][4] == '*' || matrix[5][i] == '*' || matrix[i][5] == '*') {
                sum += 5;
            }
        }

        cout << sum << endl;
    }

    return 0;
}
