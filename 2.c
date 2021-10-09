#include <stdio.h>

#define MAX 50

int checkDomain(char email[], int index)
{
  int indexOfdot = -1;
  if (email[index + 1] != '.')
  {

    for (int i = index + 2; i < MAX - 1; i++)
    {
      if (email[i] == '.')
        indexOfdot = i;
    }

    if (indexOfdot == -1)
      return 0;
    else
      return 1;
  }
  else
    return 0;
}

int checkEmail(char email[])
{
  int index = -1;
  for (int i = 0; i < MAX - 4; i++)
  {
    if (email[i] == '@')
      index = i;
  }

  if (index == -1)
    return 0;
  else
    return checkDomain(email, index);
}

int main()
{

  char email[MAX];
  scanf("%s", email);
  printf("%s", ((checkEmail(email)) ? "valid" : "invalid"));
  return 0;
}
