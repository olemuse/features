#include <string>
#include <iostream>

using namespace std;

void passString(string s){
    s = "Hh";
    string ss = s;
    cout << s;
}

void passRefString (string& s){
    string ss = s;
    cout << s;
}

void passPntString (string* s){
    string* ss = s;
    cout << s;
}

void passConstString (const string s){
    string ss = s;
    cout << s;
}

void passConstRefString (const string& s){
    string ss = s;
    cout << s;
}

void passConstPntString (const string* s){
    string ss = *s;
    const string* sss = s;
    cout << s;
}

void passRvalueString(const string&& s) {
    string ss = s;
    cout << s;
}

