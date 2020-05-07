#include "Header.h"

int main() {

    string ans, get1, Y, N, get2, YN;

    YN = "[Yes/No]";
    Y = "yes";
    N = "no";

    cout << "Would you like to create a text file (.txt)?" << endl;

    sleep_for(seconds(1));
    cout << YN << endl;

    

    get1 = in(ans);

    //Checks if ans is "yes"
    while (nonsens(Y, get1) != 1) {

        cout << "You said '" << get1 << "'" << endl;

        if (nonsens(N, get1) == 1) {

            sleep_for(seconds(1));

            cout << "Are you sure you want the program to end?" << endl;
            cout << YN << endl;

            get2 = in(ans);

            while (nonsens(N, get2) != 1) {

                if (nonsens(Y, get2) == 1) {

                    //Ends program
                    cout << "Since you don't want to create a text file, the program will close now" << endl;

                    sleep_for(seconds(3));

                    cout << "Bye!";

                    return 0;

                }
                else {
                    cout << " Unfortunatly thats not 'Yes' or 'No'" << endl;

                    cout << "Under Construction (asks to try again, or exits)" << endl;
                }
                get2 = in(ans);
                
            }
            
            
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