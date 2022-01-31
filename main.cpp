#include <iostream>
#include <string>
#include <vector>


using namespace std;

int totalTasks = 0;

void getTasks(vector<string> &tasks) {
    for(int i = 0; i < tasks.size(); i++) {
        cout << i+1 << " " << tasks[i] << endl;
    }
}
int menu(vector<string> &tasks){
    int i;
    cout << "###############\n";
    cout << "# TO DO LIST  #\n";
    cout << "###############\n";
    getTasks(tasks);
    cout << endl;
    cout << "1 - Adicionar Tarefa\n";
    cout << "2 - Finalizar Tarefa\n";
    cout << "3 - Sair\n";
    cout << "Opcao desejada: ";
    cin >> i;
    return i;
}


void addTask(vector<string> &tasks, string task) {
    tasks.push_back(task);
    totalTasks++;
}

void removeTask(vector<string> &tasks, int idTask) {
    tasks.erase(tasks.begin() + (idTask - 1));
    totalTasks --;
}



int main() {

    vector <string> tasks;
    string task;

    int id;

    while(1) {
        switch(menu(tasks)) {
            case 1:
                cout << "\n Task: ";
                cin >> task;
                addTask(tasks, task);
                break;
            case 2:
                cout << "ID To remove: ";
                cin >> id;
                removeTask(tasks, id);
                break;
            case 3:
                exit(1);
            }
    }

    
    return 0;
}