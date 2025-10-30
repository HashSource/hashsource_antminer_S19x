int __fastcall sub_45590(_DWORD *a1, char *s1, int a3)
{
  int v4; // r8
  int v5; // r0
  int v6; // r9
  int v9; // r10
  _DWORD *v10; // r3

  v4 = a1[1];
  if ( v4 <= 0 )
    return -1;
  v5 = a1[2];
  if ( v5 != 1 )
    return -1;
  v6 = a1[5];
  if ( !v6 || v4 <= 2 )
    return -1;
  v9 = 2;
  while ( 1 )
  {
    v10 = &a1[5 * v5];
    if ( v10[2] == 3 )
      break;
    if ( v4 <= v5 )
      goto LABEL_7;
    v5 = sub_444F8((int)a1, v5);
    if ( v5 < 0 )
      return -1;
    if ( v4 <= v5 )
      goto LABEL_7;
    v5 = sub_444F8((int)a1, v5);
LABEL_12:
    if ( v5 < 0 )
      return -1;
LABEL_7:
    if ( --v6 )
    {
      v9 = v5 + 1;
      if ( v4 > v5 + 1 )
        continue;
    }
    return -1;
  }
  if ( strcmp(s1, (const char *)(*a1 + v10[3])) )
  {
    v5 = sub_444F8((int)a1, v9);
    goto LABEL_12;
  }
  if ( a1[5 * v9 + 2] != a3 )
    return -1;
  return v9;
}
