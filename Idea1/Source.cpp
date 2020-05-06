#include "Header.h"

int main() {

    string ans, get, Y, N, ans2, YN;

    YN = "[Yes/No]";
    Y = "yes";
    N = "no";

    cout << "Would you like to create a text file (.txt)?" << endl;
    cout << YN << endl;

    sleep_for(seconds(2));

    get = in(ans);

    //Checks if ans is "yes"
    while (nonsens(Y, get) != 1) {

        cout << "You said '" << get << "'" << endl;

        if (nonsens(N, get) == 1) {
            
            cout << "Are you sure you want the program to end?" << endl;
            cout << YN << endl;

            get = in(ans2);

            //Ends program
            cout << "Since you don't want to create a text file, the program will close now" << endl;
            sleep_for(seconds(5));
            cout << "Bye!";
                return 0;
        }
        else {
            cout << " Unfortunatly thats not 'Yes' or 'No'" << endl;

            cout << "Under Construction (asks to try again, or exits)" << endl;
        }
    }
    cout << "good" << endl;
    return 0;
    /*ofstream file;
    file.open("codebind.txt");
    file << "Please writr this text to a file.\n this text is written using C++\n";
    file.close();
    return 0;
    */
}