int __fastcall sub_3D800(struct sockaddr *a1, int a2, int a3)
{
  unsigned int v4; // r6
  char v5; // r2
  unsigned int v6; // r6
  char v7; // r2
  unsigned int *v8; // r8
  unsigned int v9; // r9
  signed int v10; // r6
  int *v11; // r4
  double v12; // r0
  __int64 v13; // r0
  int v14; // r2
  double v15; // d0
  unsigned int v16; // r3
  int v17; // r2
  int *v18; // r0
  bool v19; // cc
  unsigned int v20; // r3
  unsigned int v21; // t1
  int v22; // r3
  char v23; // r3
  double v24; // d0
  bool v25; // nf
  unsigned __int64 v26; // r2
  __int64 v28; // [sp+8h] [bp-84h]
  _BYTE v31[12]; // [sp+20h] [bp-6Ch] BYREF
  unsigned int v32; // [sp+2Ch] [bp-60h]
  unsigned int v33; // [sp+30h] [bp-5Ch]
  unsigned int v34; // [sp+34h] [bp-58h]
  unsigned int v35; // [sp+38h] [bp-54h]
  unsigned int v36; // [sp+3Ch] [bp-50h]
  double v37; // [sp+48h] [bp-44h]
  double v38; // [sp+50h] [bp-3Ch]
  unsigned int v39; // [sp+58h] [bp-34h]
  int v40; // [sp+5Ch] [bp-30h]
  char v41; // [sp+60h] [bp-2Ch]
  char v42; // [sp+61h] [bp-2Bh]
  _WORD *v43; // [sp+64h] [bp-28h]
  int v44; // [sp+68h] [bp-24h] BYREF
  int v45; // [sp+6Ch] [bp-20h]
  int v46; // [sp+70h] [bp-1Ch]
  int v47; // [sp+74h] [bp-18h]
  int v48; // [sp+78h] [bp-14h]
  int v49; // [sp+7Ch] [bp-10h]
  int v50; // [sp+80h] [bp-Ch]

  v4 = *(unsigned __int16 *)(a3 + 4);
  dword_BCB28 = (int)a1;
  v5 = *(_BYTE *)(a3 + 2);
  v6 = __rev16(v4) & 0xFFF;
  dword_BC91C = 52;
  byte_BC926 = v5;
  v7 = *(_BYTE *)(a3 + 3);
  dword_BCB24 = a2;
  word_BC92A = 13312;
  byte_BC927 = v7;
  v44 = 2063597570;
  dword_BCB20 = 0;
  v45 = 0;
  dword_BC910 = 0;
  dword_BC914 = 0;
  dword_BC918 = 0;
  v46 = 0;
  v47 = 0;
  v48 = 0;
  v49 = 0;
  v50 = 0;
  if ( !v6 )
    return sub_3B02C();
  v8 = (unsigned int *)(a3 + 12);
  v9 = bswap32(*(_DWORD *)(a3 + 8));
  v45 = *(_DWORD *)(a3 + 8);
  if ( (v9 & 0xFFFF0000) == 0x7F7F0000 )
  {
    v10 = v6 - 1;
    v11 = &dword_BC92C;
    while ( sub_31A44((unsigned __int16 *)&v44, 0, 0, -1, 0, 0) )
    {
      v43 = 0;
      sub_3A3B4((unsigned int)&v44, (int)v31, v22);
      *v11 = v45;
      v23 = v31[1];
      *((_BYTE *)v11 + 4) = v31[0];
      *((_BYTE *)v11 + 5) = v23;
      *((_BYTE *)v11 + 6) = v42;
      *((_BYTE *)v11 + 7) = v41;
      v24 = v37;
      v12 = COERCE_DOUBLE(_byteswap_uint64(__PAIR64__(v33, v34)));
      v25 = v37 < 0.0;
      v26 = _byteswap_uint64(__PAIR64__(v35, v36));
      v11[2] = bswap32(v32);
      *(double *)(v11 + 3) = v12;
      *(_QWORD *)(v11 + 5) = v26;
      LODWORD(v12) = 32;
      if ( v25 )
      {
        ldexp(v12, v26);
        v13 = -sub_8C010(COERCE_UNSIGNED_INT64(-v24), HIDWORD(COERCE_UNSIGNED_INT64(-v24)));
      }
      else
      {
        ldexp(v12, v26);
        v13 = sub_8C010(LODWORD(v24), HIDWORD(v24));
      }
      v15 = v38;
      v11[7] = bswap32(HIDWORD(v13));
      v11[8] = bswap32(v13);
      LODWORD(v13) = 32;
      ldexp(*(double *)&v13, v14);
      if ( v15 < 0.0 )
        v28 = -sub_8C010(COERCE_UNSIGNED_INT64(-v15), HIDWORD(COERCE_UNSIGNED_INT64(-v15)));
      else
        v28 = sub_8C010(LODWORD(v15), HIDWORD(v15));
      v16 = bswap32(v39);
      v17 = v40;
      v11[9] = bswap32(HIDWORD(v28));
      v11[10] = bswap32(v28);
      v11[11] = v16;
      v11[12] = v17;
      sub_24DE4(v43);
      v18 = (int *)sub_3A918();
      v19 = (int)v18 <= 0;
      if ( v18 )
        v19 = v10 <= 0;
      v11 = v18;
      if ( v19 )
        return sub_3B02C();
      v21 = *v8++;
      v20 = v21;
      v45 = v21;
      if ( (unsigned __int16)v44 == 2 )
      {
        --v10;
        if ( (bswap32(v20) & 0xFFFF0000) == 0x7F7F0000 )
          continue;
      }
      return sub_3AD58(a1, a2, *(_BYTE *)(a3 + 2), *(_BYTE *)(a3 + 3), 4);
    }
  }
  return sub_3AD58(a1, a2, *(_BYTE *)(a3 + 2), *(_BYTE *)(a3 + 3), 4);
}
