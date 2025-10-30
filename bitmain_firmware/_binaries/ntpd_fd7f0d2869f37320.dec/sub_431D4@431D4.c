int __fastcall sub_431D4(int result)
{
  const char *v1; // r5
  int v2; // r8
  unsigned int v3; // r7
  const char *v4; // r0
  unsigned int v5; // [sp+Ch] [bp-Ch] BYREF

  if ( stats_control )
  {
    v1 = (const char *)result;
    sub_6055C(&v5);
    sub_2C1C4((int)&dword_BDC74, v5);
    v2 = dword_BDC74;
    result = v5 - (_DWORD)&loc_15180 * (v5 / 0x15180);
    v3 = v5 / 0x15180 + 15020;
    v5 = result;
    if ( dword_BDC74 )
    {
      v4 = (const char *)sub_6474C(result);
      _fprintf_chk(v2, 1, "%lu %s %s\n", v3, v4, v1);
      return fflush((FILE *)dword_BDC74);
    }
  }
  return result;
}
