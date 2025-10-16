//MANAGE A LIST OF 10 ITEMS IN AN ARRAY AND PERFORM INSERT,DISPLAY AND DISPLAY OPERATIONS
#include<stdio.h>

int main() {
    int arr[10], n = 0, choice, pos, item;

    while (1) {
        printf("\n----- MENU -----\n");
        printf("1. Insert Item\n");
        printf("2. Delete Item\n");
        printf("3. Display Items\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                if (n == 10)
                    printf("List is full! Cannot insert more items.\n");
                else {
                    printf("Enter item to insert: ");
                    scanf("%d", &item);
                    arr[n] = item;
                    n++;
                    printf("Item inserted successfully.\n");
                }
                break;

            case 2:
                if (n == 0)
                    printf("List is empty! Nothing to delete.\n");
                else {
                    printf("Enter position to delete (1 to %d): ", n);
                    scanf("%d", &pos);
                    if (pos < 1 || pos > n)
                        printf("Invalid position!\n");
                    else {
                        for (int i = pos - 1; i < n - 1; i++)
                            arr[i] = arr[i + 1];
                        n--;
                        printf("Item deleted successfully.\n");
                    }
                }
                break;

            case 3:
                if (n == 0)
                    printf("List is empty!\n");
                else {
                    printf("Items in the list: ");
                    for (int i = 0; i < n; i++)
                        printf("%d ", arr[i]);
                    printf("\n");
                }
                break;

            case 4:
                return 0;

            default:
                printf("Invalid choice! Try again.\n");
        }
    }

    return 0;
}
