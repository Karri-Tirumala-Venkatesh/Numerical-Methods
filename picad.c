#include<stdio.h>
#include<stdlib.h>
#include<math.h>

struct node{
    double coeff;
    int x_pow;
    int y_pow;
    struct node* next;
};

struct node* fun(struct node* head, double coeff, int x_pow, int y_pow){
    struct node* temp = malloc(sizeof(struct node));
    temp->coeff = coeff;
    temp->x_pow = x_pow;
    temp->y_pow = y_pow;
    temp->next = head;
    return temp;
}

double integrate(double x, double x0, double y1, struct node* head){
    struct node* ptr = malloc(sizeof(struct node));
    ptr = head;
    struct node* head1 = malloc(sizeof(struct node));
    head1 = NULL;
    while(ptr!=NULL){
        head1 = fun(head1, ptr->coeff, ptr->x_pow, ptr->y_pow);
        ptr = ptr->next;
    }
    ptr = head1;
    while(ptr!=NULL){
        ptr->x_pow = ptr->x_pow + 1;
        ptr->coeff = ptr->coeff / ptr->x_pow;
        ptr = ptr->next;
    }
    double integral = 0;
    double upper_integral = 0;
    double lower_integral = 0;
    struct node* ptr1 = malloc(sizeof(struct node));
    struct node* ptr2 = malloc(sizeof(struct node));
    ptr1 = head1;
    ptr2 = head1;
    while(ptr1!=NULL){
        upper_integral = upper_integral + (ptr1->coeff*(pow(x,ptr1->x_pow))*(pow(y1,ptr1->y_pow)));
        ptr1 = ptr1->next;
    }
    while(ptr2!=NULL){
        lower_integral = lower_integral + (ptr2->coeff*(pow(x0,ptr2->x_pow))*(pow(y1,ptr2->y_pow)));
        ptr2 = ptr2->next;
    }
    integral = upper_integral - lower_integral;
    return integral;
}

int main(){
    int terms;
    printf("Enter the number of terms in the 2 Variable Polynomial : ");
    scanf("%d", &terms);
    double coeff;
    int x_pow;
    int y_pow;
    struct node* head = malloc(sizeof(struct node));
    head = NULL;
    printf("Enter the 2 Variable Polynomial :\n");
    printf("Coefficient - x.Power - y.Power :\n");
    for(int i=0; i<terms; i++){
        scanf("%lf %d %d", &coeff, &x_pow, &y_pow);
        head = fun(head, coeff, x_pow, y_pow);
    }
    double x0, y0;
    printf("Enter the Values x0, y0 :\n");
    scanf("%lf %lf", &x0, &y0);
    double x;
    printf("Enter the Value of x, to find y :\n");
    scanf("%lf", &x);
    double y1 = y0;
    double y;
    while(3>2){
        y = y0 + integrate(x, x0, y1, head);
        if(y-y1 <= 0.0003 && y-y1 >= -0.0003){
            break;
        }
        else{
            y1 = y;
        }
    }
    printf("%lf is the Answer", y);
    return 0;
}
