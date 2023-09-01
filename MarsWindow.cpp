/*
 * Mars Window: Problem from kattis.com
 * Joshua Cappella
 * 08/29/2023
 */

using namespace std;
#include <iostream>

int main(){
    // variable declarations
    int year = 0;
    int months = 0;

    // get user input
    cin >> year;
    months = ((year * 12) - 24220);

    // error checking
    if((months < -4) || (months > 120000)){
        cout << "Invalid year value\n";
        return 0;
    }

    // check all months in year for launch
    for(int m = 1; m < 13; m++){
        if(((months + m) % 26) == 0){
            cout << "yes";
            return 0;
        }
    }
    cout << "no";

    return 0;
}