int __fastcall sub_14E34(const char *a1, int a2, int a3, int a4)
{
  struct _IO_FILE *v8; // r10
  const char *v9; // r0

  v8 = stderr;
  v9 = (const char *)sub_1103C((_DWORD *)isc_msgcat, 1, 110, (int)"fatal error");
  _fprintf_chk(v8, 1, "%s:%d: %s: ", a1, a2, v9);
  _vfprintf_chk(stderr, 1, a3, a4);
  fputc(10, stderr);
  return fflush(stderr);
}
