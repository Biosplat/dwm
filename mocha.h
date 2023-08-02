static const char norm_fg[] = "#cdd6f4";
static const char norm_bg[] = "#0f111a";
static const char norm_border[] = "#6c7086";

static const char sel_fg[] = "#0f111a";
static const char sel_bg[] = "#b4befe";
static const char sel_border[] = "#b4befe";

static const char urg_fg[] = "#0f111a";
static const char urg_bg[] = "#f9e2af";
static const char urg_border[] = "#f9e2af";

const char rosewater[] = "#f5e0dc";
const char flamingo[] = "#f2cdcd";
const char pink[] = "#f5c2e7";
const char mauve[] = "#cba6f7";
const char red[] = "#f38ba8";
const char maroon[] = "#eba0ac";
const char peach[] = "#fab387";
const char yellow[] = "#f9e2af";
const char green[] = "#a6e3a1";
const char teal[] = "#94e2d5";
const char sky[] = "#89dceb";
const char sapphire[] = "#74c7ec";
const char blue[] = "#89b4fa";
const char lavender[] = "#b4befe";
const char text[] = "#cdd6f4";
const char subtext1[] = "#bac2de";
const char subtext0[] = "#a6adc8";
const char overlay2[] = "#9399b2";
const char overlay1[] = "#7f849c";
const char overlay0[] = "#6c7086";
const char surface2[] = "#585b70";
const char surface1[] = "#45475a";
const char surface0[] = "#313244";
const char base[] = "#1e1e2e";
const char mantle[] = "#181825";
const char crust[] = "#11111b";

static const char *colors[][3]      = {
    /*               fg           bg         border                         */
    // [SchemeNorm] = { norm_fg,     norm_bg,   norm_border }, // unfocused wins
    // [SchemeSel]  = { sel_fg,      sel_bg,    sel_border },  // the focused win
    // [SchemeUrg] =  { urg_fg,      urg_bg,    urg_border },  // new window created

    // [SchemeNorm] = { text, base, overlay0 },  // unfocused wins
    // [SchemeSel]  = { base, blue, lavender },  // the focused win
    // [SchemeUrg] =  { base, yellow, yellow },  // new window created
    [SchemeNorm] = { text, base, overlay0 },  // unfocused wins
    [SchemeSel]  = { base, lavender, lavender },  // the focused win
    [SchemeUrg] =  { base, red, red },  // new window created
    
};
