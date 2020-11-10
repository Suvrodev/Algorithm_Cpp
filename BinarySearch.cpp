#include<iostream>
using namespace std;
class Suvrodev
{
public:

    int med;
    ///void input();
    int Binary_Search(int,int[],int,int);
};

int Suvrodev::Binary_Search(int end1,int Array[],int item,int beg)
{
    if(beg<=end1)
    {
        med=(beg+end1)/2;
    if(item==Array[med])
    {
        cout<<"Number found At "<<med<<" Number position";
        return -1;
    }
    if(item<=Array[med])
    {
        end1=med-1;
        Binary_Search(end1,Array,item,beg);
    }
    else
    {
        beg=med+1;
        Binary_Search(end1,Array,item,beg);
    }
    }

    ///return -1;
}
int main()
{
    int Array[100],i,item,end1,med,beg;
    Suvrodev s;
    int return_Type;
    cout<<"Enter Limit=";
    cin>>end1;
    cout<<"INPUT HERE"<<endl;
    for(i=1;i<=end1;i++)
    {
       cout<<i<<". Input=";
       cin>>Array[i];
    }

    cout<<"Enter Your Search item=";
    cin>>item;
    beg=1;


    return_Type=s.Binary_Search(end1,Array,item,beg);
    if(return_Type!=-1)
    {
        cout<<"Not Found";
    }
}

