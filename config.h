#define CMDLENGTH 45
#define DELIMITER " | "
// #define CLICKABLE_BLOCKS

const Block blocks[] = {
	BLOCK("echo \" $(amixer sget Master | awk -F\"[][]\" '/Left:/ { print $2 }')\"", 0, 1), // Volume
	BLOCK("date", 1, 0)                                                        // Time & Date
};
