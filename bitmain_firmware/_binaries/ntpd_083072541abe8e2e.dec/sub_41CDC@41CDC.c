int __fastcall sub_41CDC(int result, int a2)
{
  double v2; // d0
  double v3; // d1
  double v4; // d2
  double v5; // d3
  int v7; // r5
  int v8; // r8
  unsigned int v9; // r9
  const char *v10; // r10
  const char *v11; // r0
  unsigned int v12; // [sp+34h] [bp-Ch] BYREF

  if ( stats_control )
  {
    v7 = result;
    sub_5F724(&v12);
    sub_2BE54((int)&dword_BCBEC, v12);
    v8 = dword_BCBEC;
    v9 = v12 / 0x15180;
    result = v12 - (_DWORD)&off_15180 * (v12 / 0x15180);
    v12 = result;
    if ( dword_BCBEC )
    {
      v10 = (const char *)sub_63804(result);
      v11 = (const char *)sub_6C2E8(v7);
      _fprintf_chk(v8, 1, "%lu %s %s %x %.9f %.9f %.9f %.9f\n", v9 + 15020, v10, v11, a2, v2, v3, v4, v5);
      return fflush((FILE *)dword_BCBEC);
    }
  }
  return result;
}
