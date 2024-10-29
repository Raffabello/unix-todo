#include <iostream>
#include <string>
#include "../include/TaskManager.h"

using namespace std;
int main(int argc, char **argv){
    if(argc == 3){
        string command = argv[1];
        if(command == "-a" || command == "--add"){
            string task = argv[2];
        }
        else{
            cout << "The command is not recognized" << endl;
            return 1;
        }
    }
    else{
        cerr << "The command is malformed" << endl;
        return 1;
    }
    return 0;
}