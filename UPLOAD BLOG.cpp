#include <iostream>
#include <string>
using namespace std;
string title, content;
int options;

int main() {
    while (true) {
        cout << "what u want" << endl;
        cout << "1)Upload a blog" << endl;
        cout << "2)View blogs" << endl;
        cout << "3)Exit"<<endl;
        cout << "3)Ur option?";
        cin >> options;
        cin.ignore();
        if (options == 1) {
            cout << "enter blog title";
            cin.ignore();
            getline(cin, title);
            
            cout << "\nenter blog content";
            getline(cin, content);
        }
        else if (options == 2) {

            cout << "Title of blog" << title << endl;
            cout << "Content      :" << content << endl;
        }
        else if (options == 3) {
            cout << "Exiting program..." << endl;
            break;
        }
        else {
            cout << "Invalid option, please select 1–3." << endl;
        }

    }
    return 0;



}
