void switch2(long x, long *dest)
{
	long val = 0;
	switch (x) {
	case -1:
		val = -1;
		break;
	case 7:
	case 0:
		val = 70;
		break;
	case 1:
		val = 1;
		break;
	case 2:
	case 4:
		val = 42;
		break;
	case 5:
		val = 5;
		break;
	default:
		val = 8;
	}
	*dest = val;
}
