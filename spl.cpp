#include <stdio.h>

main()

{

    int number, sum = 0;

    printf("Enter number here: ");

    scanf("%d", &number);

    int numberCopy = number;

    while (numberCopy > 0)

    {

        int lastDigit = numberCopy % 10;

        int factorial = 1;

        for (int i = 1; i <= lastDigit; i++)

        {

            factorial = factorial * i;
        }

        sum = sum + factorial;

        numberCopy = numberCopy / 10;
    }

    if (number == sum)

        printf("The number %d is a Special Number", number);

    else

        printf("The number %d is not a Special Number", number);
}
