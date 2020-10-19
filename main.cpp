#include <iostream>
using namespace std;
int main() {
    cout << "1) Ryan" << endl
     << "2) Laura" << endl
     << "3) Roos" << endl
     << "4) Peggy" << endl
     << "5) Erwin" << endl;
    int input;
    cin >> input;
    while((input < 0) || (input > 5)){
        cout << "Je input gaat van 1-5" << endl;
        cin >> input;
    }
    switch (input) {
        case 1:
            cout << "Ah Ryan goede keuze !";
            break;
        case 2:
            cout << "Ah Laura is ook een goede keuze !";
            break;
        case 3:
            cout << "Ah Roos is ook een goede keuze !";
            break;
        case 4:
            cout << "Ah Peggy is ook een goede keuze !";
            break;
        case 5:
            cout << "Ah Erwin is ook een goede keuze !";
            break;
    }
    return 0;
}
