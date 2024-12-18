#include <stdio.h>

typedef struct {
    char partNumber[20];
    char partDescription[50];
    int quantity;
    float pricePerItem;
} Invoice;

int main() {
    Invoice invoice = {"12345", "Hammer", 10, 15.5};  

    if (invoice.quantity <= 0) invoice.quantity = 0;
    if (invoice.pricePerItem <= 0) invoice.pricePerItem = 0;

    float totalAmount = invoice.quantity * invoice.pricePerItem;
    printf("Part Number: %s\n", invoice.partNumber);
    printf("Part Description: %s\n", invoice.partDescription);
    printf("Quantity: %d\n", invoice.quantity);
    printf("Price per Item: %.2f\n", invoice.pricePerItem);
    printf("Invoice Amount: %.2f\n", totalAmount);

    return 0;
}
