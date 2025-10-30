int __fastcall sub_3E2E0(struct sockaddr *a1, int a2, int a3)
{
  char v3; // r3
  int v4; // r8
  bool v5; // zf
  char v6; // r3
  int v7; // r8
  int *v8; // r4
  unsigned int *v9; // r10
  unsigned int v10; // r3
  __int64 v11; // r6
  char v12; // r3
  double v13; // d0
  unsigned int v14; // r2
  bool v15; // fnf
  double v16; // r0
  int v17; // r2
  unsigned int v18; // r3
  unsigned int v19; // r3
  __int64 v20; // r0
  __int64 v21; // r2
  unsigned int v22; // kr00_4
  double v23; // r0
  double v24; // d0
  __int64 v25; // r6
  __int64 v26; // r6
  _WORD *v27; // r0
  unsigned int v28; // r3
  char *v29; // r0
  bool v30; // cc
  unsigned int v31; // t1
  _BYTE v36[12]; // [sp+18h] [bp-6Ch] BYREF
  unsigned int v37; // [sp+24h] [bp-60h]
  unsigned int v38; // [sp+28h] [bp-5Ch]
  unsigned int v39; // [sp+2Ch] [bp-58h]
  unsigned int v40; // [sp+30h] [bp-54h]
  unsigned int v41; // [sp+34h] [bp-50h]
  double v42; // [sp+40h] [bp-44h]
  double v43; // [sp+48h] [bp-3Ch]
  unsigned int v44; // [sp+50h] [bp-34h]
  int v45; // [sp+54h] [bp-30h]
  char v46; // [sp+58h] [bp-2Ch]
  char v47; // [sp+59h] [bp-2Bh]
  _WORD *v48; // [sp+5Ch] [bp-28h]
  unsigned __int16 v49[2]; // [sp+60h] [bp-24h] BYREF
  unsigned int v50; // [sp+64h] [bp-20h]
  int v51; // [sp+68h] [bp-1Ch]
  int v52; // [sp+6Ch] [bp-18h]
  int v53; // [sp+70h] [bp-14h]
  int v54; // [sp+74h] [bp-10h]
  int v55; // [sp+78h] [bp-Ch]

  v3 = *(_BYTE *)(a3 + 2);
  v4 = (HIBYTE(*(_WORD *)(a3 + 4)) | (unsigned __int16)(*(_WORD *)(a3 + 4) << 8)) & 0xFFF;
  v5 = v4 == 0;
  dword_BDB38 = a2;
  byte_BD93A = v3;
  v6 = *(_BYTE *)(a3 + 3);
  v7 = v4 - 1;
  dword_BDB3C = (int)a1;
  word_BD93E = 13312;
  byte_BD93B = v6;
  dword_BD92C = 52;
  dword_BDB34 = 0;
  v50 = 0;
  v51 = 0;
  v52 = 0;
  v53 = 0;
  v54 = 0;
  v55 = 0;
  dword_BD930 = 0;
  dword_BD928 = 0;
  dword_BD924 = 0;
  v49[0] = 2;
  v49[1] = 31488;
  if ( v5 )
    return sub_3B8C4();
  v8 = &dword_BD940;
  v9 = (unsigned int *)(a3 + 12);
  v10 = *(_DWORD *)(a3 + 8);
  v50 = v10;
  do
  {
    if ( bswap32(v10) >> 16 << 16 != 2139029504 || !sub_31F34(v49, 0, 0, -1, 0, 0) )
      break;
    v48 = 0;
    sub_3ABAC((unsigned int)v49, (int)v36);
    HIDWORD(v11) = 0;
    *v8 = v50;
    v12 = v36[1];
    *((_BYTE *)v8 + 4) = v36[0];
    *((_BYTE *)v8 + 5) = v12;
    *((_BYTE *)v8 + 6) = v47;
    *((_BYTE *)v8 + 7) = v46;
    v13 = v42;
    v14 = v40;
    v15 = v42 < 0.0;
    v16 = COERCE_DOUBLE(__PAIR64__(bswap32(v39), v38));
    v8[2] = bswap32(v37);
    v17 = bswap32(v14);
    v18 = v41;
    v8[5] = v17;
    v19 = bswap32(v18);
    v8[3] = bswap32(LODWORD(v16));
    if ( v15 )
      v13 = -v13;
    v8[6] = v19;
    LODWORD(v16) = 32;
    v8[4] = HIDWORD(v16);
    LODWORD(v11) = v15;
    ldexp(v16, v17);
    v20 = sub_8D558(LODWORD(v13), HIDWORD(v13));
    v21 = -v11;
    *(_QWORD *)&v23 = v20 ^ -v11;
    v22 = LODWORD(v23);
    LODWORD(v23) = 32;
    v25 = v11 + __PAIR64__(HIDWORD(v23), v22);
    v8[7] = bswap32(HIDWORD(v25));
    v24 = v43;
    HIDWORD(v25) = 0;
    v8[8] = bswap32(v25);
    if ( v24 >= 0.0 )
    {
      LODWORD(v25) = 0;
    }
    else
    {
      v24 = -v24;
      LODWORD(v25) = 1;
    }
    ldexp(v23, v21);
    v26 = (unsigned int)v25 + (sub_8D558(LODWORD(v24), HIDWORD(v24)) ^ -v25);
    v8[9] = bswap32(HIDWORD(v26));
    v27 = v48;
    v28 = bswap32(v44);
    v8[12] = v45;
    v8[11] = v28;
    v8[10] = bswap32(v26);
    sub_25108(v27);
    v29 = sub_3B168();
    v30 = (int)v29 <= 0;
    if ( v29 )
      v30 = v7 <= 0;
    v8 = (int *)v29;
    if ( v30 )
      return sub_3B8C4();
    --v7;
    v31 = *v9++;
    v10 = v31;
    v50 = v31;
  }
  while ( v49[0] == 2 );
  return sub_3B5D8(a1, a2, *(_BYTE *)(a3 + 2), *(_BYTE *)(a3 + 3), 4);
}
