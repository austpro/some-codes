#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k,n,pr[50],frame[50],fsize,avail=0,count1=0;
    cout<<"Enter the number of pages:";
    cin>>n;
    cout<<"Enter the page requests:";
    for(i=1;i<=n;i++){
        cin>>pr[i];
    }
    cout<<"Enter the frame size: ";
    cin>>fsize;

    for(i=0;i<fsize;i++){
        frame[i]=-1;
    }
    j=0;
    cout<<"Page Request\t\tPage frames\n";
    for(i=1;i<=n;i++){
        printf("\t%d\t\t",pr[i]);
        avail=0;
        for(k=0;k<fsize;k++){
            if(frame[k]==pr[i])
                avail=1;
        }
        if(avail==0){
            frame[j]=pr[i];
            count1++;
            j=(j+1)%fsize;
            for(k=0;k<fsize;k++){
                printf("%d\t",frame[k]);
            }

        }
        printf("\n");

    }
    printf("Page fault is %d",count1);
}
