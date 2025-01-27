#include <iostream>
using namespace std;

int main()
{
    int ar[4][5]; //array with 4 rows and 5 columns
    
    int br[3][2] = {10, 20, 30, 40, 50, 60}; // 10 20
//                                              30 40
//                                              50 60
    
    int cr[3][2] = {10,20,30};               // 10 20
//                                              30  0
//                                               0  0
    
    int dr[3][2] = {10, 0, 20, 0, 30, 0};    // 10  0
//                                              20  0    
    int er[3][2] = {{10},{20, 40},{30}};
    
    // access a location
    cout << dr[1][1]<<endl; //40
    
    return 0;
}
