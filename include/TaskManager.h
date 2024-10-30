using namespace std;
class TaskManager {

    public:
        const string TASK_FILE_NAME = "unixtodo-tasks";

        ofstream* create_file(){
            ofstream *file = new ofstream();
            file -> open(TASK_FILE_NAME);
            if(!(file -> is_open())){
                cerr << "The file could not be created" << endl;
                delete file;
                return nullptr;
            }
            return file;
        }

        int add_task(string task){
            create_file();
            
            return 0;
        }
};