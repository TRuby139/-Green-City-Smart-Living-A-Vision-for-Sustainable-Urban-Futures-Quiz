#include <iostream>
#include <string>
using namespace std;
string title, content;
int options;

int main() {
    while (true) {
        cout << "What u want" << endl;
        cout << "1)Upload a blog" << endl;
        cout << "2)View blogs" << endl;
        cout << "3)Exit"<<endl;
        cout << "3)Ur option?";
        cin >> options;
        
        if (options == 1) {
            cout << "Enter blog title:";
            cin.ignore();
            getline(cin, title);
            
            cout << "\nEnter blog content:";
            getline(cin, content);
        }
        else if (options == 2) {

            cout << "Title of blog:" << title << endl;
            cout << "Content      :" << content << endl;
        }
        else if (options == 3) {
            cout << "Exiting program" << endl;
            break;
        }
        else {
            cout << "Invalid option, please select 1–3." << endl;
        }

    }
    return 0;



}
