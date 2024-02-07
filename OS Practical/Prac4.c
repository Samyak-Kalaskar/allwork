#include<stdio.h>
void  main()
{
    int bt[10]={0}, tat[10]={0}, at[10]={0}, wt[10]={0}, ct[10]={0};
    int n;
    float totalTAT=0, totalWT=0;

    printf("Enter Number of process");
    scanf("%d",&n);
    printf("Enter burst time for each process");

    for(int i=0;i<n;i++)
    {
        printf("\nBurst Time of process[%d]",i);
        scanf("%d",&bt[i]);
        printf("\n");
    }
    ct[0]=at[0]+bt[0];

    for(int i=1;i<n;i++)
    {
        ct[i]=ct[i-1]+bt[i];
    }
    for(int i;i<n;i++)
    {
        tat[i]=ct[i]-at[i];
        totalTAT=totalTAT+tat[i];
        wt[i]=tat[i]-bt[i];
        totalWT=totalWT+wt[i];
    }

    printf("SOLUTION: \n\n");
    printf("Process\t AT\t BT\t CT\t TAT\t WT\t\n\n");
    for(int i=0;i<n;i++)
    {
        printf("P%d\t %d\t %d\t %d\t %d\t %d\n",i,at[i],bt[i],ct[i],tat[i],wt[i]);
    }
    printf("Turn around time =%f\n",totalTAT/n);
    printf("Average WT =%f\n\n",totalWT/n);
}