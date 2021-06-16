/* user and group to drop privileges to */
static const char *user  = "nobody";
static const char *group = "nogroup";

static const char *colorname[NUMCOLS] = {
	[INIT] =   "#1a1b1d",     /* after initialization */
	[INPUT] =  "#a03e3e",   /* during input */
	[FAILED] = "#85678f",   /* wrong password */
};

/* treat a cleared input like a wrong password (color) */
static const int failonclear = 1;
