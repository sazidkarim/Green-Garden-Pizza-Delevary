#include<stdio.h>
#include<conio.h>

void firstPage();

void menuPage();
void pizzaPage(float p[20], char *itm[20], int k);
void sidesPage(float p[20], char *itm[20], int k);
void drinksPage(float p[20], char *itm[20], int k);
void orderListPage(float p[20], char *itm[20], int k);
void exitPage();
int main()
{
    char i = 0;
    float price[20];
    char *item[20];
    int k = 0;
    firstPage();
    getch();

    while (i != '5')
    {
        menuPage();

        printf("\n\n\n\n\n\tPlease Enter Your Selection <y/n>:");
        scanf("%c", &i);
        while (i != '1' && i != '2' && i != '3' && i != '4' && i != '5')
        {
            menuPage();
            printf("\n\n\n\n\n\tPlease Enter Valid Selection : ");
            scanf("%c", &i);
        }
        switch (i)
        {
        case '1':
            {
                pizzaPage(price, item, k);
                break;
            }
        case '2':
            {
                sidesPage(price, item, k);
                break;
            }
        case '3':
            {
                drinksPage(price, item, k);
                break;
            }
        case '4':
            {
                orderListPage(price, item, k);
                break;
            }

        }
    }

    exitPage();
    getch();
    return 0;
}
void pizzaPage(float p[10], char *itm[20], int k)
{
    int i, j;
    char ch;
    printf("\n\n\n\n\n\n\n\n\n\t");
    for (i = 0; i < 58; i++)
        printf("*");

    for (j = 0; j < 2; j++)
    {
        printf("\n\t**");
        for (i = 0; i < 54; i++)
            printf(" ");
        printf("**");
    }

    printf("\n\t**\t  Menu  Selection  >>  Pizzas\t\t\t**\t");

    for (j = 0; j < 2; j++)
    {
        printf("\n\t**");
        for (i = 0; i < 54; i++)
            printf(" ");
        printf("**");
    }
    printf("\n\t");
    for (i = 0; i < 58; i++)
        printf("*");

    for (j = 0; j < 2; j++)
    {
        printf("\n\t**");
        for (i = 0; i < 54; i++)
            printf(" ");
        printf("**");
    }

    printf("\n\t**\t  Item Name \t\t Price \t\t\t**\t");
    for (j = 0; j < 3; j++)
    {
        printf("\n\t**");
        for (i = 0; i < 54; i++)
            printf(" ");
        printf("**");
    }

    printf("\n\t**\t 1.Meat Lovers \t\t 400tk \t\t**\t");
    for (j = 0; j < 2; j++)
    {
        printf("\n\t**");
        for (i = 0; i < 54; i++)
            printf(" ");
        printf("**");
    }

    printf("\n\t**\t 2.Vege Delight \t 112tk \t\t**\t");
    for (j = 0; j < 2; j++)
    {
        printf("\n\t**");
        for (i = 0; i < 54; i++)
            printf(" ");
        printf("**");
    }
    printf("\n\t**\t 3.greengarden Special \t 120tk \t\t**\t");
    for (j = 0; j < 2; j++)
    {printf("\n\t**");
        for (i = 0; i < 54; i++)
            printf(" ");
        printf("**");
    }printf("\n\t");
    for (i = 0; i < 58; i++)
        printf("*");
    printf("\n\n\n\n\tPlease Enter Your Selection \t       : ");
    scanf("%d", &i);
    printf("\n\n\n\tQuantity\t\t\t       : ");
    scanf("%d", &j);
    printf("\n\n\n\tDo you want to order other Pizza <y/n> : ");
    scanf("%c", &ch);

    getch();
    switch (i)
    {
    case 1:
        {
        p[k++] = 12.75 * j;
            itm[k++] = "Meat Lovers";
            break;
        }

    case 2:
        {

            p[k++] = 9.50 * j;
            itm[k++] = "Vege Delight";
            break;
        }

    case 3:
        {
            p[k++] = 12.00 * j;
            itm[k++] = "greeengarden Special";
            break;
        }
    }
    if (ch == 'y')
    {
        pizzaPage(p, itm, k);
    }
    else if (ch == 'n')
    {
        return;
    }

}
void sidesPage(float p[10], char *itm[20], int k)
{char ch;
    int i, j;
printf("\n\n\n\n\n\n\n\n\n\t");
for (i = 0; i < 58; i++)
        printf("*");
for (j = 0; j < 2; j++)
    {
        printf("\n\t**");
        for (i = 0; i < 54; i++)
            printf(" ");
        printf("**");
    }printf("\n\t**\t  Menu  Selection  >>  Sides\t\t\t**\t");
for (j = 0; j < 2; j++)
    {printf("\n\t**");
        for (i = 0; i < 54; i++)
            printf(" ");
        printf("**");
    }printf("\n\t");
    for (i = 0; i < 58; i++)
        printf("*");
    for (j = 0; j < 2; j++)
    {printf("\n\t**");
        for (i = 0; i < 54; i++)
            printf(" ");
        printf("**");
    }printf("\n\t**\t  Item Name \t\t Price \t\t\t**\t");
    for (j = 0; j < 3; j++)
    {printf("\n\t**");
        for (i = 0; i < 54; i++)
            printf(" ");
        printf("**");
    }printf("\n\t**\t 1.Fries    \t\t  70tk \t\t**\t");
    for (j = 0; j < 2; j++)
    {printf("\n\t**");
        for (i = 0; i < 54; i++)
            printf(" ");
        printf("**");
    }printf("\n\t**\t 2.Chicken Wings \t  65tk \t\t**\t");
    for (j = 0; j < 2; j++)
    {printf("\n\t**");
        for (i = 0; i < 54; i++)
            printf(" ");
        printf("**");
    }
    printf("\n\t**\t 3.Chicken Nuggets \t  60tk \t\t**\t");
    for (j = 0; j < 2; j++)
    {printf("\n\t**");
        for (i = 0; i < 54; i++)
            printf(" ");
        printf("**");
    }
    printf("\n\t");
    for (i = 0; i < 58; i++)
        printf("*");
    printf("\n\n\n\n\tPlease Enter Your Selection \t       : ");
    scanf("%d", &i);
    printf("\n\n\n\tQuantity\t\t\t       : ");
    scanf("%d", &j);
    printf("\n\n\n\tDo you want to order other Pizza <y/n> : ");
    scanf("%c", &ch);
    getch();
    switch (i)
    {
    case 1:
        {
            p[k++] = 3.00 * j;
            itm[k++] = "Fries";
            break;
        }

    case 2:
        {
            p[k++] = 5.50 * j;
            itm[k++] = "Chicken Wings";
            break;
        }

    case 3:
        {p[k++] = 4.00 * j;
            itm[k++] = "Chicken Nuggets";
            break;
        }
    }if (ch == 'y')
    {sidesPage(p, itm, k);
    }
    else if (ch == 'n')
    {
        return;
    }
}
void drinksPage(float p[10], char *itm[20], int k)
{char ch;
    int i, j;
    printf("\n\n\n\n\n\n\n\n\n\t");
    for (i = 0; i < 58; i++)
        printf("*");
for (j = 0; j < 2; j++)
    {
        printf("\n\t**");
        for (i = 0; i < 54; i++)
            printf(" ");
        printf("**");
    }
    printf("\n\t**\t  Menu  Selection  >>  Drinks\t\t\t**\t");
    for (j = 0; j < 2; j++)
    {printf("\n\t**");
        for (i = 0; i < 54; i++)
            printf(" ");
        printf("**");
    }printf("\n\t");
    for (i = 0; i < 58; i++)
        printf("*");
for (j = 0; j < 2; j++)
    {printf("\n\t**");
        for (i = 0; i < 54; i++)
            printf(" ");
        printf("**");
    }printf("\n\t**\t  Item Name \t\t Price \t\t\t**\t");
    for (j = 0; j < 3; j++)
    {printf("\n\t**");
        for (i = 0; i < 54; i++)
            printf(" ");
        printf("**");
    }printf("\n\t**\t 1.Water    \t\t     15tk \t\t**\t");
    for (j = 0; j < 2; j++)
    {printf("\n\t**");
        for (i = 0; i < 54; i++)
            printf(" ");
        printf("**");
    }printf("\n\t**\t 2.Coca Cola \t\t     25tk \t\t**\t");
    for (j = 0; j < 2; j++)
    {
        printf("\n\t**");
        for (i = 0; i < 54; i++)
            printf(" ");
        printf("**");
    }printf("\n\t");
    for (i = 0; i < 58; i++)
        printf("*");
    printf("\n\n\n\n\tPlease Enter Your Selection \t       : ");
    scanf("%d", &i);
    printf("\n\n\n\tQuantity\t\t\t       : ");
    scanf("%d", &j);
    printf("\n\n\n\tDo you want to order other Pizza <y/n> : ");
    scanf("%c", &ch);
getch();
    switch (i)
    {
    case 1:
        {p[k++] = 1.20 * j;
            itm[k++] = "Water";
            break;
        }
    case 2:
        {p[k++] = 5.50 * j;
            itm[k++] = "Coca Cola";
            break;
        }
    }if (ch == 'y')
    {
        drinksPage(p, itm, k);
    }
    else if (ch == 'n')
    {return;
    }
}
void orderListPage(float p[10], char *itm[20], int k)
{int i, j, z;
    float sum = 0;
    printf("\n\n\n\n\n\n\n\n\n\t");
    for (i = 0; i < 58; i++)
        printf("*");
    for (j = 0; j < 2; j++)
    {printf("\n\t**");
        for (i = 0; i < 54; i++)
            printf(" ");
        printf("**");
    }
    printf("\n\t**\t\t  Your  Order  List  \t\t\t**\t");
    for (j = 0; j < 2; j++)
    {printf("\n\t**");
        for (i = 0; i < 54; i++)
            printf(" ");
        printf("**");
    }
    printf("\n\t");
    for (i = 0; i < 58; i++)
        printf("*");
for (j = 0; j < 2; j++)
    {
        printf("\n\t**");
        for (i = 0; i < 54; i++)
            printf(" ");
        printf("**");
    }
    printf("\n\t**\t  Price \t\t  Item Name \t\t**\t");
    for (j = 0; j < 3; j++)
    {printf("\n\t**");
        for (i = 0; i < 54; i++)
            printf(" ");
        printf("**");
    }for (z = 0; z < k; z++)
    {printf("\n\t**\t%d. $%0.2f \t %s\t\t**\t", (z + 1), p[z], itm[z]);
        sum = sum + p[z];
        for (j = 0; j < 2; j++)
        {printf("\n\t**");
            for (i = 0; i < 54; i++)
                printf(" ");
            printf("**");
        }
    }
    printf("\n\n\n\n\t\tYour Total Amount is : %0.2f\t", sum);
    return;
}
void exitPage()
{int i, j;
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t");
    for (i = 0; i < 58; i++)
        printf("*");
    for (j = 0; j < 3; j++)
    {printf("\n\t**");
        for (i = 0; i < 54; i++)
            printf(" ");
        printf("**");
    }
    printf("\n\t**\t\t Exiting Program, Bye Bye  \t\t**\t");
    for (j = 0; j < 3; j++)
    {
        printf("\n\t**");
        for (i = 0; i < 54; i++)
            printf(" ");
        printf("**");
    }
    printf("\n\t");
    for (i = 0; i < 58; i++)
        printf("*");

    return;
}
void menuPage()
{
    int i, j;
    printf("\n\n\n\n\n\n\n\n\n\n\n\t");
    for (i = 0; i < 58; i++)
        printf("*");
    for (j = 0; j < 2; j++)
    {printf("\n\t**");
        for (i = 0; i < 54; i++)
            printf(" ");
        printf("**");
    }
    printf("\n\t**\t\t  Menu  Selection  \t\t\t**\t");
    for (j = 0; j < 2; j++)
    {
        printf("\n\t**");
        for (i = 0; i < 54; i++)
            printf(" ");
        printf("**");
    }
    printf("\n\t");
    for (i = 0; i < 58; i++)
        printf("*");
    for (j = 0; j < 2; j++)
    {
        printf("\n\t**");
        for (i = 0; i < 54; i++)
            printf(" ");
        printf("**");
    }
    printf("\n\t**\t\t  1. Pizzas  \t\t\t\t**\t");
    for (j = 0; j < 1; j++)
    {
        printf("\n\t**");
        for (i = 0; i < 54; i++)
            printf(" ");
        printf("**");
    }
    printf("\n\t**\t\t  2. Sides  \t\t\t\t**\t");
    for (j = 0; j < 1; j++)
    {
        printf("\n\t**");
        for (i = 0; i < 54; i++)
            printf(" ");
        printf("**");
    }
    printf("\n\t**\t\t  3. Drinks  \t\t\t\t**\t");
    for (j = 0; j < 1; j++)
    {
        printf("\n\t**");
        for (i = 0; i < 54; i++)
            printf(" ");
        printf("**");
    }
    printf("\n\t**\t\t  4. Order List  \t\t\t**\t");
    for (j = 0; j < 1; j++)
    {
        printf("\n\t**");
        for (i = 0; i < 54; i++)
            printf(" ");
        printf("**");
    }
    printf("\n\t**\t\t  5. Exit  \t\t\t\t**\t");

    for (j = 0; j < 2; j++)
    {
        printf("\n\t**");
        for (i = 0; i < 54; i++)
            printf(" ");
        printf("**");
    }
    printf("\n\t");
    for (i = 0; i < 58; i++)
        printf("*");
    return;

}
void firstPage()
{int i, j;
    printf("\n\n\n\n\n\n\n\n\n\n\n\t");
    for (i = 0; i < 58; i++)
        printf("*");
for (j = 0; j < 3; j++)
    {printf("\n\t**");
        for (i = 0; i < 54; i++)
            printf(" ");
        printf("**");
    }
    printf("\n\t**\t\t  Green Garden  Pizza  \t\t**\t");

    for (j = 0; j < 3; j++)
    {printf("\n\t**");
        for (i = 0; i < 54; i++)
            printf(" ");
        printf("**");
    }
    printf("\n\t");
    for (i = 0; i < 58; i++)
        printf("*");
    printf("\n\t");

    for (i = 0; i < 58; i++)
        printf("*");
    for (j = 0; j < 5; j++)
    {
        printf("\n\t**");
        for (i = 0; i < 54; i++)
            printf(" ");
        printf("**");
    }
    printf("\n\t**\t     Customer  Order  Billing  System  \t\t**");

    for (j = 0; j < 2; j++)
    {printf("\n\t**");
        for (i = 0; i < 54; i++)
            printf(" ");
        printf("**");
    }
    printf("\n\t**\t\t  Press <Enter> to continue   \t\t**");

    for (j = 0; j < 5; j++)
    {
        printf("\n\t**");
        for (i = 0; i < 54; i++)
            printf(" ");
        printf("**");
    }
    printf("\n\t");
    for (i = 0; i < 58; i++)
        printf("*");
    return;
}

