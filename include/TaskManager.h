#include <string>

using namespace std;
class TaskManager {

    public:
        const string TASK_FILE_NAME = "unixtodo-tasks";

        int create_file(){
            ofstream *file = new ofstream();
            if(file -> good()){
                return 0;
            }
            else{
                file -> open(TASK_FILE_NAME);
                if(!(file -> is_open())){
                    cerr << "The task file could not be created" << endl;
                    file -> close();
                    delete file;
                    return 1;
                }
                else{
                    cout << "The task file was created";
                    return 0;
                }
            }

        }

        int add_task(string task){  
            ofstream* file = new ofstream(TASK_FILE_NAME,::ios_base::app);
            if(!(file -> is_open())){
                cerr << "The task could not be added" << endl;
                delete file;
                return 1;
            }else{
                *file << "[ ] " << task << endl;
                delete file;
                return 0;
            }
        }

        void show_task(){
            ifstream* file = new ifstream(TASK_FILE_NAME);
            string task;
            if(!(file -> is_open())){
                cerr << "Could not read the task file" << endl;
                delete file;
            }else{
                while(getline(*file,task)){
                    cout << task << endl;
                }
            }
        }
};