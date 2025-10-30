time_t __fastcall sub_67CA8(int *a1)
{
  time_t result; // r0
  int v3; // r3
  bool v4; // cc
  time_t v5; // r4
  int v6; // r4

  result = time(0);
  v3 = dword_107204;
  v4 = result < dword_107204;
  *a1 = dword_107204;
  if ( !v4 )
  {
    v5 = result;
    if ( v3 )
      result = _res_init();
    v6 = v5 + 60;
    *a1 = v6;
    dword_107204 = v6;
  }
  return result;
}
