#include <iostream>
#include <string>
using namespace std;

int main() {
    string text, result = "";
    cout << "Enter a line: ";
    getline(cin, text);

    int spaceCount = 0;

    for (int i = 0; i < text.length(); i++) {
        if (text[i] == ' ') {
            spaceCount++;  // count spaces
        } else {
            // modify spaces before word
            if (spaceCount == 1 || spaceCount > 2)
                result += "  ";   // make exactly 2 spaces
            else if (spaceCount == 2)
                result += "  ";

            spaceCount = 0;
            result += text[i];  // add character
        }
    }

// handle ending spaces
    if (spaceCount >= 1)
        result += "  ";

    cout << "Modified string:\n" << result;
    return 0;
}