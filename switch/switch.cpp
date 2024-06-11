#include <iostream>
using namespace std;

int main(){

char grade;
cout<< "Welcome to Room Q" <<endl;
cout<< "Enter your grade for CSM 158: ";
cin>> grade;

switch (grade)
{
case 'A':
    /* code */
    cout<< "Your grade is within the range of 70-100\nYou have qualified for the interview."
    break;

case 'B':
    /* code */
    cout<< "Your grade is within the range of 60-69\nYou have qualified for the interview."
    break;

case 'C':
    /* code */
    cout<< "Your grade is within the range of 50-59\nYou have qualified for the interview."
    break;

case 'D':
    /* code */
    cout<< "Your grade is within the range of 40-49\nYou have qualified for the interview."
    break;

case 'F':
    /* code */
    cout<< "Your grade is within the range of 0-39\nYou have NOT qualified for the interview."
    break;

default:
    cout<< "Invalid Input. Please try again."
    break;
}

return 0;
}