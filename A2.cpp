#include <iostream>
#include <pthread.h>
#include <stdlib.h>
#include <sched.h>

using namespace std;
int N;
struct args
{
  int* a;
  int first;
  int last;
};

void swap(int& a, int& b)
{
    int temp = a;
    a = b;
    b = temp;
}
void print(int a[], const int& N)
{
    for(int i = 0 ; i < N ; i++)
        cout << "array[" << i << "] = " << a[i] << endl;
}
int pivot(int a[], int first, int last)
{
  //int temp;
    int pivotElement = a[first];
     int  i = first+1;
     int j=last;

    while(1)
    {
    while(i < last && pivotElement >= a[i])
        i++;
    while(pivotElement < a[j])
        j--;
    if(i < j)
    swap(a[i],a[j]);
    else
     swap(a[first],a[j]);
    return(j);
    }


}

void* quickSort(void* arg)
{

    pthread_t id=pthread_self();
 pthread_t threads[2];
    args* ar=(args*)arg;
    int pivotElement;
   


    if(ar->first < ar->last)
    {

        pivotElement = pivot(ar->a, ar->first, ar->last);
         cout<<"Thread number "<<id<<" executing on core "<<sched_getcpu()<<" found pivotElement "<<ar->a[pivotElement]<<"\n";

        args array1;
        array1.a=new int[N];
        array1.a=ar->a;
        array1.first=ar->first;
        array1.last=pivotElement-1;
        args* x=&array1;
        int rc = pthread_create(&threads[0], NULL, &quickSort, (void *)x);
        if(rc!=0){
        cout<<"error";
        }

        args array2;
        array2.a=new int[N];
        array2.a=ar->a;
        array2.first=pivotElement+1;
        array2.last=ar->last;
        args* y=&array2;
        int rc1 = pthread_create(&threads[1], NULL, &quickSort, (void *)y);
          if(rc1!=0)
             {
	           cout<<"error";
              }
        pthread_join(threads[0], NULL);
        pthread_join(threads[1], NULL);
    }
}



int main()
{

    cout<<"\nEnter number of elements in array:  ";
    cin>>N;
    int test[N];
    cout<<"\nNow enter Array ELements:  \n";
    for(int i=0;i<N;i++)
    {cin>>test[i];}

    cout << "Before sorting : " << endl;
    print(test, N);

    args array;
    array.a=new int[N];
    array.a=test;
    array.first=0;
    array.last=N-1;

    quickSort(&array);

    cout << endl << endl << "After sorting : " << endl;
    print(test, N);

    return 0;
}

/*output


gitesh@Shree:~/cl1_code/codes/ass2$ g++ ass2.cpp -lpthread
gitesh@Shree:~/cl1_code/codes/ass2$ ./a.out

Enter number of elements in array:  5

Now enter Array ELements:  
66
8
45
56
2
Before sorting : 
array[0] = 66
array[1] = 8
array[2] = 45
array[3] = 56
array[4] = 2
Thread number 140426283292544 executing on core 0 found pivotElement 66
Thread number 140426266490624 executing on core 3 found pivotElement 2
Thread number 140426170332928 executing on core 3 found pivotElement 8
Thread number 140426161940224 executing on core 1 found pivotElement 45


After sorting : 
array[0] = 2
array[1] = 8
array[2] = 45
array[3] = 56
array[4] = 66
swati@Shree:~/cl1_code/codes/ass2$ 
*/
