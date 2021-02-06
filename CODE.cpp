/* Question-2 To find number of occurrences of a number */

#include <iostream>
using namespace std;

int Number_Of_Occurrences (int A[], int X,int opt); // function which will have BinarySearch operation and find the first and last occurrence of the number you want


int Number_Of_Occurrences  (int A[], int X,int opt) // function starts
{
    int r,m,l,result=-1;
    l=0; // left index value
    r=5; // right index value
    while(l<=r) // condition
    {
        m=(l+r)/2;
        if(A[m] == X)
        {
            result=m;
            if(opt == 1) // for finding first occurrence of a particular number
            {
            r=m-1;
            }
            else if(opt == 2) // for finding second occurrence of a particular number
            {
                l=m+1;
            }
        }
        else if(A[m] < X)
        {
            l=m+1;
        }
        else
        {
            r=m-1;
        }
       
    }
    return result; // returning the result
}

int main()
{
    int a[6]={1,2,2,3,3,3},k,ans1,ans2,occur;
    cout<<"Enter the number whose occurrences you want to search"<<endl;
    cin>>k;
    cout<<"1-> First Occurrence and 2-> Second Occurrence";
    ans1= Number_Of_Occurrences(a,k,1); // passing the value to the function with value 1 for opt to perform first occurrence
    ans2= Number_Of_Occurrences(a,k,2); // passing the value to the function with value 2 for opt to perform Last occurrence
    
    if(ans1 == -1)
    {
        cout<<"Element not present"<<endl;
        
    }
    else
    {
        occur=(ans2-ans1)+1;
        cout<<"The Occurrence of the number  "<<k<<" = "<<occur;
    }
    return 0;
} // program ends