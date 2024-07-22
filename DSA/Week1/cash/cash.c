#include<stdio.h>
#include<cs50.h>

int get_cents(void);
int cal_quarters(int cents);
int cal_dimes(int cents);
int cal_nickels(int cents);
int cal_pennies(int cents);



int main(){
int cents=get_cents();

int quarter=cal_quarters(cents);
cents-=quarter*25;

int dimes=cal_dimes(cents);
cents-=dimes*10;

int nickel=cal_nickels(cents);
cents-=nickel*5;

int pennies=cal_pennies(cents);
cents-=pennies*1;



int coins=quarter+nickel+dimes+pennies;

printf("%i\n",coins);

}

int get_cents(void){
    int cents;
    do{
      cents=  get_int("Cents  :");
    }while(cents<0);
    return cents;
}

int cal_quarters(int cents){
    int quarters=cents/25;
    return quarters;
}
int cal_dimes(int cents){
    int dimes=cents/10;
    return dimes;
}
int cal_nickels(int cents){
    int nickels=cents/5;
    return nickels;
}
int cal_pennies(int cents){
    int pennies=cents/1;
return pennies;
}
