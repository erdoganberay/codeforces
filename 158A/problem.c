#include <stdio.h>

int main (){
	int n, k;
	int res = 0;
	int scores[256];
	scanf("%d %d",&n,&k);
	for (int i = 0; i < n; i++){
		fscanf(stdin, " %d", &scores[i]);
	}
	for (int j = 0; j < n; j++){
		if (scores[j] >= scores[k-1] && scores[j] > 0)
			res++;
	}
	
	printf("%d",res);
	return 0;
}
