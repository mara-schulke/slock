/* user and group to drop privileges to */
static const char *user  = "nobody";
static const char *group = "nogroup";

static const char *colorname[NUMCOLS] = {
	[INIT] =   "#2d262c",   /* after initialization */
	[INPUT] =  "#edc3e0",   /* during input */
	[FAILED] = "#ffc8ae",   /* wrong password */
};

/* treat a cleared input like a wrong password (color) */
static const int failonclear = 0;
