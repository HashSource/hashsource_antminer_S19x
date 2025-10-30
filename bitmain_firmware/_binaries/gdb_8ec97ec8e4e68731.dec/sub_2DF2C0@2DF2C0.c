bool __fastcall sub_2DF2C0(int a1, const char **a2)
{
  _DWORD *v2; // r3
  const char **v3; // r2
  int v5; // r0
  const char **v7; // r0

  v2 = *(_DWORD **)(a1 + 28);
  if ( (const char **)v2[51] == a2 )
    return 0;
  v3 = (const char **)v2[27];
  if ( v3 )
    return a2 != v3 && a2 != (const char **)v2[28];
  v5 = v2[14];
  if ( !v5 )
    return 0;
  v7 = sub_2AD864(v5, *a2);
  return v7 && v7[15] == (const char *)a2;
}
