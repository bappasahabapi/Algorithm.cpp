#include<iostream>

using namespace std;

int main()
{
    int n_process ,bt[20], wt[20], tat[20], avwt=0, avtat=0,avct =0, i, j;
    int ct[20];
    cout<<"Enter total number of processes(maximum 20):";
    cin>>n_process;

    cout<<"\nEnter Process Burst Time\n";
    for(i=0; i<n_process ;i++)
    {
        cout<<"Process["<<i+1<<"]:";
        cin>>bt[i];
    }

    wt[0]=0;    //waiting time for first process is 0

    //calculating waiting time
    for(i=1;i<n_process;i++)
    {
        wt[i]=0;

        for(j=0; j<i; j++)
            wt[i]+=bt[j];
    }

    //compleating time
    for(i=0; i<n_process; i++)
    {
        ct[i]= bt[i];
         for(j=0; j<i; j++)
            ct[i]+=bt[j];

    }

    cout<<"\nProcess\t\tBurst Time\tWaiting Time\tTurnaround Time\tCompleating Time\t ";

    //calculating turnaround time
    for(i=0; i<n_process; i++)
    {
        tat[i]=bt[i]+wt[i];
        avwt+=wt[i];
        avtat+=tat[i];
        avct+=ct[i];
        cout<<"\nP["<<i+1<<"]"<<"\t\t"<<bt[i]<<"\t\t"<<wt[i]<<"\t\t"<<tat[i]<<"\t\t"<<ct[i];
    }

    avwt/=i;
    avtat/=i;
    cout<<"\n\nAverage Waiting Time:"<<avwt;
    cout<<"\nAverage Turnaround Time:"<<avtat;
    cout<<"\nAverage Compleating Time:"<<avct<<endl;

    return 0;
}

