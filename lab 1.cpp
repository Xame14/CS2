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
    
    int usinp;      //user input
    
    //matrix l------------------------------------------------------
   cout<<"Please make two matricies"<<endl;
   
    for(int r1 = 0; r1 < 4;r1++){
        
        for(int c1 = 0; c1 < 4; c1++){
            
            cin >> usinp;                   //filling in the matrix with inputs
            d2arr1[r1][c1] = usinp;         //r1 = row 1 and c1 = column 1
            
            
        }
        if(r1 < 3){
            cout<<endl<<"Now for the next row"<<endl;
        }
    }
    
    //Marix 2 ---------------------------------------------------
    
    int user2;
    cout<<"lets make the second matrix now."<<endl;
    
    for(int r2 = 0; r2 < 4;r2++){
        
        for(int c2 = 0; c2 < 4; c2++){
            
            cin >> user2;                                       //filling in matrix 2 with inputs
            c3arr1[r2][c2] = user2;   //r2 = row 2 and c2 = column 2
            
            
        }
        if(r2 < 3){
            cout<<endl<<"Now for the next row"<<endl;
        }
    }
    
    //matrix 3----------------------------------------------
    
    for(int r3 = 0; r3 < 4;r3++){
        
        for(int c3 = 0; c3 < 4; c3++){
            
            //filling in matrix 3 with sums of the arrays
            f4arr1[r3][c3] = d2arr1[r3][c3] + c3arr1[r3][c3];        //r3 = added rows and c3 = added columns
            
            
        }
    }
    
    //Q4--------------------------------------------------------
    
    cout<<"what is your name: ";
    
    string name;                         //intialization
    
    getline(cin,name);                   //input
    
    int nl = name.length();
    
    for(int u=0; u<nl; u++)             //loop to capitalize
    {
        name[u] = toupper(name[u]);
    }
    cout<<"Hello, "<< name;
    
    return 0;
}
