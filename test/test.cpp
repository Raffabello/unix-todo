#include <iostream>
#include <cstring>

using namespace std;
int main(int arg, char** argv){

    if(strcmp(argv[1], "-a") == 0 || strcmp(argv[1], "--add") == 0){
        if(strcmp(argv[2], "") == 0){
            cout << "The task cannot be empty" << endl;
        }
        else {
            cout << "TODO:" << argv[2] << endl;
        }
    }
    else{
        cout << "This command doesn\'t exist." << endl;
    }

    return 0;
}