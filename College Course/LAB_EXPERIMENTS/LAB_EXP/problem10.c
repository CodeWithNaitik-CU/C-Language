//BUILD A SEARCH ENGINE USING BINARY SEARCH ON AN ARRAY OF BOOK IDs
#include<stdio.h>

int main() {
    int n, i, key, low, high, mid;
    
    printf("Enter number of books: ");
    scanf("%d", &n);

    int books[n];
    printf("Enter book IDs in sorted order:\n");
    for(i = 0; i < n; i++)
        scanf("%d", &books[i]);

    printf("Enter book ID to search: ");
    scanf("%d", &key);

    low = 0;
    high = n - 1;
    int found = 0;

    while(low <= high) {
        mid = (low + high) / 2;
        if(books[mid] == key) {
            found = 1;
            break;
        } else if(books[mid] < key) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    if(found)
        printf("Book ID %d found at position %d.\n", key, mid + 1);
    else
        printf("Book ID %d not found.\n", key);

    return 0;
}
