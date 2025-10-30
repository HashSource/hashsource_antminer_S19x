int __fastcall sub_2E578(const char *a1, _DWORD *a2, int a3, int a4)
{
  int v7; // r9
  FILE *v10; // r0
  FILE *v11; // r6
  _DWORD v12[27]; // [sp+0h] [bp-70h] BYREF

  if ( !a1 || !*a1 )
    return 0;
  v7 = _xstat64(3, a1, v12);
  if ( v7 )
  {
    if ( a4 )
      sub_64E00(3, "%s ('%s'): stat failed: %m", "leapsecond file", a1);
    return 0;
  }
  if ( a2 )
  {
    if ( !a3 && a2[20] == v12[20] && a2[22] == v12[22] )
      return 0;
    memcpy(a2, v12, 0x68u);
  }
  v10 = (FILE *)fopen64(a1, "r");
  v11 = v10;
  if ( v10 )
  {
    v7 = sub_2E298(v10, a1, a4);
    fclose(v11);
    return v7;
  }
  if ( a4 )
  {
    sub_64E00(3, "%s ('%s'): open failed: %m", "leapsecond file", a1);
    return v7;
  }
  return 0;
}
