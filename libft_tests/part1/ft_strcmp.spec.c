#include "project.h"

UT_TEST(ft_strcmp)
{
	UT_ASSERT_EQ(ft_strcmp("", ""), 0);
	UT_ASSERT_EQ(ft_strcmp("abc", "abc"), 0);
	UT_ASSERT(ft_strcmp("abc", "abd") < 0);
	UT_ASSERT(ft_strcmp("\200", "\0") > 0);
	UT_ASSERT_NEQ(ft_strcmp("a", "abcde"), 0);

	if (TESTNULL)
	{
		ft_strcmp(NULL, "42");
		ft_strcmp("42", NULL);
		ft_strcmp(NULL, NULL);
	}
}
