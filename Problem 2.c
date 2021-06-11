#include <stdio.h>
	
	
int sumFibonacci(int n){
int i, t1, t2, next, ans;
ans = 0;
t1 = 0;
t2 = 1;

while(next < n){   
	next = t1 + t2;
	
	if (next > n){  //stops the loop when it realizes that next is already bigger than n and returns the answer
		return ans;
	}
	
	 if(next % 2 == 0){  //checks if the next number is even and adds it to ans
    		ans = ans + next;
     	}
	
	t1 = t2;  //sets up for next fibonacci number
	t2 = next;
}
}	
	
	
int main(){
	

	printf("%d", sumFibonacci(4000000));
	return 0;
}

