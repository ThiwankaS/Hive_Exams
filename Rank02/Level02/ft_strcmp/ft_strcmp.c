int ft_strcmp(char *s1, char *s2)
{
	int count = 0;
	while(s1 && s2 && (s1[count] == s2[count]))
		count++;
	return (s1[count] - s2[count]);
}
