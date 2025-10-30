int __fastcall sub_7F820(_DWORD *a1, _DWORD *a2)
{
  int v2; // r5
  int v3; // r12
  int v4; // r3
  int v5; // r3
  unsigned int v6; // r3
  int v7; // r3
  int v9; // r2
  bool v10; // zf
  int v11; // r3
  _BYTE *v12; // r2
  int v13; // r2
  int v14; // r12

  v2 = *a2;
  v3 = 2092;
  v4 = *(_DWORD *)(*a2 + 16) & 0xFFFFF00 | a2[2];
  v10 = (a2[2] & 0x20) == 0;
  a2[2] = v4;
  if ( v10 && (v4 & 0xF000) != 0 )
  {
    v10 = (v4 & 0x10000) == 0;
    v5 = a2[3];
    if ( !v10 )
    {
      if ( v5 == 1 )
      {
        v12 = (_BYTE *)(a1[5] + 1);
        a1[5] = v12;
        if ( *v12 )
        {
LABEL_34:
          a2[1] = v12;
LABEL_11:
          v7 = 0;
          goto LABEL_14;
        }
        v11 = a1[4];
        v12 = *(_BYTE **)(a1[2] + 4 * v11);
        if ( !v12 || *v12 == 45 )
        {
          a2[1] = 0;
          goto LABEL_11;
        }
      }
      else
      {
        if ( v5 != 2 )
          sub_7E31C((int)off_B9498);
        if ( a2[1] )
          goto LABEL_11;
        if ( (a1[3] & 3) == 0 )
          goto LABEL_11;
        v11 = a1[4];
        v12 = *(_BYTE **)(a1[2] + 4 * v11);
        if ( !v12 || *v12 == 45 )
          goto LABEL_11;
      }
      a1[4] = v11 + 1;
      goto LABEL_34;
    }
    if ( v5 == 1 )
    {
      v9 = a1[5] + 1;
      a1[5] = v9;
      v10 = *(_BYTE *)v9 == 0;
      if ( *(_BYTE *)v9 )
      {
        v6 = a1[4];
      }
      else
      {
        v9 = a1[4];
        v3 = a1[2];
        v6 = v9 + 1;
      }
      if ( v10 )
      {
        a1[4] = v6;
        v9 = *(_DWORD *)(v3 + 4 * v9);
        a1[5] = v9;
      }
    }
    else
    {
      if ( v5 != 2 || a2[1] )
      {
        v6 = a1[4];
        goto LABEL_10;
      }
      v13 = a1[4];
      v14 = a1[2];
      v6 = v13 + 1;
      a1[4] = v13 + 1;
      v9 = *(_DWORD *)(v14 + 4 * v13);
    }
    a2[1] = v9;
LABEL_10:
    if ( v6 > a1[1] )
    {
      fprintf(stderr, off_B94E4, a1[6], *(_DWORD *)(v2 + 52));
      return -1;
    }
    goto LABEL_11;
  }
  if ( a2[3] == 1 )
  {
    v7 = 0;
    ++a1[5];
    return v7;
  }
  v7 = a2[1];
  if ( v7 )
  {
    fprintf(stderr, off_B94F0, a1[6], *(_DWORD *)(v2 + 52));
    return -1;
  }
LABEL_14:
  a1[5] = 0;
  return v7;
}
