int __fastcall sub_14D90(const char *a1, int a2, int a3, int a4)
{
  _fprintf_chk(stderr, 1, "%s:%d: ", a1, a2);
  _vfprintf_chk(stderr, 1, a3, a4);
  fputc(10, stderr);
  return fflush(stderr);
}
