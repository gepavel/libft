
#include "libft.h"

int	main(void)
{

//	DECLARACION DE VARIABLES NECESARIAS PARA TODO EL PROYECTO.
//	char	*src;
//	char	*dst;
//	char	*str;
//	char	*str1;
//	char	*str2;
//	char	*str3;
//	char	*str4; 


	printf("-----------------------------------------------------------------------------\n");
	printf(">>>>>>>>>>>>>>>>>>>>>>>>>>>> L I B F T   T E S T <<<<<<<<<<<<<<<<<<<<<<<<<<<<\n");
	printf("-----------------------------------------------------------------------------\n");
	printf(">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> PART 1 <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<\n");
	printf("-----------------------------------------------------------------------------\n");
	
	printf("\033[0;35m----->[ft_isalpha]<-----\033[0m\n");

	printf("< b : %d\n", ft_isalpha('b'));
	printf("> b : %d\n", isalpha('b'));
	printf("< B : %d\n", ft_isalpha('B'));
	printf("> B : %d\n", isalpha('B'));
	printf("< 6 : %d\n", ft_isalpha('6'));
	printf("> 6 : %d\n", isalpha('6'));
	
	printf("-----------------------------------------------------------------------------\n");
	printf("\033[0;35m----->[ft_isdigit]<-----\033[0m\n");

	printf("< b : %d\n", ft_isdigit('b'));
	printf("> b : %d\n", isdigit('b'));
	printf("< . : %d\n", ft_isdigit('.'));
	printf("> . : %d\n", isdigit('.'));
	printf("< 6 : %d\n", ft_isdigit('6'));
	printf("> 6 : %d\n`", isdigit('6'));

	printf("-----------------------------------------------------------------------------\n");
	printf("\033[0;35m----->[ft_isalnum]<-----\033[0m\n");

	printf("< b : %d\n", ft_isalnum('b'));
	printf("> b : %d\n", isalnum('b'));
	printf("< . : %d\n", ft_isalnum('.'));
	printf("> . : %d\n", isalnum('.'));
	printf("< 6 : %d\n", ft_isalnum('6'));
	printf("> 6 : %d\n`", isalnum('6'));
	printf("< B : %d\n", ft_isalnum('B'));
	printf("> B : %d\n`", isalnum('B'));
	printf("< ? : %d\n", ft_isalnum('?'));
	printf("> ? : %d\n`", isalnum('?'));

	printf("-----------------------------------------------------------------------------\n");
	printf("\033[0;35m----->[ft_isascii]<-----\033[0m\n");

	printf("< b : %d\n", ft_isascii('b'));
	printf("> b : %d\n", isascii('b'));
	printf("< . : %d\n", ft_isascii('.'));
	printf("> . : %d\n", isascii('.'));
	printf("< 144 : %d\n", ft_isascii(144));
	printf("> 144 : %d\n`", isascii(144));

	printf("-----------------------------------------------------------------------------\n");
	printf("\033[0;35m----->[ft_isprint]<-----\033[0m\n");

	printf("< b : %d\n", ft_isprint('b'));
	printf("> b : %d\n", isprint('b'));
	printf("< . : %d\n", ft_isprint('.'));
	printf("> . : %d\n", isprint('.'));
	printf("< 144 : %d\n", ft_isprint(144));
	printf("> 144 : %d\n`", isprint(144));
	printf("< 25 : %d\n", ft_isprint(25));
	printf("> 25 : %d\n`", isprint(25));

	printf("-----------------------------------------------------------------------------\n");
	printf("\033[0;35m----->[ft_strlen]<-----\033[0m\n");

	printf("< Hellow world : %zu\n", ft_strlen("Hellow world"));
	printf("> Hellow world : %lu\n", strlen("Hellow world"));
	printf("< {} : %zu\n", ft_strlen(""));
	printf("> {} : %lu\n", strlen(""));
/*
	printf("-----------------------------------------------------------------------------\n");
	printf("\033[0;35m----->[ft_memset]<-----\033[0m\n");
	
	char	s1[12];
	char	s2[12];
	
	strcpy(s1, "hello there");
	strcpy(s2, "hello there");
	printf("< Hello there-> c - 12 :%s\n", (char *)ft_memset(s1, 'H', 12));
	printf("> Hello there-> c - 12 :%s\n", (char *)memset(s2, 'H', 12));

	strcpy(s1, "hello there");
	strcpy(s2, "hello there");
	printf("< Hello there-> c - 13 :%s\n", (char *)ft_memset(s1, 'H', 13));
//	printf("Hello there-> c - 13 :%s\n", (char *)memset(s2, 'c', 13));

	strcpy(s1, "hello there");
	strcpy(s2, "hello there");
	printf("< Hello there-> c - 10 :%s\n", (char *)ft_memset(s1, 'H', 10));
	printf("> Hello there-> c - 10 :%s\n", (char *)memset(s2, 'H', 10));

	printf("-----------------------------------------------------------------------------\n");
	printf("\033[0;35m----->[ft_bzero]<-----\033[0m\n");

	char	s3[12];
	char	s4[12];
	
	strcpy(s3, "hello there");
	strcpy(s4, "hello there");
	printf("< Hello there-> c - 12 :%s\n", (char *)ft_bzero(s3, 12));
	printf("> Hello there-> c - 12 :%s\n", (char *)bzero(s4, 12));

	strcpy(s3, "hello there");
	strcpy(s4, "hello there");
	printf("< Hello there-> c - 13 :%s\n", (char *)ft_bzero(s3, 13));
	printf(">Hello there-> c - 13 :error\n");

	strcpy(s3, "hello there");
	strcpy(s4, "hello there");
	printf("< Hello there-> c - 10 :%s\n", (char *)ft_bzero(s3, 10));
	printf("> Hello there-> c - 10 :%s\n", (char *)bzero(s4, 10));
	
	strcpy(s3, "hello there");
	strcpy(s4, "hello there");
	printf("< Hello there-> c - 0 :%s\n", (char *)ft_bzero(s3, 0));
	printf("> Hello there-> c - 0 :%s\n", (char *)bzero(s4, (0)));
*/
	printf("-----------------------------------------------------------------------------\n");
	printf("\033[0;35m----->[ft_memcpy]<-----\033[0m\n");
	
	char	dest1[12];
	char	dest[12];
	char	src1[12];

	strcpy(src1, "hello there");
	strcpy(dest1, "XXXXXXXXXXX");
	strcpy(dest, "XXXXXXXXXXX");
	printf("< XXXXXXXXXXX-> hello theere - 11 :%s\n", (char *)ft_memcpy(dest1, src1, 11));
	printf("> XXXXXXXXXXX-> hello theere - 11 :%s\n", (char *)memcpy(dest1,  src1, 11));

	strcpy(dest1, "XXXXXXXXXXX");
	strcpy(dest, "XXXXXXXXXXX");
	printf("< XXXXXXXXXXX-> hello theere - 4 :%s\n", (char *)ft_memcpy(dest1, src1, 4));
	printf("> XXXXXXXXXXX-> hello theere - 4 :%s\n", (char *)memcpy(dest1,  src1, 4));

	strcpy(dest1, "XXXXXXXXXXX");
	strcpy(dest, "XXXXXXXXXXX");
	printf("< XXXXXXXXXXX-> hello theere - 12 :%s\n", (char *)ft_memcpy(dest1, src1, 12));
	printf("> XXXXXXXXXXX-> hello theere - 12 :%s\n", (char *)memcpy(dest,  src1, 12));

	strcpy(dest1, "XXXXXXXXXXX");
	strcpy(dest, "XXXXXXXXXXX");
	printf("< XXXXXXXXXXX-> hello theere - 0 :%s\n", (char *)ft_memcpy(dest1, src1, 0));
	printf("> XXXXXXXXXXX-> hello theere - 0 :%s\n", (char *)memcpy(dest,  src1, 0));

	printf("-----------------------------------------------------------------------------\n");
	printf("\033[0;35m----->[ft_memmove]<-----\033[0m\n");
	
	char	*d1;
	char	d2[12];
	char	*s1;
	
	d1 = (char *)malloc(1);
	s1 = (char *)malloc(1);
	printf("< NULL -> NULL - 2 :%s\n", (char *)ft_memmove(d1, s1, 2));
	printf("> NULL -> NULL - 2 :%s\n", (char *)memcpy(d2,  s1, 0));
/*	
	strcpy(s1, "hello there");
	strcpy(d1, "XXXXXXXXXXX");
	strcpy(d2, "XXXXXXXXXXX");
	printf("< XXXXXXXXXXX-> hello theere - 11 :%s\n", (char *)ft_memmove(d1, s1, 11));
	printf("> XXXXXXXXXXX-> hello theere - 11 :%s\n", (char *)memmove(d1,  s1, 11));

	strcpy(d1, "XXXXXXXXXXX");
	strcpy(d2, "XXXXXXXXXXX");
	printf("< XXXXXXXXXXX-> hello theere - 4 :%s\n", (char *)ft_memmove(d1, s1, 4));
	printf("> XXXXXXXXXXX-> hello theere - 4 :%s\n", (char *)memmove(d1,  s1, 4));

	strcpy(d1, "XXXXXXXXXXX");
	strcpy(d2, "XXXXXXXXXXX");
	printf("< XXXXXXXXXXX-> hello theere - 12 :%s\n", (char *)ft_memmove(d1, s1, 12));
	printf("> XXXXXXXXXXX-> hello theere - 12 :%s\n", (char *)memmove(d2,  s1, 12));
*/
	printf("-----------------------------------------------------------------------------\n");
	printf("\033[0;35m----->[ft_strlcpy]<-----\033[0m\n");
	
	char	dest2[20];
	char	dest3[20];
	char	dest4[12];
	char	dst[20];
	char	dst1[20];
	char	dst2[12];
	char	src[12];

	strcpy(src, "hello there");                                                                                  
	printf("< [20]-> hello there - 4 :%zu\n", ft_strlcpy(dest2, src, 4));
	printf("dst->%s\n", dest2);
	printf("> [20]-> hello there - 4 :%zu\n", strlcpy(dst,  src, 4));
	printf("dst->%s\n", dst);

	printf("< [20]-> hello there - 12 :%zu\n", ft_strlcpy(dest3, src, 12));
	printf("dst->%s\n", dest3);
	printf("> [20]-> hello there - 12 :%zu\n", strlcpy(dst1,  src, 12));
	printf("dst->%s\n", dst1);

	printf("< [20]-> hello there - 11 :%zu\n", ft_strlcpy(dest4, src, 11));
	printf("dst->%s\n", dest4);
	printf("> [20]-> hello there - 11 :%zu\n", strlcpy(dst2,  src, 11));
	printf("dst->%s\n", dst2);

	printf("<  -> hello there - 12 :%zu\n", ft_strlcpy(dest2, src, 12));
	printf(">  -> hello there - 12 :%zu\n", strlcpy(dst,  src, 12));
	
	printf("-----------------------------------------------------------------------------\n");
	printf("\033[0;35m----->[ft_strlcat]<-----\033[0m\n");

	char	destino1[14] = "helo";
	char	destino2[14] = "helo";
	char	concate[] = " world";

	printf("< %zu->", ft_strlcat(destino1, concate, 2));
	printf("%s-\n", destino1);
	printf("> %zu->", strlcat(destino2, concate, 2));
	printf("%s-\n", destino2);
	
	printf("-----------------------------------------------------------------------------\n");
	printf("\033[0;35m----->[ft_strrchr]<-----\033[0m\n");

	char	string[] = "";
	char	cadena[] = "hello world";
	
	printf("> hello world -> o : %s\n", ft_strrchr(string, 'o'));
	printf("> %s\n", ft_strrchr(cadena, 'x'));

	printf("-----------------------------------------------------------------------------\n");
	printf("\033[0;35m----->[ft_strncmp]<-----\033[0m\n");

	char *big = "abcdef";
	char *little = "abcdefghijklmnop";
	
	int i1 = ((strncmp(big, little, 6) > 0) ? 1 : ((strncmp(big, little, 6) < 0) ? -1 : 0));
	int i2 = ((ft_strncmp(big, little, 6) > 0) ? 1 : ((ft_strncmp(big, little, 6) < 0) ? -1 : 0));
	printf("<%i\n", i1);
	printf(">%i\n", i2);

	printf("-----------------------------------------------------------------------------\n");
	printf("\033[0;35m----->[ft_memcmp]<-----\033[0m\n");

	char *big1 = "abcdef";
	char *little1 = "abcdefghijklmnop";
	
	printf("<%i\n", memcmp(big1, little1, 7));
	printf(">%i\n", ft_memcmp(big1, little1, 7));

	printf("-----------------------------------------------------------------------------\n");
	printf("\033[0;35m----->[ft_atoi<-----\033[0m\n");

	char	str_atoi[] = "12";
	printf ("< %s->:%d\n", str_atoi, ft_atoi(str_atoi));
	printf ("< %s->:%d\n", str_atoi, atoi(str_atoi));

	printf("-----------------------------------------------------------------------------\n");
	printf("\033[0;35m----->[ft_strtrim<-----\033[0m\n");

	const char		cdna[] = "jjjjHello worldjjjj";
	const char		set[] = "j";

	printf("<%s\n", ft_strtrim(cdna, set));

	printf("\nyeah baby estoy fugosss");

	return (0);
}
