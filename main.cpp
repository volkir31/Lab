#include <iostream>
#include "vector"

using namespace std;

int main() {
//    Задан массив из k символов латинского алфавита. Вывести на экран в
//    алфавитном порядке все символы, которые входят в этот массив по одному разу
    cout << "Enter count elements in array for sorting: ";
    int count = 0;
    cin >> count;
    vector<char> alphabet = {};
    cout << "Please, insert elements: " << endl;
    for (int i = 0; i < count; ++i) {
        char input;
        cin >> input;
        alphabet.push_back(input);
    }

    for (int i = 0; i < alphabet.size(); i++) {
        for (int j = i + 1; j < alphabet.size(); j++) {
            if (alphabet[i] == alphabet[j]) {
                alphabet.erase(alphabet.begin() + j);
                j--;
                if (i >= alphabet.size() - 1) {
                    i = 0;
                }
            }
        }
    }

    for (int i = 0; i < alphabet.size(); i++) {
        for (int j = i + 1; j < alphabet.size(); j++) {
            if (alphabet[i] > alphabet[j]) {
                char tmp = alphabet[j];
                alphabet[j] = alphabet[i];
                alphabet[i] = tmp;
            }
        }
    }


    for (char item: alphabet) {
        cout << item << ' ';
    }
    return 0;
}
