#include <bits/stdc++.h>

using namespace std;
int main(){
long array[20];
long NUMBERS;

cout << "How many numbers ? : ";
cin >> NUMBERS;
long sum=0;
for (int i = 0; i < NUMBERS;i++){

    cout << "Input number " << (i+1) << " : ";
    cin >> array[i];    
}

cout << "Calculate Sum" << endl;
for (int i = 0; i < NUMBERS;i++){
    sum = sum + array[i];
}

cout << "Sum is : " << sum << endl;}