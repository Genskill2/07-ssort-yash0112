#include<stdio.h>
#include<cs50.h>

/*export LDLIBS=' -lcs50' */


void swap_max(int a[], int l, int p){

 int max=a[p],t;
 for(int i=p; i<l; i++){
  if(max<a[i])
    max=a[i];
 }
 /*printf("%d\n", max);
 printf("%d\n", a[p-1]);*/
 for(int i=0; i<l; i++){
  if(max==a[i]){
    t=a[p];
    a[p]=max;
    a[i]=t;
    }
   }
   }


void ssort(int a[], int l){
 for(int i=0; i<l; i++){
   swap_max(a, l, i);
  }
 }
 
 
   
   
int main(void){

  int n;
  n=get_int("Enter = ");
  int a[n];
  for(int i=0; i<n; i++){
  a[i]=get_int("Enter %d=", i+1);
  }
  int x;
 ssort(a,n);
  for(int i=0; i<n;i++){
   printf("%d, ", a[i]);
   }
   }
