#include <bits/stdc++.h>
using namespace std;

int main() {
    int rows, cols;
    
    cin >> rows;
    cin >> cols;

    vector<vector<int>> matrix(rows, vector<int>(cols));
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            cin >> matrix[i][j];
        }
    
    }

    int max_sum = INT_MIN;
    //pair<int, int> pos1, pos2;
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            for(int k = 0; k < rows; k++) {
                for(int l = 0; l < cols; l++) {
                    if(i != k && j != l) {
                        int sum = matrix[i][j] + matrix[k][l];
                        if(sum > max_sum) {
                            max_sum = sum;
                            
                    }
                }
            }
        }
    }
    }
    cout << max_sum << endl;

    return 0;
}
