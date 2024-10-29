#include <iostream>
#include <string>
#include "../include/TaskManager.h"

using namespace std;
int main(int argc, char **argv){
    string command = argv[1];
    if(command == "-a" || command == "-add"){
        cout << "User asked to add a task";
    }
    else{
        cout << "This command is not recognized" << endl;
    }
    return 0;
}