#include "project.h"

UT_TEST(ft_memdel)
{
	void	*mem;

	mem = malloc(2000);
	ft_memdel(&mem);
	UT_ASSERT_W(mem == NULL);

	if (TESTNULL)
	{
		void	*mem2;
		mem2 = NULL;
		ft_memdel(&mem2);
		ft_memdel(NULL);
	}
}
