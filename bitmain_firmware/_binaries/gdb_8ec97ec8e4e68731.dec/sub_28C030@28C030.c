int __fastcall sub_28C030(int a1)
{
  _DWORD *v2; // r0
  int v3; // r3
  _DWORD *v4; // r4
  const char *v5; // r3
  _DWORD *v6; // r5
  _DWORD *v7; // r3
  size_t v8; // r0
  _DWORD *v9; // r2
  int i; // r0
  int v11; // t1
  char *v12; // r0
  int v13; // lr
  int v14; // r9
  _DWORD **v15; // r3
  char *v16; // r2
  _DWORD *v17; // t1
  int v18; // r3
  _BYTE *v19; // r0
  int v20; // r3
  const char *v21; // r0
  size_t v22; // r0
  int v23; // r1
  const char *v24; // r0
  int v25; // r1
  size_t v27; // r0
  char *v28; // r0
  const char *v29; // r1

  dword_48AAA0 |= 0x80u;
  v2 = sub_28B528(1, 0);
  if ( a1 < 0 )
    v3 = v2[1];
  v4 = v2;
  if ( a1 < 0 )
    v2[1] = v3 | 1;
  v5 = (const char *)dword_48ADFC;
  if ( !dword_48ADFC )
    v5 = "\x1B\n";
  v2[27] = v5;
  v6 = (_DWORD *)sub_297908();
  sub_297220();
  if ( v6 )
  {
    v7 = (_DWORD *)*v6;
    if ( *v6 )
    {
      v9 = v6;
      for ( i = 0; ; ++i )
      {
        v11 = v9[1];
        ++v9;
        v7 = (_DWORD *)(i + 1);
        if ( !v11 )
          break;
      }
      v8 = 4 * (i + 2);
    }
    else
    {
      v8 = 4;
    }
  }
  else
  {
    v8 = 4;
    v7 = 0;
  }
  v4[7] = v7;
  v12 = (char *)sub_93028(v8);
  v13 = v4[7];
  v4[5] = v12;
  if ( v13 > 0 )
  {
    v14 = 4 * v13;
    v15 = (_DWORD **)v6;
    v16 = v12 - 4;
    do
    {
      v17 = *v15++;
      *((_DWORD *)v16 + 1) = *v17;
      v16 += 4;
    }
    while ( &v6[v13] != v15 );
  }
  else
  {
    v14 = 0;
  }
  if ( dword_48BB24 )
  {
    *(_DWORD *)&v12[v14] = *(_DWORD *)dword_48BB24;
  }
  else
  {
    v27 = strlen((const char *)dword_48AAD4);
    v28 = (char *)sub_93028(v27 + 1);
    v29 = (const char *)dword_48AAD4;
    v4[6] = v28;
    strcpy(v28, v29);
    v13 = v4[7];
    *(_DWORD *)(v4[5] + v14) = v4[6];
  }
  v18 = v4[11];
  v4[7] = v13 + 1;
  v4[17] = v18;
  sub_28D354();
  v4[4] = 128;
  v19 = sub_93028(0x80u);
  v4[3] = 0;
  v4[2] = v19;
  if ( a1 < 0 )
    v20 = -1;
  *v19 = 0;
  if ( a1 >= 0 )
    v20 = 1;
  v21 = (const char *)dword_48AAD4;
  v4[18] = v20;
  v4[24] = v21;
  v22 = strlen(v21);
  v23 = v4[1];
  v4[25] = v22;
  v24 = (const char *)v4[2];
  dword_48ADF8 = (int)v4;
  v4[26] = dword_4900D8;
  sub_28B358(v24, v23 & 1);
  if ( (dword_48AAA0 & 0x80000) != 0 )
    return 0;
  do
  {
    sub_28B738((int)v4);
    v25 = sub_28B7B4((int)v4, v4[19]);
  }
  while ( v25 > 0 );
  return sub_28B618(v4, v25);
}
