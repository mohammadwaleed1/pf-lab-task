int main() {
int num, newNum, remainder, result=0;
printf("Enter a number: ");
scanf("%d", &num);
newNum = num;
while (newNum != 0) {
remainder = newNum % 10;
result += remainder * remainder * remainder;
newNum /= 10;  
}
if (result == num)
printf("%d is an Armstrong number.\n", num);
    else
    printf("%d is not an Armstrong number.\n", num);
    return 0;
}