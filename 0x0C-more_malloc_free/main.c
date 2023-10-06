int main(void)
{
char *c;
int *i;
float *j;
double *k;
c = malloc_checked(sizeof(char) * 1024);
printf("%p\n", (void *)c);
i = malloc_checked(sizeof(int) * 402);
printf("%p\n", (void *)i);
j = malloc_checked(size_of(float) * 100000000);
printf("%p\n", (void *)j);
k = malloc_checked(INT_MAX);
printf("%p\n", (void *)k);
free(c);
free(i);
free(j);
free(k);
return (0);
}
