#include <stdio.h>

int main() {
    int n, i;

    printf("Enter the limit: ");
    scanf("%d", &n);

    printf("\nNumber\tWord\n");
    printf("-----------------\n");

    for (i = 1; i <= n; i++) {
        printf("%d\t", i);

        switch(i) {
        	if(i%2==0)
        	{
		
            case 1: printf("One"); break;
        }
            else
		{
		
			case 2: printf("Two"); break;
       }
            default: printf("—");  // dash for numbers > 10
        }
    

        printf("\n");

}

    return 0;
}