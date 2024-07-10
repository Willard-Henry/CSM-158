#include <iostream>
#include <cmath>

using namespace std;

void getinput (double data[],int vol){
    //Inputting the values into array

   cout<< "Enter the "<<vol <<" numbers you want to work with."<<endl;
   for (int i=0; i<vol; i++){
    cin>> data[i];
   }
}

double sigma (double data[], int vol){
    int sum = 0;
    //Summing all values in a given array
    for (int i=0; i<vol; i++){
        sum = sum + data[i];
    }
    return sum;
}

double mean (double sigma, int vol){
    //Finding the mean of the values given

    double xbar = sigma/vol;
    return xbar;
}

int main()
{
     //Finding the size of the array
     int vol;
   cout<< "Whats the number of numerical data you want to work with? ";
   cin>> vol;

   double data[vol];

   getinput(data, vol);
   sigma(data,vol);
   mean(sigma(data,vol),vol);

   //Finding the square of the deviations
   double devsq[vol];
   for(int i=0; i<vol; i++){
    devsq[i]= (data[i]-mean(sigma(data,vol),vol))*(data[i]-mean(sigma(data,vol),vol));
   }

   sigma(devsq, vol);

   //Printing the results
   double result = sqrt(sigma(devsq, vol)/vol);
   cout<< "The standard deviation of the values you entered is "<<result;

    return 0;
}
