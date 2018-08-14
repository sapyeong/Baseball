#include "PointResult.h"
#include "main.h"

int PointResult::IsCorrect()
{
	int point = strike * 2 + ball;

	return point >= 4 ? TRUE : FALSE;
}
