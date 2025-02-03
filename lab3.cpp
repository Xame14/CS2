#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream fin;
    ofstream fout;
    
    fout.open("output.txt",ios::app);
    fin.open("input.txt");
    
    int x;
    fin >> x;
    
    string letts;
    for(int i = 0; i < x && !fin.eof();i++){
        getline(fin,letts);
        fout << letts << endl;
    }
    fout.close();
    fin.close();
    return 0;
}
