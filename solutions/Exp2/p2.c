/*
Problem Description2:
When the wind blows in cold weather, the air feels even colder than it actually is because the
movement of the air increases the rate of cooling for warm objects, like people. This effect is known as wind
chill.
In 2016, Jammu and Kashmir, Delhi, and Himachal Pradesh adopted the following formula for computing the
wind chill index. Within the formula, Ta is the air temperature in degrees celsius and V is the wind speed in
kilometers per hour.
Constraint:
•
Ta and v are float values.
Formulation to find wind chill index is:
WCI = 13.12 + 0.6215*Ta - 11.37*V0.16 + 0.3965*Ta* V0.16
*/

#include<stdio.h>

int main() {
    float Ta, V;
    scanf("%f %f", &Ta, &V);
    float result = 13.12 + 0.6215*Ta - 11.37*V*0.16 + 0.3965*Ta*V*0.16;
    printf("%f", result);
    return 0;
}

/*
OUTPUT:
13 44
-22.557619
*/