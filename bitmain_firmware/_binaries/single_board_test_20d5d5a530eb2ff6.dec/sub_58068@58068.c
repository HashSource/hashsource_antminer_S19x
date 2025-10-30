unsigned int __fastcall sub_58068(int a1, unsigned int a2, char *a3, unsigned int a4, int c)
{
  unsigned int v9; // r5
  _DWORD s[44]; // [sp+10h] [bp-40D4h] BYREF
  _BYTE v12[16420]; // [sp+C0h] [bp-4024h] BYREF

  memset(s, 0, sizeof(s));
  s[18] = 100;
  s[22] = 5242880;
  if ( !c )
  {
    sub_4C11C(v12, 0x4020u);
    s[40] = v12;
    s[41] = 65537;
    return sub_57F2C((int)s, a1, a2, a3, a4, 0, 0);
  }
  if ( *(int *)(c + 32) <= 2 )
  {
    sub_4C11C(v12, 0x4020u);
    s[41] = 65537;
    s[40] = v12;
  }
  v9 = sub_57F2C((int)s, a1, a2, a3, a4, 0, c);
  if ( *(int *)(c + 32) <= 2 )
    return v9;
  if ( s[2] )
  {
    ((void (__fastcall *)(_DWORD, _DWORD))s[2])(s[3], s[40]);
    return v9;
  }
  free((void *)s[40]);
  return v9;
}
