#include<stdio.h>
#include<cs50.h>

void swap_max(int a[], int l, int p){

 int max=a[p-1],t;
 for(int i=p-1; i<l; i++){
  if(max<a[i])
    max=a[i];
 }
 for(int i=0; i<l; i++){
  if(max==a[i]){
    t=a[p-1];
    a[p-1]=max;
    a[i]=t;
    }
   }
   }


void ssort(int a[], int l){
 for(int i=0; i<l; i++){
   swap_max(a, l, i);
  }
 }
 
   
