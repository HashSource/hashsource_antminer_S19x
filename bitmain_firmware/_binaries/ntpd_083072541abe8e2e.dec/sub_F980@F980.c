_DWORD *__fastcall sub_F980(const char *a1, int a2, int a3)
{
  char *v6; // r0
  _DWORD *result; // r0

  v6 = strchr(a1, 61);
  if ( v6 )
    *v6 = 0;
  result = (_DWORD *)sub_63BA4(0, 16, 0, 1);
  result[1] = a1;
  result[2] = a2;
  result[3] = a3;
  return result;
}
