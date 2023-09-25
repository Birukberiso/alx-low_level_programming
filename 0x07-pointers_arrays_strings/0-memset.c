void memset_safe(char *s, char b, unsigned int n)
{
if (n > strlen(s))
{
// Handle error
return;
}
unsigned int i;
for (i = 0; i < n; i++)
{
s[i] = b;
}
}
