int __fastcall sub_A2F18(int a1, char *a2)
{
  int v2; // r3
  char *v3; // r6
  unsigned int v4; // r7
  char *v5; // r6
  int v6; // r5
  int v7; // r0
  int v8; // t1
  char **v9; // r3
  char *v11; // r3
  int v12; // r2

  v2 = *(_DWORD *)(a1 + 1028);
  v3 = *(char **)(v2 + 208);
  if ( v3 )
  {
    v4 = *(_DWORD *)(v2 + 212);
    if ( !v4 )
      return 0;
  }
  else
  {
    v4 = 26;
    v3 = (char *)&unk_1A9DC0;
  }
  v5 = v3 - 2;
  v6 = 0;
  while ( 2 )
  {
    v8 = *((unsigned __int16 *)v5 + 1);
    v5 += 2;
    v7 = v8;
    v9 = &off_202A94;
    while ( *((unsigned __int16 *)v9 + 2) != v7 )
    {
      v9 += 8;
      if ( v9 == &off_202DD4 )
        goto LABEL_8;
    }
    if ( v9[4] == (char *)408 )
    {
      v11 = v9[7];
      v12 = (int)v11;
      if ( v11 )
        v12 = 1;
      if ( v11 != a2 )
        v12 = 0;
      if ( v12 )
        return 1;
    }
LABEL_8:
    if ( ++v6 < v4 )
      continue;
    return 0;
  }
}
