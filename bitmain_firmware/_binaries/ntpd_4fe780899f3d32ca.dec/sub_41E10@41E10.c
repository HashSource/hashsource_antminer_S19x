int __fastcall sub_41E10(int result)
{
  double v1; // d0
  double v2; // d1
  double v3; // d2
  double v4; // d3
  int v5; // r5
  int v6; // r7
  unsigned int v7; // r8
  const char *v8; // r0
  unsigned int v9; // [sp+34h] [bp-Ch] BYREF

  if ( stats_control )
  {
    v5 = result;
    sub_5F724(&v9);
    sub_2BE54((int)&dword_BCC04, v9);
    v6 = dword_BCC04;
    v7 = v9 / 0x15180;
    result = v9 - (_DWORD)&off_15180 * (v9 / 0x15180);
    v9 = result;
    if ( dword_BCC04 )
    {
      v8 = (const char *)sub_63804(result);
      _fprintf_chk(v6, 1, "%lu %s %.9f %.3f %.9f %.6f %d\n", v7 + 15020, v8, v1, v2 * 1000000.0, v3, v4 * 1000000.0, v5);
      return fflush((FILE *)dword_BCC04);
    }
  }
  return result;
}
