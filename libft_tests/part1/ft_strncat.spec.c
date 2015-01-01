#include "project.h"

UT_TEST(ft_strncat)
{
	char	buf[20];

	strcpy(buf, "To be ");
	ft_strncat(buf, "or not to be", 6);
	UT_ASSERT_EQ(strcmp(buf, "To be or not"), 0);
	ft_strncat(buf, "efefef", 0);
	UT_ASSERT_EQ(strcmp(buf, "To be or not"), 0);
	UT_ASSERT_EQ(buf, ft_strncat(buf, "", 0));

	if (TESTNULL)
	{
		ft_strncat(NULL, "42", 42);
		ft_strncat("42", NULL, 42);
		ft_strncat(NULL, NULL, 42);
	}
}
