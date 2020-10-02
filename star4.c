/*here's a code to print the pattern
Hey there! Enter any integer value to print star pattern
8
* * * * * * * * 
 * * * * * * * 
  * * * * * * 
   * * * * * 
    * * * * 
     * * * 
      * * 
       * 
*/

#include<stdio.h>

int main(){
    int n;
    printf("Hey there! Enter any integer value to print star pattern\n");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (j>=i)
            {
                printf("* ");
            }
            else
            {
                printf(" ");
            }
            
            
        }
        
    printf("\n");
    }
    
    return 0;
}
