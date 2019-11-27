/*

Sorts the array (arr in the code) using Bubble Sort algorithm

Written 23 November 2019
by Sackey Freshia

*/

#include <cstdio>
int main() {

		int arr[]={6,8,3,4,1,8,6,13,5,24,7};
		int temp;
        int array_length = sizeof(arr)/sizeof(arr[0]);
		int k = array_length;
		while (k>=1){
		   for(int x = 0; x<=k;x++){
			if(arr[x]>arr[x+1]){
				//swap
				temp=arr[x];
				arr[x]=arr[x+1];
				arr[x+1]=temp;
				x++;
			}
			
		}
		k = k - 1;
		}

		printf("The sorted array is: ");
		for(int i=0; i<array_length;i++){
			printf("%d,",arr[i]);
		}
        while(1){
            
        }
    return 0;
	}


