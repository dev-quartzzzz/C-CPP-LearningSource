#include <stdio.h>
#include <string.h>

struct HousePrice
{
    float size;
    int bedroom;
    int bathroom;
    char renovated;
    float price;
};

struct HousePrice houses[3] = {
    {52.3, 1, 2, 'N', 115},
    {103.4, 3, 3, 'Y', 280},
    {99.8, 2, 2, 'Y', 155}
};

int main()
{
   for(int i = 0; i < 3; i++)
    {
        printf("%.2f %d %d %c %.2f\n", 
        houses[i].size, houses[i].bedroom, houses[i].bathroom, houses[i].renovated, houses[i].price);
    }
}