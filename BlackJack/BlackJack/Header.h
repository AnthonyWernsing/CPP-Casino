#pragma once
int randNumber(int num)
{
	num = rand() % 100 + 1;
	return num; 
}