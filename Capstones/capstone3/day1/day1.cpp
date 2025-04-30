#include<iostream>
#include<sys/sysinfo.h>
using namespace std;

void displayMemoryInfo(){
struct sysinfo info;
if(sysinfo(&info)==0){
cout<<"TOtal RAM:"<<info.totalram/(1024*1024)<<"MB\n";
cout<<"TOtal RAM:"<<info.totalram/(1024*1024*1024)<<"GB\n";
cout<<"TOtal RAM:"<<info.freeram/(1024*1024)<<"MB\n";
cout<<"TOtal RAM:"<<info.freeram/(1024*1024)<<"GB\n";
 }
}
int main(){
displayMemoryInfo();
return 0;
}


