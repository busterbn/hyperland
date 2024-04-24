const char *colorname[] = {

  /* 8 normal colors */
  [0] = "#131216", /* black   */
  [1] = "#BDA16E", /* red     */
  [2] = "#64759C", /* green   */
  [3] = "#7488B0", /* yellow  */
  [4] = "#6A9DCD", /* blue    */
  [5] = "#9399AF", /* magenta */
  [6] = "#DEC6AE", /* cyan    */
  [7] = "#c6cddc", /* white   */

  /* 8 bright colors */
  [8]  = "#8a8f9a",  /* black   */
  [9]  = "#BDA16E",  /* red     */
  [10] = "#64759C", /* green   */
  [11] = "#7488B0", /* yellow  */
  [12] = "#6A9DCD", /* blue    */
  [13] = "#9399AF", /* magenta */
  [14] = "#DEC6AE", /* cyan    */
  [15] = "#c6cddc", /* white   */

  /* special colors */
  [256] = "#131216", /* background */
  [257] = "#c6cddc", /* foreground */
  [258] = "#c6cddc",     /* cursor */
};

/* Default colors (colorname index)
 * foreground, background, cursor */
 unsigned int defaultbg = 0;
 unsigned int defaultfg = 257;
 unsigned int defaultcs = 258;
 unsigned int defaultrcs= 258;
