
#include <stdio.h>

int main()
{
    double price, gross, discount, gst;
    double original_total, corrected_total, net;
    int quantity, senior;
    int count = 0;

    double prices[] = {100, 500, 1000};
    int quantities[] = {2, 3, 2};
    int senior_status[] = {1, 1, 0};

    for (int i = 0; i < 3; i++)
    {
        price = prices[i];
        quantity = quantities[i];
        senior = senior_status[i];

        gross = price * quantity;

        /* Original calculation */
        original_total = gross
                       - gross * 15 / 100 * senior
                       + gross * 5 / 100;

        /* Corrected calculation */
        discount = senior ? gross * 0.15 : 0;

        gst = (gross - discount) * 0.05;

        corrected_total = gross - discount + gst;

        net = corrected_total > 1000
              ? corrected_total - 50
              : corrected_total;

        count = count + 1;

        printf("\nBILL %d\n", count);
        printf("Gross Amount: Rs. %.2f\n", gross);
        printf("Senior Citizen: %s\n",
               senior ? "Yes" : "No");
        printf("Original Total: Rs. %.2f\n",
               original_total);
        printf("Corrected Discount: Rs. %.2f\n",
               discount);
        printf("GST: Rs. %.2f\n", gst);
        printf("Corrected Total: Rs. %.2f\n",
               corrected_total);
        printf("Final Net Amount: Rs. %.2f\n", net);
    }

    return 0;
}
