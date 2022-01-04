#include <stdio.h>
int main()
{
    int ar[100];
    int i, n, pos, val, choice, ch, flag = 0;
    do
    {
        printf("1.insertion\n2.deletion\n3.search\n4.exit\n");
        printf("enter your choice:");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
        x:
            printf("\n1.insert at beg\n2.insert in end\n3.insert in middle\nenter your choice:");
            scanf("%d", &ch);
            if (ch == 1)
            {
                printf("enter the value to b inserted:");
                scanf("%d", &val);
                for (i = n; i > 0; i--)
                    ar[i] = ar[i - 1];
                ar[0] = val;
                n++;
            }
            else if (ch == 2)
            {
                printf("enter the value to b inserted:");
                scanf("%d", &val);
                ar[n] = val;
                n++;
            }
            else if (ch == 3)
            {
                printf("enter the position to be inserted:");
                scanf("%d", &pos);
                printf("enter the value to b inserted in that position:");
                scanf("%d", &val);
                for (i = n; i >= pos; i--)
                    ar[i] = ar[i - 1];
                ar[pos - 1] = val;
                n++;
            }
            else
            {
                printf("\ninvaild input");
                goto x;
            }
            printf("\nthe array elements:\n");
            for (i = 0; i < n; i++)
                printf("%d\n", ar[i]);
            break;
        case 2:
        y:
            printf("\n1.deletion at beg\n2.deletion at end\n3.deletion in middle\nEnter your choice:");
            scanf("%d", &ch);
            if (ch == 1)
            {
                for (i = 0; i < n - 1; i++)
                    ar[i] = ar[i + 1];
                ar[n - 1] = 0;
                n--;
            }
            else if (ch == 2)
            {
                ar[n - 1] = 0;
                n--;
            }
            else if (ch == 3)
            {
                printf("enter the  position to b deleted:");
                scanf("%d", &pos);
                for (i = pos - 1; i < n; i++)
                    ar[i] = ar[i + 1];
                ar[n - 1] = 0;
                n--;
            }
            else
            {
                printf("\nInvaild input");
                goto y;
            }
            printf("\nthe array elements:");
            for (i = 0; i < n; i++)
                printf("%d\n", ar[i]);
            break;
        case 3:
        z:
            printf("\n1.search by value\n2.search by position\nEnter your choice:");
            scanf("%d", &ch);
            if (ch == 1)
            {
                printf("Enter the value to be searched: ");
                scanf("%d", &val);
                for (i = 0; i < n; i++)
                    if (ar[i] == val)
                    {
                        printf("the value is found at the index:%d", i + 1);
                        flag = 1;
                    }
                if (flag == 0)
                {
                    printf("The elements is not found");
                }
            }
            else if (ch == 2)
            {
                printf("Enter the position to b searched:");
                scanf("%d", &pos);
                printf("The element in the given index: %d", ar[pos - 1]);
            }
            else
            {
                printf("\ninvaild input");
                goto z;
            }
            break;
        case 4:
            break;
        default:
            printf("\ninvaild input");
            break;
        }
    } while (choice != 4);
}