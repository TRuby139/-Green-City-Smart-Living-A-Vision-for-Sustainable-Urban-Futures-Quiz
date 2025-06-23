#include <iostream>
#include <string>
using namespace std;
string title, content;
int options;
int main() {
    while (true) {
        cout << "what u want" << endl;
        cout << "upload a blog" << endl;
        cout << "view blogs" << endl;
        cout << "ur option?";
        cin >> options;
        if (options == 1) {
            cout << "enter blog title";
            getline(cin, title);
            cout << "\nenter blog content";
            getline(cin, content);
        }
        else if (options == 2) {

            cout << "Title of blog" << title << endl;
            cout << "Content      :" << content << endl;
        }
        else {
            cout << "invalid dude";
        }

    }
    return 0;



}