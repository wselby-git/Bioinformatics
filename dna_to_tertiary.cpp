// Author: William Selby
// Converts DNA sequence to a tertiary number

#include <iostream>
#include <string>

using namespace std;

string convertDnaToTetrary(string dna_sequence) {
    string tetrary_sequence;
    
    for (int i = 0; i < dna_sequence.length(); ++i) {
        switch (dna_sequence.at(i)) {
            case 'A':
                tetrary_sequence += '0';
                break;
            case 'C':
                tetrary_sequence += '1';
                break;
            case 'G':
                tetrary_sequence += '2';
                break;
            case 'T':
                tetrary_sequence += '3';
                break;
        }
    }
    
    return tetrary_sequence;
}

int main() {
    string dna_sequence;
    cout << "Please enter a DNA sequence: ";
    getline(cin, dna_sequence);
    
    cout << "The corresponding tetrary sequence is: " << convertDnaToTetrary(dna_sequence) << endl;
    
    return 0;
}
