#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    // ifstream, ofstream
    
    ofstream fout;
    
    // open(), close();
    // open modes: write, append
    // write: new file is created if file doesn't exist
    // if file exists, it deletes the current contents
    
    //append: new file is created if the file does't exists
    // if the file exists, content is added at the end of the file
    
    fout.open("output1.txt",ios::app); //opens in append
    //fout.open("output1.txt"); //opens in write mode
    //std::ios::app = append 
    // cout <<
    
    fout << "This is a new file created."<<endl;
    fout << "Lets start adding text here.";
    
    
    fout.close();

    fout.open("User_numbers.txt");
    fout << "User provided integers:";
    int n;
    for(int i = 0;i<10;i++){
        cout <<"Enter a number: ";
        cin >> n;
        fout << i <<":: " << n << endl;
    }
    
    
    fout.close();
    
    int x = 5, y = 10;
    flout a = 3.5, b = 7.8;
    string s1 = "abc";
    fout.open("numbers.txt",ios::app);
    
    fout<<"x = "<< x << " y = " << y << endl;
    
    
    fout.close();
    

    return 0;
}
