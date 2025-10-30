int __fastcall sub_3D524(struct sockaddr *a1, int a2, int a3)
{
  unsigned int v5; // r4
  unsigned int v6; // r7
  unsigned int v7; // r4
  unsigned int v8; // r3
  unsigned int v9; // r3
  __int64 v10; // r0
  unsigned int v11; // r2
  char v12; // r3
  int v13; // r12
  unsigned int v14; // r3
  unsigned int v15; // r3
  __int64 v16; // r0
  double v17; // r0
  double v18; // d0
  int v19; // r2
  __int64 v20; // r0
  double v21; // r0
  double v22; // d0
  int v23; // r2
  double v25; // r0
  double v26; // d0
  int v27; // r2
  double v28; // r0
  double v29; // d0
  int v30; // r2
  __int64 v31; // [sp+8h] [bp-7Ch]
  __int64 v32; // [sp+8h] [bp-7Ch]
  double s[9]; // [sp+18h] [bp-6Ch] BYREF
  int v35; // [sp+60h] [bp-24h] BYREF
  unsigned int v36; // [sp+64h] [bp-20h]
  int v37; // [sp+68h] [bp-1Ch]
  int v38; // [sp+6Ch] [bp-18h]
  int v39; // [sp+70h] [bp-14h]
  int v40; // [sp+74h] [bp-10h]
  int v41; // [sp+78h] [bp-Ch]

  v35 = 0;
  v36 = 0;
  v37 = 0;
  v38 = 0;
  v39 = 0;
  v40 = 0;
  v41 = 0;
  memset(s, 0, sizeof(s));
  v5 = __rev16(*(unsigned __int16 *)(a3 + 4)) & 0xFFF;
  if ( v5 )
  {
    v6 = bswap32(*(_DWORD *)(a3 + 8)) & 0xFFFF0000;
    v7 = v5 - 1;
    v36 = *(_DWORD *)(a3 + 8);
    v35 = 2063597570;
    if ( v6 == 2139029504 )
    {
      while ( 2 )
      {
        if ( sub_31A44((unsigned __int16 *)&v35, 0, 0, -1, 0, 0) )
        {
          switch ( bswap32(*(_DWORD *)(a3 + 12)) )
          {
            case 1u:
              LODWORD(v32) = 0;
              HIDWORD(v32) = bswap32(*(_DWORD *)(a3 + 16));
              v20 = v32 + bswap32(*(_DWORD *)(a3 + 20));
              if ( v32 < 0 )
              {
                v25 = COERCE_DOUBLE(sub_8BEC4(-(int)v20, (unsigned __int64)-v20 >> 32));
                v26 = v25;
                LODWORD(v25) = -32;
                ldexp(v25, v27);
                v22 = -v26;
              }
              else
              {
                v21 = COERCE_DOUBLE(sub_8BEC4(v20, HIDWORD(v20)));
                v22 = v21;
                LODWORD(v21) = -32;
                ldexp(v21, v23);
              }
              v9 = 1;
              s[5] = v22;
              BYTE2(s[0]) = 1;
              goto LABEL_6;
            case 2u:
              LODWORD(v31) = 0;
              HIDWORD(v31) = bswap32(*(_DWORD *)(a3 + 16));
              v16 = v31 + bswap32(*(_DWORD *)(a3 + 20));
              if ( v31 < 0 )
              {
                v28 = COERCE_DOUBLE(sub_8BEC4(-(int)v16, (unsigned __int64)-v16 >> 32));
                v29 = v28;
                LODWORD(v28) = -32;
                ldexp(v28, v30);
                v18 = -v29;
              }
              else
              {
                v17 = COERCE_DOUBLE(sub_8BEC4(v16, HIDWORD(v16)));
                v18 = v17;
                LODWORD(v17) = -32;
                ldexp(v17, v19);
              }
              v9 = 2;
              s[6] = v18;
              BYTE2(s[0]) = 2;
              goto LABEL_6;
            case 3u:
              v15 = *(_DWORD *)(a3 + 24);
              BYTE2(s[0]) = 4;
              v9 = bswap32(v15);
              LODWORD(s[7]) = v9;
              goto LABEL_6;
            case 4u:
              v14 = *(_DWORD *)(a3 + 24);
              BYTE2(s[0]) = 8;
              v9 = bswap32(v14);
              HIDWORD(s[7]) = v9;
              goto LABEL_6;
            case 5u:
              v8 = *(_DWORD *)(a3 + 24);
              BYTE2(s[0]) = -16;
              v9 = bswap32(v8) & 0xF;
              BYTE1(s[0]) = v9;
LABEL_6:
              --v7;
              HIDWORD(v10) = s;
              LODWORD(v10) = &v35;
              sub_3A3B4(v10, 0, v9);
              if ( v7 == -1 )
                goto LABEL_21;
              v11 = *(_DWORD *)(a3 + 8);
              v35 = 2063597570;
              v36 = v11;
              if ( (bswap32(v11) & 0xFFFF0000) != 0x7F7F0000 )
                break;
              continue;
            default:
              sub_64E00(3, "set_clock_fudge: default!");
              v12 = *(_BYTE *)(a3 + 3);
              v13 = 3;
              return sub_3AD58(a1, a2, *(_BYTE *)(a3 + 2), v12, v13);
          }
        }
        break;
      }
    }
    v12 = *(_BYTE *)(a3 + 3);
    v13 = 4;
  }
  else
  {
LABEL_21:
    v12 = *(_BYTE *)(a3 + 3);
    v13 = 0;
  }
  return sub_3AD58(a1, a2, *(_BYTE *)(a3 + 2), v12, v13);
}
