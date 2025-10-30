time_t __fastcall sub_68BD4(int *a1)
{
  time_t result; // r0
  int v3; // r3
  time_t v4; // r4
  int v5; // r4

  result = time(0);
  v3 = dword_108228;
  *a1 = dword_108228;
  v4 = result;
  if ( result >= v3 )
  {
    if ( v3 )
      result = _res_init();
    v5 = v4 + 60;
    *a1 = v5;
    dword_108228 = v5;
  }
  return result;
}
