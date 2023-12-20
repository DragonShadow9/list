#include <iostream>

using namespace std;


int main() {
    cout << "enter commit msg:" << endl;
    string msg;
    cin >> msg;
    system("git add .");
    system(("git commit -m \"" + msg + "\"").c_str());
    system("git push");
    system("git pull");
    return 0;
}