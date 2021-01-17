#include<iostream>
using namespace std;
class Suvrodev
{
public:
    int Mid;
    int binary_search(int*,int,int,int);
};
int Suvrodev::binary_search(int* Data,int begin,int end,int search_n)
{
    if(begin<=end)
    {
        Mid=(begin+end)/2;
        if(search_n==Data[Mid])
        {
            cout<<search_n<<" found at "<<Mid<<" Number Position"<<endl;
            return -1;
        }
        else if(search_n<Data[Mid])
        {
            binary_search(Data,begin,Mid-1,search_n);
        }
        else
        {
            binary_search(Data,Mid+1,end,search_n);
        }
    }
}
int main()
{
    cout<<"Binary Search"<<endl;
    Suvrodev v;
    int begin=1,Limit,search_n;
    cout<<"Enter the Limit of Array:";
    cin>>Limit;
    int Data[Limit];
    cout<<"Enter Element from here"<<endl;
    for(int i=begin;i<=Limit;i++)
    {
        cout<<i<<". Enter Input:";
        cin>>Data[i];
    }
    cout<<"Enter Your search item:";
    cin>>search_n;
    int result_of=v.binary_search(Data,begin,Limit,search_n);
    if(result_of!=-1)
    {
        cout<<search_n<<" not found"<<endl;
    }

    return 0;
}
