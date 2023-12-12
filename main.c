#include "find_largest_and_sec_large_number.h"

int main()
{
    int ch;

    printf("Enter your choice: ");
    scanf("%d", &ch);

    switch(ch){
        case 0: printf("Find the largest and second largest number\n");
                find_largest_and_sec_large_number();
        break;
        default: printf("Invalid choice\n");
    }
}
