int main(void)
{
    int month;
    int day;
    int year;
	int month;
	int day;
	int year;

    month = 4;
    day = 01;
    year = 1997;
	month = 02;
	day = 29;
	year = 2000;

    printf("Date: %02d/%02d/%04d\n", month, day, year);
	printf("Date: %02d/%02d/%04d\n", month, day, year);

    day = convert_day(month, day);
	day = convert_day(month, day);

    print_remaining_days(month, day, year);
	print_remaining_days(month, day, year);

    return (0);
	return (0);
}
