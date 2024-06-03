#include <iostream>

using namespace std;

int main()
{
    int score;
    cout << "Enter Your Score: " ;
    cin >> score;

    cout<< "Your grade is ";

    if (score>=70){
        cout <<"A";
    }
    else if (score>=60){
        cout<< "B";
    }
    else if (score>=50){
        cout<< "C";
    }
    else if (score>=45){
        cout<< "D";
    }
    else if (score>=40){
        cout<< "E";
    }
    else{
        cout<< "F";
    }

    return 0;
}
