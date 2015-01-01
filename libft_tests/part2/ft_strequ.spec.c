#include "project.h"

UT_TEST(ft_strequ)
{
	UT_ASSERT_EQ(ft_strequ("", ""), 1);
	UT_ASSERT_EQ(ft_strequ("abcDEF", "abcDEF"), 1);
	UT_ASSERT_EQ(ft_strequ("abcDEF", "abcDEf"), 0);

	if (TESTNULL)
	{
		ft_strequ(NULL, "42");
		ft_strequ("42", NULL);
		ft_strequ(NULL, NULL);
	}
}
