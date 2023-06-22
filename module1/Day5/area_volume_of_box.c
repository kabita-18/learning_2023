// Use structures to find the volume and the total surface area of the box. 
//    You need to access the members of the structure with the help of a structure pointer:
//     a. With the help of (*) asterisk or indirection operator and (.) dot operator.
//     b. With the help of ( -> ) Arrow operator using pointer as well as dot representation.

#include <stdio.h>

struct Box{
    float length;
    float width;
    float height;
}box1;

int main(){
    struct Box *ptr = &box1;
    float surfaceArea = 0.0;
    float area =0.0;

    printf("Enter length, width, height");
    scanf("%f", &ptr->length);
    scanf("%f", &ptr->width);
    scanf("%f", &ptr->height);

    surfaceArea = (2*(ptr->length* ptr->width) + 2*(ptr->length*ptr->height) + 2*(ptr->width*ptr->height));
    area = ptr->length * ptr->width * ptr->height;

    printf("Surface Area: %f\n", surfaceArea);
    printf(" Atra of Box: %f\n", area);
   
    return 0;
}