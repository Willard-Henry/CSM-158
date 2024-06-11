#include <iostream>

using namespace std;

int main()
{

    string shortcode;
    int option1;
    int option2;

    cout<< "########## : Welcome to Mini MoMo : #########"<<endl;
    cout<< "Please Enter Your Shortcode: ";
    cin>> shortcode;

    if(shortcode == "*170#"){

        cout<< "\n1. Transfer Money\n2. Pay & Bill\n3. Airtime & Bundles\n4. Allow Cash-Out\n5. Your Account"<<endl;
        cout<< "|_________| : ";
        cin>>option1;

        if (option1 == 1){
            cout<< "\n########## Transfer Money ###########\n1. To MoMo User\n2. To Other Network\n3. To Bank";
        }

        else if (option1 == 2){
            cout<< "\n######### Pay Bill ###########\n1. Pay Electricity Bill\n2. Pay Water Bill\n3. Pay For Other Services";
        }

        else if (option1 == 3){
            cout<< "\n######### Airtime & Bundles ###########\n1. Airtime\n2. Data Bundle\n3. Mashup";
        }

        else if (option1 == 4){
            cout<< "\n######### Allow Cashout ###########\n1. Yes\n2. No\n0. Back";
        }

        else {
            cout<< "I have not programmed this part yet"<<endl;
        }
    }
    else{
        cout<< "Invalid Shortcode";
    };
    return 0;
}
