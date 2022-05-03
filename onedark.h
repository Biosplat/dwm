
// One Dark
// static const char norm_fg[] = "#ABB2BF";
// static const char norm_bg[] = "#1E2127";
// static const char norm_border[] = "#303640";

// Tokyo Night
// static const char norm_fg[] = "#ACB0D0";
// static const char norm_bg[] = "#1A1B26";
// static const char norm_border[] = "#4E5173";

// Catppuccin
static const char norm_fg[] = "#D9E0EE";
static const char norm_bg[] = "#1E1E2E";
static const char norm_border[] = "#302D41";

// One Dark
// static const char sel_fg[] = "#ABB2BF";
// static const char sel_bg[] = "#303640";
// static const char sel_border[] = "#61AFEF";

// Tokyo Night
// static const char sel_fg[] = "#ACB0D0";
// static const char sel_bg[] = "#4E5173";
// static const char sel_border[] = "#7AA2F7";

// Catppuccin
static const char sel_fg[] = "#1E1E2E";
static const char sel_bg[] = "#96CDFB";
static const char sel_border[] = "#96CDFB";

// One Dark
// static const char urg_fg[] = "#61AFEF";
// static const char urg_bg[] = "#E06C75";
// static const char urg_border[] = "#E06C75";

// Tokyo Night
// static const char urg_fg[] = "#7AA2F7";
// static const char urg_bg[] = "#F7768E";
// static const char urg_border[] = "#F7768E";

// Catppuccin
static const char urg_fg[] = "#96CDFB";
static const char urg_bg[] = "#F28FAD";
static const char urg_border[] = "#F28FAD";

static const char *colors[][3]      = {
    /*               fg           bg         border                         */
    [SchemeNorm] = { norm_fg,     norm_bg,   norm_border }, // unfocused wins
    [SchemeSel]  = { sel_fg,      sel_bg,    sel_border },  // the focused win
    [SchemeUrg] =  { urg_fg,      urg_bg,    urg_border },  // new window created
};
