#include<stdio.h>         // Binary code to convert decimal number into the binary number
int main() {
	int n;
	scanf("%d", &n);           // Taking input of the decimal number
	int x=n;
	int q=x, r=0, count=0;
	
	while(q>1) {             // Finding the number of digits of binary number for decimal equivalent
		r = x%2;
		q = x/2;
		x = q;
		count++;
	}
	
	int x1=n, q1=x1, r1=0, i=0;
	int arr[count];
	
	while(q1>1) {             // Adding the binary number in the array
		r1 = x1%2;
		arr[i] = r1;
		//printf("%d ", arr[i]);
		q1 = x1/2;
		x1 = q1;
		i++;
	}
	
	arr[i] = q1;
	
	int temp, j = count+1;
	for(int k=0; k<(count+1)/2; k++) {         // Reversing the array so as to convert in the binary form
			temp = arr[k];
			arr[k] = arr[j-1];
			arr[j-1] = temp; 
			j-= 1;    
	}

	for(int k=0; k<count+1; k++) {                //Printing the number in the form of an array
	printf("%d ", arr[k] );
	}
	printf("\n");
	return 0;
}
