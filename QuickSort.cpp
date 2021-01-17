#include<iostream>
using namespace std;
class Suvrodev
{
public:
    int temp;
    void quicksort(int*,int,int);
};
void Suvrodev::quicksort(int* Data,int begin, int end)
{
     int Pivot,Left,Right;
     if(begin<end)
     {
         Pivot=begin;
         Left=begin;
         Right=end;

         while(Left<Right)
         {
             while(Data[Left]<=Data[Pivot] && Left<end)
             {
                 Left++;
             }
             while(Data[Right]>Data[Pivot])
             {
                 Right--;
             }
             if(Left<Right)
             {
                 temp=Data[Left];
                 Data[Left]=Data[Right];
                 Data[Right]=temp;
             }
         }

         temp=Data[Right];
         Data[Right]=Data[Pivot];
         Data[Pivot]=temp;

         quicksort(Data,begin,Right-1);
         quicksort(Data,Right+1,end);
     }
}
int main()
{
    cout<<"Quick Sort"<<endl;
    Suvrodev v;
    int Limit,begin=1;
    cout<<"Enter the Limit of Array:";
    cin>>Limit;
    int Data[Limit];

    cout<<"Enter Element from here"<<endl;
    for(int i=begin;i<=Limit;i++)
    {
        cout<<i<<". Enter Input:";
        cin>>Data[i];
    }
    v.quicksort(Data,begin,Limit);

    cout<<"Sorted Element:";
    for(int i=begin;i<=Limit;i++)
    {
        cout<<Data[i]<<" ";
    }

    return 0;
}
