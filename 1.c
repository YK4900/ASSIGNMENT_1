    #include <stdio.h>
    int checkFloat(char number[])
    {
        for (int i = 0; i < 99; i++)
        {
            if (number[i] == '.' && number[i + 1] != '\0')
                return 1;
        }
        return 0;
    }
    int main()
    {
        char number[100];
        printf("Enter the number: ");
        scanf("%s", number);
        int value;
        printf("%s",((checkFloat(number))?"valid":"invalid"));
        return 0;
    }
