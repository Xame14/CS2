#include <iostream>
using namespace std;

int main() 
{
    //Q1----------------------------------------------------------------------------------------------------------------------------
    int nums[10] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29};
    
    //Q2----------------------------------------------------------------------------------------------------------------------------
    //sum---------------------------------
    int sum = 0;
    
    for(int i = 0; i < 10; i++){
      sum = sum + nums[i];        // adding the numbers together
    }
    
    cout <<"The sum of the array is: " << sum << endl;
    
    //product-----------------------------
    long product = 1;
    
    for(int j = 0; j < 10; j++){
      product = product * nums[j];  // multiplying the numbers 
    }
    
    cout <<"The product of the array is: "<< product << endl;
    
    //min-----------------------------------
    int min = nums[0];
    
    for(int k = 0; k < 10; k++){
      if(min > nums[k]){          //checking for minimum
        min = nums[k];
      } 
    }
    
    cout <<"The minimum value of the array is: "<< min << endl;
    
    //max--------------------------------------
    int max = nums[0];
    
    for(int q = 0; q < 10; q++){
      if(max < nums[q]){          //checking for maximum
        max = nums[q];
      } 
    }
    
    cout <<"The maximum value of the array is: "<< max <<endl;
    
    //Q3----------------------------------------------------------------------------------------------------------------------------
    
    int d2arr1[4][4];
    int c3arr1[4][4];
    int f4arr1[4][4];
    
    cout<< endl <<"Building 2 4x4 grids and put integers in them."<<endl;
    
    int usinp;
    
    
    for(int r1 = 0; r1 < 4;r1++){
        
        for(int c1 = 0; c1 < 4; c1++){
            
            cin >> usinp;
            d2arr1[r1][c1] = usinp;
            cin.clear();
            
        }
    }
    
    
    
    
    
    
    
    
    
    
    
    
    //string name;
    
    //cin >> name;
    
    //getline(cin, name)
    //name.length();
    //name.size();
    
    //for(--){
    
    //}
    
    return 0;
}
