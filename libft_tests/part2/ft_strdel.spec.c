#include "project.h"

UT_TEST(ft_strdel)
{
	char	*str;

	str = malloc(123);
	ft_strdel(&str);
	UT_ASSERT_EQ(str, NULL);

	if (TESTNULL)
	{
		char *test;
		test = NULL;
		ft_strdel(&test);
		ft_strdel(NULL);
	}
}
