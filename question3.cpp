#include <iostream>

using namespace std;

int main() {
    char str[100];
    char seq[4];
    int found = 0;

    cout << "Enter a string:";
    cin.getline(str, 100);

    cout << "Enter a sequence of 3 characters to search:";
    cin.getline(seq, 4);


    for (int i = 0; str[i] != ' '; i++) {
   
        if (str[i] == seq[0] && str[i+1] == seq[1] && str[i+2] == seq[2]) {
            found = 1;
            break;
        }
    }

    if (found)
        cout <<"Sequence found in string.";
    else
        cout<<"Sequence NOT found in string.";

    return 0;
}
	
