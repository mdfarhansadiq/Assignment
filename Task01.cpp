///******* In the name of Allah *******///

#include<bits/stdc++.h>
using namespace std;

#define mxSize 1000

struct Table
{
    char id[30];
    char name[30];
    char address[30];
    char Covid19_TestReportDate[20];
    char previousDisease[20];
};

struct Table Array[mxSize];
int j = 0;

void Insert(char* id, char* name, char* address, char* Covid19_TestReportDate, char* previousDisease)
{
    strcpy(Array[j].id, id);
    strcpy(Array[j].name, name);
    strcpy(Array[j].address, address);
    strcpy(Array[j].Covid19_TestReportDate, Covid19_TestReportDate);
    strcpy(Array[j].previousDisease, previousDisease);
    j++;
}

void Search(char* id, char* name, char* previousDisease)
{
    for(int i=0; i<j; i++)
    {
        if(strcmp(Array[i].id, id)==0 && strcmp(Array[i].name, name)==0 && strcmp(Array[i].previousDisease, previousDisease)==0)
            printf("ID: %s and Name: %s\n and Previous_Disease: %s\n", Array[i].id, Array[i].name, Array[i].previousDisease);
    }
}

void Update(char* id, char* name, char* address, char* Covid19_TestReportDate)
{
    for(int i=0; i<j; i++)
    {
        if(strcmp(Array[i].id, id)==0 && strcmp(Array[i].name, name)==0)
        {
            strcpy(Array[i].address, address);
            strcpy(Array[i].Covid19_TestReportDate, Covid19_TestReportDate);
            printf("Address: %s and Covid19_TestReportDate: %s\n", Array[i].address, Array[i].Covid19_TestReportDate);
        }
    }
}

void Show()
{
    for(int i=0; i<j; i++)
        printf("ID: %s\n Name: %s\n Address: %s\n Covid-19_Report: %s\n Previous_Disease: %s\n", Array[i].id, Array[i].name, Array[i].address, Array[i].Covid19_TestReportDate, Array[i].previousDisease);
}

int main()
{
    int a, i;
    string in;
    char aa[30], bb[30], cc[30], dd[30], ee[30];
  
    for(i=1; i<=10; i++)
    {
        cout<<"Enter Your Choice: "<<endl;
        cin>>in;
        if(in=="insert")
        {
            cin>>aa>>bb>>cc>>dd>>ee;
            Insert(aa, bb, cc, dd, ee);
        }
        else if(in=="search")
        {
            if(j)
            {
                cin>>aa>>bb>>cc;
                cout<<"Search = ", Search(aa, bb, cc);
            }
            else
                cout<<"Please Insert Data"<<endl;
        }
        else if(in=="update")
        {
            if(j)
            {
                cin>>aa>>bb>>cc>>dd;
                cout<<"Update = ", Update(aa,bb,cc,dd);
            }
            else
                cout<<"Please Insert Data"<<endl;
        }
        else if(in=="show")
        {
            if(j)
                Show();
            else
                cout<<"Please Insert Date"<<endl;
        }
    }
  
    return 0;
}
