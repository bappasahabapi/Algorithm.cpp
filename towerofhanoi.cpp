#include<iostream>
using namespace std;

 ///ekta function define korlam
void toh(int n,int source,int aux, int dest)

{

    if(n==1)
    {
               ///  just pick kore place korbe
        cout<<"move the disk from tower no:"<<source<<"-->"<<dest<<endl;
        return ;
    }

    ///move all n-1 disk to aux

    toh(n-1, source ,dest,aux);
    toh(1, source, aux,dest);
    toh(n-1,aux, source,dest);

}

int main()
{
    int n;
    cout<<"enter the number of disk: ";
    cin>>n;
    toh(n,1,2,3);
    return 0;
}
