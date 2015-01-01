#include "project.h"

UT_TEST(ft_strnequ)
{
	UT_ASSERT_EQ(ft_strnequ("ededeqdf", "", 0), 1);
	UT_ASSERT_EQ(ft_strnequ("abcde", "abdfe", 2), 1);
	UT_ASSERT_EQ(ft_strnequ("abc", "abc", 100), 1);
	UT_ASSERT_EQ(ft_strnequ("abcde", "abdde", 5), 0);

	if (TESTNULL)
	{
		ft_strnequ(NULL, "42", 42);
		ft_strnequ("42", NULL, 42);
		ft_strnequ(NULL, NULL, 42);
	}
}
