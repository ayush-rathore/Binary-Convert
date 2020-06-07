#include<stdio.h>
int main() {
	int n;
	scanf("%d", &n);
	int x=n;
	int q=x, r=0, count=0;
	
	while(q>1) {
		r = x%2;
		q = x/2;
		x = q;
		count++;
	}
	
	int x1=n, q1=x1, r1=0, i=0;
	int arr[count];
	
	while(q1>1) {
		r1 = x1%2;
		arr[i] = r1;
		//printf("%d ", arr[i]);
		q1 = x1/2;
		x1 = q1;
		i++;
	}
	
	arr[i] = q1;
	//printf("%d\n", arr[i]);
	
	int temp, j = count+1;
	for(int k=0; k<(count+1)/2; k++) {
			temp = arr[k];
			arr[k] = arr[j-1];
			arr[j-1] = temp; 
			j-= 1;    
	}

	for(int k=0; k<count+1; k++) {
	printf("%d ", arr[k] );
	}
	printf("\n");
	return 0;
}
