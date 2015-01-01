#include "project.h"

UT_TEST(ft_strmap)
{
	char	*src;
	char	*dst;

	src = strdup("abcde");
	dst = ft_strmap(src, map_test);

	free(src); src = NULL;

	UT_ASSERT_EQ(strcmp(dst, "bcdef"), 0);

	if (TESTNULL)
		ft_strmap(NULL, map_test);
}
