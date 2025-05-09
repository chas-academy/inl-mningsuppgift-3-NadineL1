#include <stdio.h>
#include <math.h>

float calculate_hypotenuse(float kat_a, float kat_b)
{
    float pow2 = pow(kat_a, 2)+ pow(kat_b, 2);
    float hypotenuse_c = sqrt(pow2);
    return hypotenuse_c;
}

// This is where you add the function calculate_hypotenuse

int main() {
    float a = 3.0;
    float b = 4.0;

    printf("%.2f\n", calculate_hypotenuse(a, b));  // Expected output: 5.00

    //Changing the values
    a = 5.0;
    b = 12.0;

    printf("%.2f\n", calculate_hypotenuse(a, b));  // Expected output: 13.00

    return 0;
}