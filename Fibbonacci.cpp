/*

Computes and prints out the first 20 fibonnacci numbers

Written 23 November 2019
by Sackey Freshia

*/
#include <cstdio>

int arr [20] =  {0,1};
int main(){

for(int i=1;i<=18;i++){
    arr[i+1]= arr[i]+arr[i-1];
}

int array_length = sizeof(arr)/sizeof(arr[0]);
printf("The first 20 fibonnacci nummers are: ");
for(int i=0; i<array_length;i++){
printf("%d ,",arr[i]);
}

while(1){
}
return 0;
}
