#include <stdio.h>
	
	
int sumisMultiple(int n){
int ans;
int i;

for(i=0; i<n; i++){
	if(i % 5 == 0 || i % 3 == 0){
		ans = ans + i;
	}
}

	return ans;
}	
	
	
int main(){
	

	printf("%d", sumisMultiple(1000));
	return 0;
}

