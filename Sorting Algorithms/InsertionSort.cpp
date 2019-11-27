/*

Sorts the array (arr in the code) using Insertion Sort algorithm

Written 23 November 2019
by Sackey Freshia

*/

#include <cstdio>

	int main() {
		int arr []={19,50,6,33,2};
        int array_length = sizeof(arr)/sizeof(arr[0]);
		for(int j=1; j<array_length;j++){
			int key=arr[j];
			 int i=j-1;
					while(i>=0 && arr[i]>key){
					arr[i+1]=arr[i];
					i--;
					arr[i+1]=key;
					}
				
			}
		
		for(int x=0;x<array_length;x++){
			printf("%d ,",arr[x]);
		}
        while(1){

        }
	}


