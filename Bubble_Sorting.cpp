//Bubble Sorting
//Author Onuvob

#include<iostream>
using namespace std;

int main()
{
    int numberArray[10] = {32, 1, 53, 23, 11, 342, 12, 44, 76, 90};

    int sizeArray = sizeof(numberArray)/sizeof(numberArray[0]);

    for(int i=0; i<sizeArray; i++)
    {
        int flag = 0;

        for(int j=0; j<sizeArray - 1; j++)
        {
            if(numberArray[j] > numberArray[j+1])
            {
                int temp = numberArray[j];
                numberArray[j] = numberArray[j+1];
                numberArray[j+1] = temp;
                flag = 1;
            }
        }
        if(flag == 0) //if the list has already sorted values then process will break;
            break;
    }

    for(int i=0; i<sizeArray; i++)
        cout<<numberArray[i]<<" ";

    return 0;
}
