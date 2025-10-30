int sub_713C4()
{
  int result; // r0
  struct _IO_FILE *v1; // r4
  const char *v2; // r6
  const char *v3; // r0

  result = pthread_once(&dword_108268, (void (*)(void))sub_71364);
  if ( result )
  {
    v1 = stderr;
    v2 = (const char *)sub_7487C(isc_msgcat, 1, 110, "fatal error");
    v3 = (const char *)sub_7487C(isc_msgcat, 1, 101, "failed");
    _fprintf_chk(v1, 1, "%s:%d: %s: isc_once_do() %s.\n", "./../lib/isc/lib.c", 77, v2, v3);
    abort();
  }
  return result;
}
