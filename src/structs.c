#include <stdio.h>


struct Car
{
    char *model;
    char number[7];
    double km_driven;
};

typedef struct // typedef -> does not need to write struct before every declaration of Garage
{
    char *address;
    struct Car *parked_car;
} Garage;

int main()
{
    struct Car car = {"Ford Mustang", "48FAEA5", 8095.170};
    printf("%s with %s has driven totally %f3.\n", car.model, car.number, car.km_driven);
    Garage g;
    Garage *p_g;
    p_g = &g;
    g.address = "Austin";
    p_g->parked_car = &car; // same as g.parked_car = &car
    printf("%s is parked in %s.\n", g.parked_car->model, g.address);
}