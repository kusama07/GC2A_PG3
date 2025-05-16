#include "Cat.h"

Cat::Cat()
{
	name = "Cat";
}

Cat::~Cat()
{
}

void Cat::cry()
{
	printf("%s: にゃー\n", name);
}
