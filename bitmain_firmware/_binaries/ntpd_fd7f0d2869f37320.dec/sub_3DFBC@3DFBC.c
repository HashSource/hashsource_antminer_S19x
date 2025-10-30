int __fastcall sub_3DFBC(struct sockaddr *a1, int a2, int a3)
{
  int v4; // r9
  bool v5; // zf
  int v6; // r9
  unsigned int v7; // r2
  unsigned int v8; // r3
  __int64 v9; // r0
  unsigned int v11; // r3
  unsigned int v12; // r3
  unsigned int v13; // r3
  unsigned int v14; // r5
  unsigned __int64 v15; // r0
  double v16; // r0
  double v17; // d0
  int v18; // r2
  unsigned int v19; // r3
  unsigned int v20; // r5
  unsigned __int64 v21; // r0
  double v22; // r0
  double v23; // d0
  int v24; // r2
  unsigned __int64 v25; // [sp+8h] [bp-28h]
  unsigned __int64 v26; // [sp+8h] [bp-28h]
  double v29[9]; // [sp+30h] [bp+0h] BYREF
  int v30; // [sp+78h] [bp+48h] BYREF
  unsigned int v31; // [sp+7Ch] [bp+4Ch]
  int v32; // [sp+80h] [bp+50h]
  int v33; // [sp+84h] [bp+54h]
  int v34; // [sp+88h] [bp+58h]
  int v35; // [sp+8Ch] [bp+5Ch]
  int v36; // [sp+90h] [bp+60h]

  v30 = 0;
  v31 = 0;
  v32 = 0;
  v33 = 0;
  v34 = 0;
  v35 = 0;
  v36 = 0;
  memset(v29, 0, sizeof(v29));
  v4 = (HIBYTE(*(_WORD *)(a3 + 4)) | (unsigned __int16)(*(_WORD *)(a3 + 4) << 8)) & 0xFFF;
  v5 = v4 == 0;
  v6 = v4 - 1;
  if ( v5 )
    return sub_3B5D8(a1, a2, *(_BYTE *)(a3 + 2), *(_BYTE *)(a3 + 3), 0);
  while ( 2 )
  {
    v7 = *(_DWORD *)(a3 + 8);
    v30 = 2063597570;
    v31 = v7;
    if ( bswap32(v7) >> 16 << 16 == 2139029504 && sub_31F34((unsigned __int16 *)&v30, 0, 0, -1, 0, 0) )
    {
      switch ( bswap32(*(_DWORD *)(a3 + 12)) )
      {
        case 1u:
          v19 = bswap32(*(_DWORD *)(a3 + 16));
          v20 = v19 >> 31;
          v26 = vshrd_n_u64(vdup_n_s32(v19 >> 31).n64_u64[0], 0x20u);
          v21 = v26 + (-(__int64)v26 ^ (__PAIR64__(v19, 0) + bswap32(*(_DWORD *)(a3 + 20))));
          v22 = COERCE_DOUBLE(sub_8D40C(v21, HIDWORD(v21)));
          v23 = v22;
          LODWORD(v22) = -32;
          ldexp(v22, v24);
          BYTE2(v29[0]) = 1;
          if ( v20 )
            v23 = -v23;
          v29[5] = v23;
          goto LABEL_8;
        case 2u:
          v13 = bswap32(*(_DWORD *)(a3 + 16));
          v14 = v13 >> 31;
          v25 = vshrd_n_u64(vdup_n_s32(v13 >> 31).n64_u64[0], 0x20u);
          v15 = v25 + (-(__int64)v25 ^ (__PAIR64__(v13, 0) + bswap32(*(_DWORD *)(a3 + 20))));
          v16 = COERCE_DOUBLE(sub_8D40C(v15, HIDWORD(v15)));
          v17 = v16;
          LODWORD(v16) = -32;
          ldexp(v16, v18);
          BYTE2(v29[0]) = 2;
          if ( v14 )
            v17 = -v17;
          v29[6] = v17;
          goto LABEL_8;
        case 3u:
          v12 = *(_DWORD *)(a3 + 24);
          BYTE2(v29[0]) = 4;
          LODWORD(v29[7]) = bswap32(v12);
          goto LABEL_8;
        case 4u:
          v11 = *(_DWORD *)(a3 + 24);
          BYTE2(v29[0]) = 8;
          HIDWORD(v29[7]) = bswap32(v11);
          goto LABEL_8;
        case 5u:
          v8 = *(_DWORD *)(a3 + 24);
          BYTE2(v29[0]) = -16;
          BYTE1(v29[0]) = bswap32(v8) & 0xF;
LABEL_8:
          LODWORD(v9) = &v30;
          --v6;
          HIDWORD(v9) = v29;
          sub_3ABAC(v9, 0);
          if ( v6 == -1 )
            return sub_3B5D8(a1, a2, *(_BYTE *)(a3 + 2), *(_BYTE *)(a3 + 3), 0);
          continue;
        default:
          sub_65D40(3, "set_clock_fudge: default!");
          return sub_3B5D8(a1, a2, *(_BYTE *)(a3 + 2), *(_BYTE *)(a3 + 3), 3);
      }
    }
    return sub_3B5D8(a1, a2, *(_BYTE *)(a3 + 2), *(_BYTE *)(a3 + 3), 4);
  }
}
