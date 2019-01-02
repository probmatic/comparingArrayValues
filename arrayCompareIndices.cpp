/*probmatic*/
/*Compare if two arrays have the same element value in a specific index in the array*/
/*!!!ORDER MATTERS!!!*/

#include <iostream>

using namespace std;
int arrayCompare (int sizeA, int sizeB);

int main ()
{
  int n = 0;
  int a[6] = { 1, 12, 10, 4, 5, 6 };
  int b[5] = { 1, 2, 3, 4, 5 };

  int sizeA = (sizeof (a) / sizeof (*a)); //Need to get size of array by dividing the bits by the size of the array
  int sizeB = (sizeof (b) / sizeof (*b));

  n = arrayCompare (sizeA, sizeB); //Redefine n to be the value of this function

  for (int j = 0; j < n; j++)
    {
      if (a[j] == b[j])
	    {
	    cout << "Index " << j <<" are identical in both arrays." << endl;
	    }

       else
	    {
	      cout << "Index " << j << " are not identical in both arrays." << endl;
	    }
    }
  system ("pause");
  return 0;
}

int arrayCompare (int sizeA, int sizeB) //To get the larger array value so all the indices are compared
{
  int n = 0;
  
  if (sizeB > sizeA)
    n = sizeB;
  else
    n = sizeA;

  return n; //this will return a value of the larger array size. In this specific case, it will be 6
}
