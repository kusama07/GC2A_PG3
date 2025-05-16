#include "Circle.h"

Circle::Circle()
{
	radius_ = 5;
}

Circle::~Circle()
{
}

void Circle::Size()
{
	ans_ = 3.14f * radius_ * radius_;
}

void Circle::Draw()
{
	printf("Circle Area: %f\n", ans_);
}
