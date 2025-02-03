#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream fin;
    
    fin.open("input.txt"); //read mode
    
    // eof() => bool
    // eof() => true when the cursur is at the end of the file
    // !eof() => true when the cursor is not at the end of the file
    int x;
    for(int i = 0; i<2;i++){
        fin >> x;
        cout << x << endl;
        
    }
    
    //while(!fin.eof()){
    //    fin >> x;
    //    cout << x << endl;
    //    
    //}
    
    // cin >>
    //int x;
    //fin >> x;
    
    //cout<<x;
    
    fin.close();
    
    ofstream fout;
    fout.open("strings1.txt");
    
    string s1;
    fin.open("string.txt");
    while(!fin.eof()){
        getline(fin,s1);  //fin >> s1;
        cout << s1 << endl;
    }
    fin.close();
    fout.close();

    return 0;
}
