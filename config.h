//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
  {"  󰓇   ", "~/.suckless/dwmblocks/scripts/spotify.sh || echo 'Not running'",		5,	0},
	{"󰋑   ",   "~/.suckless/dwmblocks/scripts/cpu.sh",				10,	0},
	{"󰋑   ",   "~/.suckless/dwmblocks/scripts/memory.sh",				10,	0},
	{"󰕾   ",   "~/.suckless/dwmblocks/scripts/volume.sh",				1,	0},
  {"󰃭   ", "TZ=America/New_York date '+%b %d %a, %Y'", 30, 0},
  {"󰥔   ", "TZ=America/New_York date '+%R'", 5, 0},
  {"󰁹   ", "~/.suckless/dwmblocks/scripts/battery.sh", 					10,	0},
};

//Sets delimiter between status commands. NULL character ('\0') means no delimiter.
static char delim[] = "    |    ";
static unsigned int delimLen = 9;

// Have dwmblocks automatically recompile and run when you edit this file in
// vim with the following line in your vimrc/init.vim:

// autocmd BufWritePost ~/.local/src/dwmblocks/config.h !cd ~/.local/src/dwmblocks/; sudo make install && { killall -q dwmblocks;setsid dwmblocks & }
