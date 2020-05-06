#include "Header.h"

int main() {
    string ans, get;
    string Y = "yes";
    string N = "no";
    cout << "Would you like to create a text file (.txt)?" << endl;
    cout << "[Yes/No]" << endl;
    get = in(ans);
    cout << ans << endl;

    //Checks if ans is "yes"
    while (nonsens(Y, get) == 1) {

        if (nonsens(N, get) == 1) {

            //Ends program
            cout << "Since you don't want to create a text file, the program will close now" << endl;
            //wait five seconds
            cout << "Bye!";
                return 0;
        }
        else {
            cout << "You typed '" << get << "'," << endl << " Unfortunatly thats not 'Yes' or 'No'" << endl;

            cout << "Under Construction (asks to try again, or exits)" << endl;
        }
    }
    /*ofstream file;
    file.open("codebind.txt");
    file << "Please writr this text to a file.\n this text is written using C++\n";
    file.close();
    return 0;
    */
}