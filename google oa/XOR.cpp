#include <iostream>
#include <vector>
#include <bitset>
using namespace std;

void printBits(const vector<int>& arr) {
    for (const int& num : arr) {
        bitset<20> bits(num); // assuming a 32-bit integer
        //cout << "Bits of " << num << " : " << bits << endl;
        int countOnes = 0;
        int countZeros = 0;
        int bits = sizeof(int) * 20; // Number of bits in an integer

    for (int i = 0; i < bits; ++i) {
        if (num & (1 << i)) {
            ++countOnes;
        } else {
            ++countZeros;
        }
    } 
    }
}

int main() {
   vector<int> arr = {1, 2, 3, 4, 5, -1, -2, -3}; // example array with positive and negative numbers
    
    //cout << "Array elements and their bits:" <<endl;
    printBits(arr);

    return 0;
}
