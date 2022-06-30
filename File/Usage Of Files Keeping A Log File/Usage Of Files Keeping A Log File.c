#include<stdio.h>
int main(){
FILE *logFile=fopen("log.txt","a");
FILE *inputFile=fopen("habijabi.txt","r");
if(inputFile==NULL){
    fprintf(logFile,"Input file not found T 3:022pm\n");
    return 0;
}
return 0;
}
// this a mode keeps all previous datas doesn;t delete previous data like w mode
