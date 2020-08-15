#ifndef _STRING_PLUS_H
#define _STRING_PLUS_H

/**
 * Helper function for determining if a string validly expresses a non-negative integer.
 * Feel free to use where needed (and to study it as an example).
 */
bool is_non_negative_numeral(char* numeral);


/**
 * This function takes the given string then copies the substring from `0` to `index - 1`
 * (or `0`, whichever is larger) to `left` and the substring from `index` to the end of
 * `string` to `right`. It is the responsibility of the caller to ensure that `left` and
 * `right` have enough space to safely copy the substrings to them.
 */
void split_string_at_index(char* string, int index, char* left, char* right);

#endif
