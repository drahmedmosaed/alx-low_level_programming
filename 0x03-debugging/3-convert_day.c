#include"main.h"

/**
*convert_day-convertsdayofmonthtodayofyear,withoutaccounting
*forleapyear
*@month:monthinnumberformat
*@day:dayofmonth
*Return:dayofyear
*/

int convert_day(int month, int day)
{
switch (month)
{
case2:
day = 31 + day;
break;
case3:
day = 59 + day;
break;
case4:
day = 90 + day;
break;
case5:
day = 120 + day;
break;
case6:
day = 151 + day;
break;
case7:
day = 181 + day;
break;
case8:
day = 212 + day;
break;
case9:
day = 243 + day;
break;
case10:
day = 273 + day;
break;
case11:
day = 304 + day;
break;
case12:
day = 334 + day;
break;
default:
break;
}
return (day);
}
