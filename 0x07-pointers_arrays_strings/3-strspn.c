#ifndef MAIN_H
#define MAIN_H

/* Function prototype for _memset */
char *_memset(char *s, char b, unsigned int n);

#endif /* MAIN_H */
unsigned int _strspn(char *s, char *accept)
{
unsigned int count = 0;
int found = 0;
while (*s)
{
found = 0;
for (int i = 0; accept[i]; i++)
{
if (*s == accept[i])
{
found = 1;
break;
}
}
if (found == 0)
{
return count;
}
count++;
s++;
}
return count;
}
