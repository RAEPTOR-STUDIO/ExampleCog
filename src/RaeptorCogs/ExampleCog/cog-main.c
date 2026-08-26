#include <RaeptorCogs/Cog/function_registry.h>
#include <RaeptorCogs/Cog/info.h>
#include <stdio.h>

void logger_log(FILE *out, const char *message) {
  fputc('[', out);
  fputs(cog_name(), out);
  fputs("] ", out);
  fputs(message, out);
  fputc('\n', out);
}

void cog_on_attach(void) {
  fn_registry->bind("logger_log", (void *)logger_log);
};
