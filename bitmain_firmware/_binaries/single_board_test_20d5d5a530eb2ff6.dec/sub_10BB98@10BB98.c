int __fastcall sub_10BB98(int *a1, int a2)
{
  int v2; // r6
  _DWORD *v3; // lr
  _DWORD *v4; // r2
  int v5; // r3
  int v7; // r7
  _DWORD *v8; // r4
  int v9; // r2

  v2 = *a1;
  if ( *a1 <= 0 )
    return 0;
  v3 = (_DWORD *)a1[1];
  if ( a2 != *v3 )
  {
    v4 = v3 + 1;
    v5 = 0;
    while ( 1 )
    {
      ++v5;
      v8 = v4;
      v7 = v5;
      ++v4;
      if ( v5 == v2 )
        return 0;
      if ( *v8 == a2 )
        goto LABEL_8;
    }
  }
  v7 = 0;
  v8 = (_DWORD *)a1[1];
  v5 = 0;
LABEL_8:
  v9 = v2 - 1;
  if ( v2 - 1 != v5 )
  {
    memmove(v8, &v3[v7 + 1], 4 * (v2 - v5 - 1));
    v9 = *a1 - 1;
  }
  *a1 = v9;
  return a2;
}
