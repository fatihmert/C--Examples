#include <iostream>
#include <fstream>
using namespace std;

struct Template {
    unsigned int id;
    string name;
};

#define MAX_TPL 3

int main() {
    ofstream wf("template.dat", ios::out | ios::binary);

    if(!wf){
        cout << "Cannot open template.dat file";
        return 1;
    }

    Template tpl[MAX_TPL];
    tpl[0].id = 1;
    tpl[1].id = 2;
    tpl[2].id = 3;
    tpl[0].name = "Fatih";
    tpl[1].name = "Mert";
    tpl[2].name = "Dogancan";

    for(int i = 0; i < MAX_TPL; i++){
        wf.write((char *) &tpl[i], sizeof(Template));
    }

    wf.close();

    if(!wf.good()){
        cout << "Error occured at writing time!" << endl;
        return 1;
    }

    ifstream rf("temmplate.dat", ios::out | ios::binary);
    if(!rf){
        cout << "Cannot open file!" << endl;
        return 1;
    }

    Template rtpl[MAX_TPL];
    for(int i = 0; i < MAX_TPL; i++){
        rf.read((char *) &rtpl[i], sizeof(Template));
    }

    rf.close();

    if(!rf.good()){
        cout << "Error occured at reading time!" << endl;
        return 1;
    }

    cout << "Template details; " << endl;
    for(int i = 0; i < MAX_TPL; i++){
        cout << "ID:\t" << rtpl[i].id << endl;
        cout << "Name:\t" << rtpl[i].name << endl;
        cout << endl;
    }

    return 0;
}
