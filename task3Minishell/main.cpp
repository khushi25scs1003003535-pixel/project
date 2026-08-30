#include <iostream>
using namespace std;

int main() {
    string command;
    string start;

    cout << "alfidotech intern project" << endl; 
    cout << " khushi's Mini Command Runner " << endl;
    cout << "khushi's command platform" << endl;

    cout << "type 'khushi' to star the command runner " << endl;
    getline(cin, start);
    if (start != "khushi"){
        cout << "error " << endl;
        return 0;
    }
    cout <<" welcome to khushi command runner."<<endl;
    cout <<" hope you are doing  well! "<<endl;

    while (true) {

        cout << "\nCommand: ";
        getline(cin, command);

        if (command == "owner"){
            cout <<" project created by KHUSHI SINGH "<<endl;
            continue;
        }

        
        if (command == "exit") {
            cout << "Program Closed !" << endl;
            cout << "thankyou for using my command runner. " << endl;
            cout << "NICE TO MEET YOU. " << endl;
            break;
        }

        
        if (command == "") {
            cout << "try :" << endl;
            continue;
        }

        int project = system(command.c_str());

        
        if (project!= 0) {
            cout << "Invalid command! " << endl;
        }
    }

    return 0;
}