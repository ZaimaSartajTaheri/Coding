#include<stdio.h>
#include<stdbool.h>
#include<string.h>
struct Student{
char name[100];
int id;
int marks;

};

struct Unique_Student{
char name[100];
int id;
int total;
};
int main(){
     int n;
     scanf("%d",&n);
     struct Student students[n];
     struct Unique_Student unique_student[n];
     int k=0;
     for(int i=0;i<n;i++){
        scanf("%s %d %d",&students[i].name,&students[i].id,&students[i].marks);
        bool found=false;

        for(int j=0;j<k;j++){
            if(unique_student[j].id==students[i].id){
                unique_student[j].total+=students[i].marks;
                found=true;
            }
        }
        if(found==false){

            strcpy(unique_student[k].name,students[i].name);
            unique_student[k].id=students[i].id;
            unique_student[k].total=students[i].marks;
            k++;
        }

     }
      for(int i=0;i<k;i++){
        printf("\n%s %d %d\n",unique_student[i].name,unique_student[i].id,unique_student[i].total);
      }
     return 0;
 }
