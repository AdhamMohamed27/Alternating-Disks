//  CS2 Assignment 1 problem 6
//
//  Created by Adham Mohamed  on 11/06/2023.
//

#include <iostream>
using namespace std;

int Alternating_Disks(int A[],int n);
 
int main() {
    int n;
    cout << "Enter the value of n: ";
    cin >> n;
    int A[6]={0,1,0,1,0,1};
    int numMoves = Alternating_Disks(A,n);
    cout << "Number of moves required: " << numMoves << endl;

    return 0;
}

int Alternating_Disks(int A[],int n){
    int count=0;
    int temp;
    for (int i=0;i<n;i++){
        if (i%2==0){
            count=count+1;
            temp=A[i];
            A[i]=A[i+1];
            A[i+1]=temp;
        }
    }
    return  count;
}

