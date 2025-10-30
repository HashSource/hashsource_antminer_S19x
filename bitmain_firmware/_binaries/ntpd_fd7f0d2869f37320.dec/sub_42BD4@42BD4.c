int __fastcall sub_42BD4(int result)
{
  double v1; // d0
  double v2; // d1
  double v3; // d2
  double v4; // d3
  int v5; // r5
  int v6; // r8
  unsigned int v7; // r7
  const char *v8; // r0
  unsigned int v9; // [sp+34h] [bp-Ch] BYREF

  if ( stats_control )
  {
    v5 = result;
    sub_6055C(&v9);
    sub_2C1C4((int)&dword_BDC14, v9);
    v6 = dword_BDC14;
    result = v9 - (_DWORD)&loc_15180 * (v9 / 0x15180);
    v7 = v9 / 0x15180 + 15020;
    v9 = result;
    if ( dword_BDC14 )
    {
      v8 = (const char *)sub_6474C(result);
      _fprintf_chk(v6, 1, "%lu %s %.9f %.3f %.9f %.6f %d\n", v7, v8, v1, v2 * 1000000.0, v3, v4 * 1000000.0, v5);
      return fflush((FILE *)dword_BDC14);
    }
  }
  return result;
}
