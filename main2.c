char *r;

r = ft_strjoin("hola ", "mundo");
printf("[%s]\n", r);
free(r);

r = ft_strjoin(NULL, "mundo");
printf("[%s]\n", r);
free(r);

r = ft_strjoin("", "");
printf("[%s]\n", r);
free(r);