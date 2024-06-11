#include <iostream>

using namespace std;

int main()
{
   int number[]={1,2,3,4,5};
   cout<< number[3]<<endl<<endl;

   int dimnum[5][5]= {
       {1,2,3,4,5},
       {1,3,5,7,9},
       {2,4,6,8,10},
       {2,3,5,7,11},
       {1,2,3,6,12}};

   for(int x=0;x<5;x++){

    for(int i=0;i<5;i++){

    cout<<dimnum[x][i]<<"   ";

    }
    cout<<endl;
   }

    return 0;
}
