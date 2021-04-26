#include <iostream>
using namespace std;

int main() {
    bool Question1;
    bool Question2;
    bool Question3;
    double Q1;
    cout << "what is the answer to this math equation? \n";
    cout << "5/2(3-2[5*3]) \n";
    cin >> Q1;

    if (Q1 == -67.5) {
        cout << "TRUE! \n";
        Question1 = true;
    } else {
        cout << "FALSE! \n";
        Question1 = false;
    }

    int Q2;
    cout << "was orange(colour) named after the fruit? \nor was orange (fruit) named after the colour? \n";
    cout << "0 = colour \n1 = fruit \n";
    cin >> Q2;

    if (Q2 == 1) {
        cout << "TRUE! \n";
        Question2 = true;
    } else {
        cout << "FALSE! \n";
        Question2 = false;
    }

    string Q3;
    cout << "what note is a C6# (C sextuple sharp)? \n";
    cout << "use uppercase letters for the notes and a # or a b to symbolize a sharp or flat\n";
    cin >> Q3;

    if (Q3 == "F#") {
        cout << "TRUE! \n";
        Question3 = true;
    } else if (Q3 == "Gb") {
        cout << "TRUE! \n";
        Question3 = true;
    } else {
        cout << "FALSE! \n";
        Question3 = false;
    }

    cout << "here are your results! \n";

    if (Question1,Question2,Question3 == true) {
        cout << "3/3";
    } else if (Question1,Question2 == true,Question1,Question3 == true,Question2,Question3 == true) {
        cout << "2/3";
    } else if (Question1 == true,Question2 == true,Question3 == true) {
        cout << "1/3";
    } else {
        cout << "0/3";
    }

}
