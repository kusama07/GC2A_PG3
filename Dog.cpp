#include "Dog.h"

Dog::Dog()
{
	name = "Dog";
}

Dog::~Dog()
{
}

void Dog::cry()
{
	printf("%s: ワン\n", name);
}
