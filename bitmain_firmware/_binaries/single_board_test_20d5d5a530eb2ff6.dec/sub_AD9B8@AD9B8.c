size_t __fastcall sub_AD9B8(size_t a1, char *s, int a3)
{
  int v4; // r1
  _DWORD *v5; // r4
  size_t v6; // r7
  size_t v7; // r5
  int v9; // r4
  int v10; // r0
  int v11; // r5
  const char *v12; // r6
  int v13; // [sp+4h] [bp-4h] BYREF

  v4 = a3 + 1;
  v5 = (_DWORD *)a1;
  if ( a3 == -1 )
  {
    a1 = strlen(s);
    v6 = a1;
    if ( !v5 )
      goto LABEL_10;
  }
  else
  {
    v6 = a3;
    if ( !a1 )
      goto LABEL_10;
  }
  a1 = sub_CEF10(&v13, s, v6);
  v7 = a1;
  if ( a1 )
  {
    if ( !sub_CDD6C(v13) )
      v7 = 0;
    sub_CE00C(v13);
    *v5 = v13;
    return v7;
  }
  *v5 = 0;
LABEL_10:
  v9 = sub_AD8E0(a1, v4, a3);
  while ( v9-- > 0 )
  {
    v10 = sub_AD8FC(v9);
    v11 = v10;
    if ( (*(_DWORD *)(v10 + 8) & 1) == 0 )
    {
      v12 = *(const char **)(v10 + 12);
      if ( v6 == strlen(v12) && !strncasecmp(v12, s, v6) )
        return v11;
    }
  }
  return 0;
}
