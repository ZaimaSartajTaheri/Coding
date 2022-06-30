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
    FILE *inputFile;
FILE *outputFile;
inputFile=fopen("input.txt","r");

if(inputFile==NULL){
    printf("Not Found");
    return 0;
}
outputFile=fopen("output.txt","w");

     int n;
     fscanf(inputFile,"%d",&n);
     struct Student students[n];
     struct Unique_Student unique_student[n];
     int k=0;
     for(int i=0;i<n;i++){
        fscanf(inputFile,"%s %d %d",&students[i].name,&students[i].id,&students[i].marks);
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

     for(int i=0;i<k-1;i++){
        for(int j=i+1;j<k;j++){
            if(unique_student[i].total<unique_student[j].total){}
            struct Unique_Student tmp=unique_student[i];
            unique_student[i]=unique_student[j];
            unique_student[j]=tmp;
        }
     }
      for(int i=0;i<k;i++){
        fprintf(outputFile,"\n%s %d %d\n",unique_student[i].name,unique_student[i].id,unique_student[i].total);
      }
     return 0;
 }
