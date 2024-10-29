using namespace std;
class TaskManager {

    public:
        const string TASK_FILE_NAME = "unixtodo-tasks";

        int open_file(){
            ofstream file;
            file.open(TASK_FILE_NAME);
            if(!file){
                cerr << "The file could not be created!";
                return 1;
            }
            file.close();
            return 0;
        }

        int add_task(){
            
        }
};