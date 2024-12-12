#include <stdio.h>
int main()
{
 int *p, n, ele, ch, i, pos; // p is pointer to create a dynamic array
 printf("Enter number of elements to create an Array:\t");
 scanf("%d", &n);
 p = malloc(n * sizeof(int)); // use malloc to create a Dynamic array
 printf("Dynamic Array Created.\n");
 printf("Enter %d elements\n ", n);
 for (i = 0; i < n; i++) // Read n the elements to array
 {
 scanf("%d", &p[i]);
 }
 while (1)
 {
 printf("\n 1.Insert\n 2.delete\n 3.display \n 4.Exit\n Enter your choice:\t");
 scanf("%d", &ch); 
 p[i] = p[i - 1];
 }
 p[pos] = ele; // insert the new element at specied position
 break;
 case 2:
 printf("Enter Position(0 to %d) to delete:\t", n - 1);
 scanf("%d", &pos);
 for (i = pos + 1; i < n; i++) // delete the position element by moving
next element of pos to prevvious pos
 {
 p[i - 1] = p[i];
 }
 n = n - 1; // Update the count total elements
 break;
 case 3:
 printf("\n Array Elements Are:\n");
 for (i = 0; i < n; i++) 
 {
 printf("%d\t", p[i]);
 }
 break;
 case 4:
 exit(0);
 }
 }
 return 0;
} 
