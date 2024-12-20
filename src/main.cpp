#include <iostream>
#include <fstream>
#include <string>
#include "../include/TaskManager.h"

using namespace std;
int main(int argc, char **argv){
    TaskManager task_manager;
    string command = argv[1];
    if(argc == 3){

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
    else if(argc == 2 && command == "--show"){
        task_manager.show_task();
    }
    else{
        cerr << "The command is malformed" << endl;
        return 1;
    }
    return 0;
}