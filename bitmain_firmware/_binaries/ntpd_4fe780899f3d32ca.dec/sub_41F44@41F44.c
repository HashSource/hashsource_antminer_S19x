int __fastcall sub_41F44(int a1, const char *a2)
{
  int result; // r0
  int v5; // r8
  unsigned int v6; // r9
  const char *v7; // r10
  const char *v8; // r0
  unsigned int v9; // [sp+14h] [bp-Ch] BYREF

  result = 2092;
  if ( stats_control )
  {
    sub_5F724(&v9);
    sub_2BE54((int)&dword_BCC1C, v9);
    v5 = dword_BCC1C;
    v6 = v9 / 0x15180;
    result = v9 - (_DWORD)&off_15180 * (v9 / 0x15180);
    v9 = result;
    if ( dword_BCC1C )
    {
      v7 = (const char *)sub_63804(result);
      v8 = (const char *)sub_6C2E8(a1);
      _fprintf_chk(v5, 1, "%lu %s %s %s\n", v6 + 15020, v7, v8, a2);
      return fflush((FILE *)dword_BCC1C);
    }
  }
  return result;
}
