#include<stdlib.h>
#include<stdio.h>

void subs(int n, int k);

int main(int argc, char **argv)
{
	if(argc != 3) return 1;
	int n, k;
	
	n = atoi(argv[1]); k = atoi(argv[2]);
	subs(n, k);
	
	return 0;
}

void subs(int n, int k)
{
	int *p = (int *)malloc(sizeof(int)*k);
	int i, j, r;
	
	for(i = 0; i < k; ++i) p[i] = i; // initialize our ``set'' 
	// the algorithm
	while(1)
	 {	// visit the current k-subset
		for(i = 0; i < k; ++i)
			printf("%d ", p[i]+1);
		printf("\n");
		
		if(p[0] == n-k) break; // if this is the last k-subset, we are done 
		
		for(i = k-1; i >= 0 && p[i]+k-i == n; --i); // find the right element 
		r = p[i]; ++p[i]; j = 2; // exchange them 
		for(++i; i < k; ++i, ++j) p[i] = r+j; // move them 
	 }
	free(p);
}

