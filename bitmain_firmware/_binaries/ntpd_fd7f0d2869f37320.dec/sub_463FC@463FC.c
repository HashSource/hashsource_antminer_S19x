int __fastcall sub_463FC(_DWORD *a1, char *s1, int a3)
{
  int v4; // r5
  int v6; // r1
  int v7; // r4
  int v9; // r10
  int v10; // r0

  v4 = a1[1];
  if ( v4 <= 0 )
    return -1;
  v6 = a1[2];
  if ( v6 != 1 )
    return -1;
  v7 = a1[5];
  if ( !v7 || v4 <= 2 )
    return -1;
  v9 = 2;
  while ( 1 )
  {
    if ( a1[5 * v6 + 2] != 3 )
    {
      if ( v4 <= v6 )
        goto LABEL_7;
      v10 = sub_45330((int)a1, v6);
      v6 = v10;
      if ( v10 < 0 )
        return -1;
      if ( v4 <= v10 )
        goto LABEL_7;
LABEL_12:
      v6 = sub_45330((int)a1, v6);
      if ( v6 < 0 )
        return -1;
      goto LABEL_7;
    }
    if ( !strcmp(s1, (const char *)(*a1 + a1[5 * v6 + 3])) )
      break;
    v6 = v9;
    if ( v4 > v9 )
      goto LABEL_12;
LABEL_7:
    if ( --v7 )
    {
      v9 = v6 + 1;
      if ( v4 > v6 + 1 )
        continue;
    }
    return -1;
  }
  if ( a3 < 0 )
    return v9;
  if ( a3 == a1[5 * v9 + 2] )
    return v9;
  return -1;
}
