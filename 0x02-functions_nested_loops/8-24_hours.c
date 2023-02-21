#include "main.h"

/**
 * jack_bauer -> Prints every minute of the day of Jack Bauer,
 * starting from 00:00 to 23:59
 *
 * Return: Nothing
 */

void jack_bauer(void)
{
	/*
	int hour = 0;
	int hour2 = 0;
	int minute = 0;
	int minute2 = 0;
	*/

	int H, M;

	for (H = 0; H < 24; H++)
	{
		for (M = 0; M < 60; M++)
		{
			_putchar((H / 10) + '0');
			_putchar((H % 10) + '0');
			_putchar(':');
			_putchar((M / 10) + '0');
			_putchar((M % 10) + '0');
			_putchar('\n');
		}
	}

	/*

	while (hour < 3)
	{
		hour2 = 0;
		while (hour2 < 4)
		{
			minute = 0;
			while (minute < 6)
			{
				minute2 = 0;
				while (minute2 < 10)
				{
					_putchar(hour + '0');
					_putchar(hour2 + '0');
					_putchar(':');
					_putchar(minute + '0');
					_putchar(minute2 + '0');
					_putchar('\n');

					minute2++;
				}
				minute++;
			}
			hour2++;
		}

		hour++;
	}
	*/

}
