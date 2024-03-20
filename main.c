/*
name : Maharshi Bhatt
date : 19/03/2024
aim  : Attendance Management System
*/
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct Student {
    char name[20];
    int rollNo;
    int present;
    
};
int main(){
    int n;
    printf("Enter Number of Student : ");
    scanf("%d",&n);
    struct Student s[n];
    //Set Data of Student 
    for(int i = 0;i<n;i++)
    {
    printf("Enter Name : ");
    scanf("%s",s[i].name);
    fflush(stdin);
    printf("Enter Roll Number : ");
    scanf("%d",&s[i].rollNo);   
    }

    //conduct Attendace
    for(int i = 0;i<n;i++)
    {
    char p;
    printf("Conducting Attendance.........\n");
    printf("Roll No. %d is (P/A) : ",s[i].rollNo);
    fflush(stdin);
    scanf("%c",&p);
    if(p=='p' || p=='P'){
        s[i].present = 1;
    }
    else{
        s[i].present = 0;
    }
    }
    //display data
    for(int i = 0;i<n;i++){
        printf("Name : %s\n",s[i].name);
        printf("Roll No : %d\n",s[i].rollNo);
        if(s[i].present==1){
        printf(" present \n");
        }
        else{
        printf("Absent\n");
        }
    }
    return 0;
}
