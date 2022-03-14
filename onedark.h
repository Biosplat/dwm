static const char norm_fg[] = "#ABB2BF";
static const char norm_bg[] = "#1E2127";
static const char norm_border[] = "#303640";

// wais it
static const char sel_fg[] = "#ABB2BF";
static const char sel_bg[] = "#303640";
static const char sel_border[] = "#61AFEF";

static const char urg_fg[] = "#61AFEF";
static const char urg_bg[] = "#E06C75";
static const char urg_border[] = "#E06C75";

static const char *colors[][3]      = {
    /*               fg           bg         border                         */
    [SchemeNorm] = { norm_fg,     norm_bg,   norm_border }, // unfocused wins
    [SchemeSel]  = { sel_fg,      sel_bg,    sel_border },  // the focused win
    [SchemeUrg] =  { urg_fg,      urg_bg,    urg_border },
};
