#include <iostream>
#include <fstream>
#include <string>
#include "../include/TaskManager.h"

using namespace std;
int main(int argc, char **argv){
    if(argc == 3){
        string command = argv[1];
        TaskManager task_manager;

        if(command == "-a" || command == "--add"){
            string task = argv[2];
            task_manager.create_file();
            task_manager.add_task(task);
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