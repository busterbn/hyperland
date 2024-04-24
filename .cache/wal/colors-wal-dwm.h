static const char norm_fg[] = "#c6cddc";
static const char norm_bg[] = "#131216";
static const char norm_border[] = "#8a8f9a";

static const char sel_fg[] = "#c6cddc";
static const char sel_bg[] = "#64759C";
static const char sel_border[] = "#c6cddc";

static const char urg_fg[] = "#c6cddc";
static const char urg_bg[] = "#BDA16E";
static const char urg_border[] = "#BDA16E";

static const char *colors[][3]      = {
    /*               fg           bg         border                         */
    [SchemeNorm] = { norm_fg,     norm_bg,   norm_border }, // unfocused wins
    [SchemeSel]  = { sel_fg,      sel_bg,    sel_border },  // the focused win
    [SchemeUrg] =  { urg_fg,      urg_bg,    urg_border },
};
