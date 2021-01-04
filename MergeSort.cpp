#include<iostream>
using namespace std;
class Suvrodev
{
public:
    int DataHelper[100];
    void mergesort(int[],int,int);
    void merge(int[],int,int,int);

};
void Suvrodev::mergesort(int Data[],int Low,int High)
{
    int Mid;
    if(Low<High)
    {
        Mid=(Low+High)/2;
        mergesort(Data,Low,Mid);
        mergesort(Data,Mid+1,High);

        merge(Data,Low,Mid,High);
    }
}
void Suvrodev::merge(int Data[],int Low,int Mid, int High)
{
    int sort=Low;
    int Helpersort=Low;
    int Right=Mid+1;
    while(Helpersort<=Mid && Right<=High)
    {
        if(Data[Helpersort]<=Data[Right])
        {
            DataHelper[sort]=Data[Helpersort];
            Helpersort++;
        }
        else
        {
            DataHelper[sort]=Data[Right];
            Right++;
        }
        sort++;
    }

    if(Helpersort>Mid)
    {
        for(int k=Right;k<=High;k++)
        {
            DataHelper[sort]=Data[k];
            sort++;
        }
    }
    else
    {
        for(int k=Helpersort;k<=Mid;k++)
        {
            DataHelper[sort]=Data[k];
            sort++;
        }
    }
    for(int k=Low;k<=High;k++)
    {
        Data[k]=DataHelper[k];
    }

}
int main()
{
    Suvrodev v;
    int Low=1,Limit;
    cout<<"Enter the Limit of Array:";
    cin>>Limit;
    int Data[Limit];
    cout<<"Input Data from Here"<<endl;
    for(int i=Low;i<=Limit;i++)
    {
        cout<<i<<". Input Data:";
        cin>>Data[i];
    }
    v.mergesort(Data,Low,Limit);
    cout<<"Sorted Data: ";
    for(int i=Low;i<=Limit;i++)
    {
        cout<<Data[i]<<" ";
    }
    return 0;
}

