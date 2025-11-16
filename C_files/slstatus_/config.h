const unsigned int interval = 1000;
static const char unknown_str[] = "n/a";
#define MAXLEN 2048

static const struct arg args[] = {
    { datetime,     "| Now - %s | " , "%a-%d-%b %H:%M" },
    { run_command,  "Volume - %s%% | " , "pamixer --get-volume" },
    { run_command,  "Light - %s%% | " , "xbacklight -get | awk '{print int($1)}'" },
    { wifi_essid,   "Wifi - %s | " , "wlp2s0" },
    { battery_perc, "Power - %s%%" , "BAT0" },
    { battery_state," %s |", "BAT0" },
};

