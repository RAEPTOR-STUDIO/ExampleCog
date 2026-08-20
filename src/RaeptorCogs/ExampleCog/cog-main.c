#include <stdio.h>

const char *cog_version() { return "1.0.0"; }
const char *cog_name() { return "ExampleCog"; }
void logger_log(FILE *out, const char *message) {
  fputc('[', out);
  fputs(cog_name(), out);
  fputs("] ", out);
  fputs(message, out);
  fputc('\n', out);
}
