
#include<stdio.h>
 void insertion(int a[],int *n){
 int i,j,temp;
 for(i=1;i<*n;i++){
 temp=a[i];
 for(j=i-1;temp<a[j] && j>=0;j--){
 a[j+1]=a[j];
 }
 a[j+1]=temp;
 }
 }
 int remove_mid(int a[],int *n){
 int mid=*n/2;
 if(*n%2==0){
 mid=(*n/2)-1;
 }
 int remove=a[mid];
 for(int i=mid;i<(*n-1);i++){
 a[i]=a[i+1];
 }
 (*n)--;
 return remove;
 }
 int main(){
 int a[100],n=0;
 printf("Enter array elements:\n");
 while(1){
 int N;
 scanf("%d",&N);
 if(N==0){
 break;
 }
 else if(N==-1){
 if(n!=0){
 insertion(a,&n);
 int m=remove_mid(a,&n);
 printf("Remove mid:%d\n",m);
 }
 }
 else{
a[n++]=N;
 }
 }
 return 0;
 }
