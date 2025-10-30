int __fastcall sub_4241C(int result)
{
  const char *v1; // r5
  int v2; // r7
  unsigned int v3; // r8
  const char *v4; // r0
  unsigned int v5; // [sp+Ch] [bp-Ch] BYREF

  if ( stats_control )
  {
    v1 = (const char *)result;
    sub_5F724(&v5);
    sub_2BE54((int)&dword_BCC64, v5);
    v2 = dword_BCC64;
    v3 = v5 / 0x15180;
    result = v5 - (_DWORD)&off_15180 * (v5 / 0x15180);
    v5 = result;
    if ( dword_BCC64 )
    {
      v4 = (const char *)sub_63804(result);
      _fprintf_chk(v2, 1, "%lu %s %s\n", v3 + 15020, v4, v1);
      return fflush((FILE *)dword_BCC64);
    }
  }
  return result;
}
