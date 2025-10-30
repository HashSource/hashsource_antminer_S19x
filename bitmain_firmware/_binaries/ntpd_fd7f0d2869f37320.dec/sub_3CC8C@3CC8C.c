int __fastcall sub_3CC8C(int a1, int a2, int a3)
{
  char v3; // r5
  char v4; // lr
  int v5; // r3
  int v6; // r1
  double v7; // r0
  int v8; // r5
  char *v9; // r4
  __int64 v10; // r6
  int v11; // r2
  int v12; // r3
  unsigned int v13; // r3
  double v14; // d0
  __int64 v15; // r6
  double v16; // d0
  bool v17; // zf
  int v18; // r3
  int v19; // r2
  int v20; // r2
  int v21; // r1
  int v22; // r2
  int v23; // r3
  int v24; // r1
  _QWORD *v25; // r1
  int v26; // r2
  int v27; // r3
  _DWORD *v28; // t0

  v3 = *(_BYTE *)(a3 + 2);
  v4 = *(_BYTE *)(a3 + 3);
  v5 = dword_BDB40;
  dword_BDB3C = a1;
  dword_BDB38 = a2;
  if ( dword_BDB40 )
    v6 = 72;
  else
    v6 = 32;
  byte_BD93A = v3;
  dword_BD92C = v6;
  if ( dword_BDB40 )
    HIDWORD(v7) = 18432;
  else
    HIDWORD(v7) = 0x2000;
  byte_BD93B = v4;
  dword_BDB34 = 0;
  word_BD93E = WORD2(v7);
  dword_BD930 = 0;
  dword_BD928 = 0;
  dword_BD924 = 0;
  v8 = peer_list;
  if ( peer_list )
  {
    v9 = (char *)&dword_BD940;
    while ( 1 )
    {
      if ( *(_WORD *)(v8 + 16) == 10 )
      {
        if ( !v5 )
          goto LABEL_28;
        v21 = *(_DWORD *)(v8 + 28);
        v22 = *(_DWORD *)(v8 + 32);
        v23 = *(_DWORD *)(v8 + 36);
        *((_DWORD *)v9 + 14) = *(_DWORD *)(v8 + 24);
        *((_DWORD *)v9 + 15) = v21;
        *((_DWORD *)v9 + 16) = v22;
        *((_DWORD *)v9 + 17) = v23;
        v24 = *(_DWORD *)(v8 + 56);
        *((_DWORD *)v9 + 8) = 1;
        if ( v24 )
        {
          v25 = (_QWORD *)(v24 + 32);
          v28 = (_DWORD *)v25 + 1;
          v7 = *(double *)v25;
          v26 = *++v28;
          v27 = v28[1];
          *((double *)v9 + 5) = v7;
          *((_DWORD *)v9 + 12) = v26;
          *((_DWORD *)v9 + 13) = v27;
        }
        else
        {
          memset(v9 + 40, 0, 0x10u);
        }
      }
      else
      {
        v17 = v5 == 0;
        v18 = *(_DWORD *)(v8 + 56);
        v19 = *(_DWORD *)(v8 + 20);
        if ( !v17 )
          *((_DWORD *)v9 + 8) = 0;
        if ( !v18 )
          *(_DWORD *)v9 = 0;
        *((_DWORD *)v9 + 1) = v19;
        if ( v18 )
        {
          if ( *(_DWORD *)(v8 + 748) )
          {
            if ( *(_BYTE *)(v8 + 72) == 4
              || *(_BYTE *)(v8 + 72) && (v20 = *(_DWORD *)(v18 + 28), (*(_DWORD *)v9 = v20) == 0) )
            {
              *(_DWORD *)v9 = *(_DWORD *)(v18 + 84);
            }
          }
          else
          {
            *(_DWORD *)v9 = *(_DWORD *)(v18 + 28);
          }
        }
      }
      LODWORD(v7) = 32;
      HIDWORD(v10) = 0;
      *((_WORD *)v9 + 4) = *(_WORD *)(v8 + 18);
      v9[10] = *(_BYTE *)(v8 + 93);
      v9[11] = *(_BYTE *)(v8 + 64);
      v9[12] = *(_BYTE *)(v8 + 94);
      v11 = *(unsigned __int8 *)(v8 + 298);
      v9[14] = 0;
      v9[13] = v11;
      if ( v8 == sys_peer )
        v9[14] = 2;
      v12 = *(_DWORD *)(v8 + 68);
      if ( (v12 & 1) != 0 )
      {
        v9[14] |= 1u;
        v12 = *(_DWORD *)(v8 + 68);
      }
      if ( (v12 & 8) != 0 )
      {
        v9[14] |= 8u;
        v12 = *(_DWORD *)(v8 + 68);
      }
      if ( (v12 & 0x20) != 0 )
      {
        v9[14] |= 0x10u;
        v12 = *(_DWORD *)(v8 + 68);
      }
      if ( (v12 & 0x40) != 0 )
        v9[14] |= 4u;
      v13 = *(unsigned __int8 *)(v8 + 296);
      if ( v13 == 4 )
      {
        v9[14] |= 0x40u;
        v13 = *(unsigned __int8 *)(v8 + 296);
      }
      if ( v13 > 5 )
        v9[14] = ~((unsigned int)~((unsigned __int8)v9[14] << 25) >> 25);
      v9[15] = *(_BYTE *)(v8 + 63);
      v14 = *(double *)(v8 + 608);
      if ( v14 >= 0.0 )
      {
        LODWORD(v10) = 0;
      }
      else
      {
        v14 = -v14;
        LODWORD(v10) = 1;
      }
      *((_DWORD *)v9 + 4) = bswap32((int)(*(double *)(v8 + 616) * 65536.0));
      ldexp(v7, v11);
      v15 = v10 + (sub_8D558(LODWORD(v14), HIDWORD(v14)) ^ -v10);
      *((_DWORD *)v9 + 5) = bswap32(HIDWORD(v15));
      v16 = *(double *)(v8 + 632);
      *((_DWORD *)v9 + 6) = bswap32(v15);
      *((_DWORD *)v9 + 7) = bswap32((unsigned int)(sqrt(v16) * 65536.0));
      v9 = sub_3B168();
LABEL_28:
      v8 = *(_DWORD *)v8;
      v17 = v9 == 0;
      if ( v9 )
        v17 = v8 == 0;
      if ( v17 )
        return sub_3B8C4();
      v5 = dword_BDB40;
    }
  }
  return sub_3B8C4();
}
