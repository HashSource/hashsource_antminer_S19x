int __fastcall sub_7E3DC(_DWORD *a1, _DWORD *a2)
{
  int v3; // r5
  int v4; // r2
  int v5; // r3
  bool v6; // zf
  unsigned int v7; // r3
  _BYTE *v9; // r2
  int v10; // r2
  int v11; // r3
  _BYTE *v12; // r2
  int v13; // r0
  int v14; // r0

  v3 = *a2;
  v4 = a2[3];
  v5 = *(_DWORD *)(*a2 + 16) & 0xFFFFF00 | a2[2];
  v6 = (a2[2] & 0x20) == 0;
  a2[2] = v5;
  if ( !v6 || (v5 & 0xF000) == 0 )
  {
    if ( v4 == 1 )
    {
      ++a1[5];
      return 0;
    }
    if ( a2[1] )
    {
      fprintf(stderr, off_B84EC[0], a1[6], *(_DWORD *)(v3 + 52));
      return -1;
    }
LABEL_13:
    a1[5] = 0;
    return 0;
  }
  if ( (v5 & 0x10000) != 0 )
  {
    if ( v4 == 1 )
    {
      v12 = (_BYTE *)(a1[5] + 1);
      a1[5] = v12;
      if ( *v12 )
      {
LABEL_29:
        a2[1] = v12;
        goto LABEL_13;
      }
      v11 = a1[4];
      v12 = *(_BYTE **)(a1[2] + 4 * v11);
      if ( !v12 || *v12 == 45 )
      {
        a2[1] = 0;
        goto LABEL_13;
      }
    }
    else
    {
      if ( v4 != 2 )
        sub_7CEC0((int)off_B8494[0]);
      if ( a2[1] )
        goto LABEL_13;
      if ( (a1[3] & 3) == 0 )
        goto LABEL_13;
      v11 = a1[4];
      v12 = *(_BYTE **)(a1[2] + 4 * v11);
      if ( !v12 || *v12 == 45 )
        goto LABEL_13;
    }
    a1[4] = v11 + 1;
    goto LABEL_29;
  }
  v7 = a1[4];
  if ( v4 == 1 )
  {
    v9 = (_BYTE *)(a1[5] + 1);
    a1[5] = v9;
    if ( !*v9 )
    {
      v10 = a1[2];
      a1[4] = v7 + 1;
      v9 = *(_BYTE **)(v10 + 4 * v7++);
      a1[5] = v9;
    }
    a2[1] = v9;
  }
  else if ( v4 == 2 && !a2[1] )
  {
    v13 = a1[2];
    a1[4] = v7 + 1;
    v14 = *(_DWORD *)(v13 + 4 * v7++);
    a2[1] = v14;
  }
  if ( a1[1] >= v7 )
    goto LABEL_13;
  fprintf(stderr, off_B84E0[0], a1[6], *(_DWORD *)(v3 + 52));
  return -1;
}
