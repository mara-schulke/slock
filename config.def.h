/* user and group to drop privileges to */
static const char *user  = "nobody";
static const char *group = "nogroup";

static const char *colorname[NUMCOLS] = {
	[INIT] =   "#040404",   /* after initialization */
	[INPUT] =  "#edc3e0",   /* during input */
	[FAILED] = "#f68b95",   /* wrong password */
};

/* treat a cleared input like a wrong password (color) */
static const int failonclear = 0;
