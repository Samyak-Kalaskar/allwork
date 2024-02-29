#include<stdio.h>
void main()
{
    int bt[10]={0},tat[10]={0},at[10]={0},wt[10]={0},ct[10]={0};
    int i,n,I,j,temp,p[10]={0},pp[10]={0};
    float totalTAT=0,totalWT=0;
    printf("Enter Number of Process : ");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        printf("Enter Process name,arrival time & burst Time : ");
        scanf("%d %d %d",&p[i],&bt[i],&pp[i]);
    }

    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(pp[i]<pp[j]){
                temp=p[j];
                p[j]=p[i];
                p[i]=temp;

                temp=at[j];
                at[j]=at[i];
                at[i]=temp;

                temp=bt[j];
                bt[j]=bt[i];
                bt[i]=temp;

                temp=pp[j];
                pp[j]=pp[i];
                pp[i]=temp;


            }
        }
    }
    ct[0]=at[0]+bt[0];
    for(i=1;i<n;i++)
    {
        ct[i]=ct[i-1]+bt[i];
    }

    for(i=0;i<n;i++)
    {
        tat[i]=ct[i]-at[i];
        totalTAT=totalTAT+tat[i];

    }

    for(i=0;i<n;i++)
    {
        wt[i]=tat[i]-bt[i];
        totalWT=totalWT+wt[i];
    }
    printf("Solution :\n\n");
    printf("Pro  AT  BT  priority  CT  TAT  WT\t\n\n");
    for(i=0;i<n;i++)
    {
        printf("P%d\t %d\t %d\t %d\t %d\t %d\t %d\n",p[i],at[i],bt[i],pp[i],ct[i],tat[i],wt[i]);

    }
    printf("Average Turn around Time = %f\n",totalTAT/n);
    printf("Average WT =%f\n\n",totalWT/n);

}