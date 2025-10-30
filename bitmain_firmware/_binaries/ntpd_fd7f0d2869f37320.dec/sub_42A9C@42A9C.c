int __fastcall sub_42A9C(int a1, int a2)
{
  double v2; // d0
  double v3; // d1
  double v4; // d2
  double v5; // d3
  int result; // r0
  int v9; // r9
  __int64 v10; // r10
  const char *v11; // r0
  unsigned int v12; // [sp+34h] [bp-10h] BYREF

  result = 2092;
  if ( stats_control )
  {
    sub_6055C(&v12);
    sub_2C1C4((int)&dword_BDBFC, v12);
    v9 = dword_BDBFC;
    v10 = 3257812231LL * v12;
    result = v12 - (_DWORD)&loc_15180 * (v12 / 0x15180);
    v12 = result;
    if ( dword_BDBFC )
    {
      LODWORD(v10) = sub_6474C(result);
      v11 = (const char *)sub_6D2C0(a1);
      _fprintf_chk(
        v9,
        1,
        "%lu %s %s %x %.9f %.9f %.9f %.9f\n",
        HIWORD(HIDWORD(v10)) + 15020,
        (const char *)v10,
        v11,
        a2,
        v2,
        v3,
        v4,
        v5);
      return fflush((FILE *)dword_BDBFC);
    }
  }
  return result;
}
