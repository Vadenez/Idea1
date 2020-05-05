#include "Header.h"

int main() {
    string ans, get;
    string Y = "yes";
    string N = "no";
    cout << "Would you like to create a text file (.txt)?" << endl;
    cout << "[Yes/No]" << endl;
    get = in(ans);
    cout << ans << endl;
    if (nonsens(Y, get) == 1) {
        //continue
        cout << "Under Construction (Continues to .txt creator)";
    }
    else if (nonsens(N, get) == 1) {
        //end program
        cout << "Under Construction (exits program)";
    }
    else {
        cout << "Under Construction (asks to try again, or exits)" << endl;
    }
    /*ofstream file;
    file.open("codebind.txt");
    file << "Please writr this text to a file.\n this text is written using C++\n";
    file.close();
    return 0;
    */
}