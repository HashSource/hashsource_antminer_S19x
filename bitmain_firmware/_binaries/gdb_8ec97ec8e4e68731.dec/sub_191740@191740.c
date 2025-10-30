int __fastcall sub_191740(const char *a1)
{
  int result; // r0

  result = *((_DWORD *)sub_1911C0() + 1);
  if ( result )
    return strcmp(*(const char **)(result + 4), a1) == 0;
  return result;
}
