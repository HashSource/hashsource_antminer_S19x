int __fastcall sub_42D0C(int a1, const char *a2)
{
  int result; // r0
  int v5; // r9
  __int64 v6; // r10
  const char *v7; // r0
  unsigned int v8; // [sp+14h] [bp-10h] BYREF

  result = 2092;
  if ( stats_control )
  {
    sub_6055C(&v8);
    sub_2C1C4((int)&dword_BDC2C, v8);
    v5 = dword_BDC2C;
    v6 = 3257812231LL * v8;
    result = v8 - (_DWORD)&loc_15180 * (v8 / 0x15180);
    v8 = result;
    if ( dword_BDC2C )
    {
      LODWORD(v6) = sub_6474C(result);
      v7 = (const char *)sub_6D2C0(a1);
      _fprintf_chk(v5, 1, "%lu %s %s %s\n", HIWORD(HIDWORD(v6)) + 15020, (const char *)v6, v7, a2);
      return fflush((FILE *)dword_BDC2C);
    }
  }
  return result;
}
