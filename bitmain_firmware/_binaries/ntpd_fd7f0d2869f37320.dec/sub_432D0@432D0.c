int __fastcall sub_432D0(int a1, const char *a2)
{
  int result; // r0
  int v5; // r7
  unsigned int v6; // r8
  const char *v7; // r9
  const char *v8; // r0
  const char *v9; // r0
  unsigned int v10; // [sp+14h] [bp-10h] BYREF

  result = 2092;
  if ( stats_control )
  {
    sub_6055C(&v10);
    sub_2C1C4((int)&dword_BDC8C, v10);
    v5 = dword_BDC8C;
    result = v10 - (_DWORD)&loc_15180 * (v10 / 0x15180);
    v6 = v10 / 0x15180 + 15020;
    v10 = result;
    if ( dword_BDC8C )
    {
      if ( a1 )
      {
        v7 = (const char *)sub_6474C(result);
        v8 = (const char *)sub_6D2C0(a1);
        _fprintf_chk(v5, 1, "%lu %s %s %s\n", v6, v7, v8, a2);
      }
      else
      {
        v9 = (const char *)sub_6474C(result);
        _fprintf_chk(v5, 1, "%lu %s 0.0.0.0 %s\n", v6, v9, a2);
      }
      return fflush((FILE *)dword_BDC8C);
    }
  }
  return result;
}
