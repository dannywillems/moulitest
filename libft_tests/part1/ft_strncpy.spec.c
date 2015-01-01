#include "project.h"

UT_TEST(ft_strncpy)
{
	char	buf[6];

	memset(buf, 33, 6);
	ft_strncpy(buf, "abc", 6);
	UT_ASSERT_EQ(memcmp(buf, "abc\0\0", 6), 0);
	ft_strncpy(buf, "abcdefghi", 6);
	UT_ASSERT_EQ(memcmp(buf, "abcdefghi", 6), 0);

	if (TESTNULL)
	{
		ft_strncpy(NULL, NULL, 0);
		ft_strncpy(NULL, "42", 42);
		ft_strncpy("42", NULL, 42);
	}
}
