#include "Rectangle.h"

Rectangle::Rectangle()
{
	width_ = 5;
	height_ = 10;
}

Rectangle::~Rectangle()
{
}

void Rectangle::Size()
{
	ans_ = width_ * height_;
}

void Rectangle::Draw()
{
	printf("Rectangle Area: %f\n", ans_);
}

