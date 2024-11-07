//code to calculate net pay
//author CT101/G/22039/24
#include <stdio.h>

int main() {
    float hours, wage, grossPay, taxes, netPay;
    
    // user input
    printf("Enter the number of hours worked in a week: ");
    scanf("%f", &hours);
    printf("Enter the hourly wage: ");
    scanf("%f", &wage);

    // Calculate gross pay
    if (hours > 40) {
        grossPay = (40 * wage) + ((hours - 40) * (wage * 1.5));
    } else {
        grossPay = hours * wage;
    }

    // Calculate taxes
    if (grossPay <= 600) {
        taxes = grossPay * 0.15;
    } else {
        taxes = (600 * 0.15) + ((grossPay - 600) * 0.20);
    }

    // Calculate pay
    netPay = grossPay - taxes;

    // Print results
    printf("Gross Pay: $%.2f\n", grossPay);
    printf("Taxes: $%.2f\n", taxes);
    printf("Net Pay: $%.2f\n", netPay);

    return 0;
}
