int __fastcall sub_3E8AC(struct sockaddr *a1, int a2, int a3)
{
  int v3; // r7
  unsigned int v4; // r8
  int v5; // r6
  char v7; // r4
  __int16 v8; // r0
  int v9; // r12
  char *v10; // r4
  int v11; // r0
  int v12; // r5
  int v13; // r1
  int *v14; // r1
  int v15; // r0
  int v16; // r1
  int v17; // r2
  int v18; // r3
  _DWORD *v19; // t0
  int v20; // r1
  int v21; // r2
  int v22; // r3
  unsigned int v23; // r1
  __int16 v24; // r0
  unsigned int v25; // r3
  unsigned int v26; // r12
  int v27; // r1
  unsigned int v28; // lr
  int v29; // r2
  unsigned int v30; // r2
  unsigned int v31; // r2
  unsigned int v32; // r3
  unsigned int v33; // r1
  unsigned int v34; // r0
  unsigned int v35; // r1
  unsigned int v36; // r2
  unsigned int v37; // r3
  bool v38; // zf
  int v39; // r3
  int v40; // r2
  int v41; // r2
  unsigned __int16 v43[2]; // [sp+18h] [bp-44h] BYREF
  int v44; // [sp+1Ch] [bp-40h]
  int v45; // [sp+20h] [bp-3Ch]
  int v46; // [sp+24h] [bp-38h]
  int v47; // [sp+28h] [bp-34h]
  int v48; // [sp+2Ch] [bp-30h]
  int v49; // [sp+30h] [bp-2Ch]
  int v50; // [sp+34h] [bp-28h] BYREF
  int v51; // [sp+38h] [bp-24h]
  int v52; // [sp+3Ch] [bp-20h]
  int v53; // [sp+40h] [bp-1Ch]
  int v54; // [sp+44h] [bp-18h]
  int v55; // [sp+48h] [bp-14h]
  int v56; // [sp+4Ch] [bp-10h]
  int v57; // [sp+50h] [bp-Ch]

  v3 = a3 + 8;
  v4 = (HIBYTE(*(_WORD *)(a3 + 6)) | (unsigned __int16)(*(_WORD *)(a3 + 6) << 8)) & 0xFFF;
  v5 = (HIBYTE(*(_WORD *)(a3 + 4)) | (unsigned __int16)(*(_WORD *)(a3 + 4) << 8)) & 0xFFF;
  if ( v4 > 0x20 )
    return sub_3B5D8(a1, a2, *(_BYTE *)(a3 + 2), *(_BYTE *)(a3 + 3), 3);
  v7 = *(_BYTE *)(a3 + 2);
  v8 = *(unsigned __int8 *)(a3 + 3);
  dword_BDB38 = a2;
  byte_BD93B = v8;
  byte_BD93A = v7;
  dword_BDB3C = (int)a1;
  if ( dword_BDB40 )
    v9 = 120;
  else
    v9 = 80;
  dword_BDB34 = 0;
  dword_BD92C = v9;
  v10 = (char *)&dword_BD940;
  dword_BD930 = 0;
  if ( dword_BDB40 )
    v8 = 30720;
  dword_BD928 = 0;
  if ( !dword_BDB40 )
    v8 = 20480;
  dword_BD924 = 0;
  word_BD93E = v8;
  while ( 1 )
  {
    v38 = v5 == 0;
    if ( v5 )
      v38 = v10 == 0;
    if ( v38 )
      break;
    v50 = 0;
    v51 = 0;
    v52 = 0;
    v53 = 0;
    v54 = 0;
    v55 = 0;
    v56 = 0;
    v57 = 0;
    _memcpy_chk(&v50, v3, v4, 32);
    v43[0] = 0;
    v44 = 0;
    v45 = 0;
    v46 = 0;
    v47 = 0;
    v48 = 0;
    v49 = 0;
    v43[1] = v51;
    if ( dword_BDB40 && v52 )
    {
      v43[0] = 10;
      v45 = v54;
      v46 = v55;
      v47 = v56;
      v48 = v57;
    }
    else
    {
      v43[0] = 2;
      v44 = v50;
    }
    v3 += v4;
    v11 = sub_31F34(v43, 0, 0, -1, 0, 0);
    v12 = v11;
    if ( v11 )
    {
      if ( *(_WORD *)(v11 + 16) == 2 )
      {
        v39 = *(_DWORD *)(v11 + 56);
        v23 = *(_DWORD *)(v11 + 748);
        if ( v39 )
        {
          if ( v23 )
          {
            if ( *(_BYTE *)(v11 + 72) == 4
              || *(_BYTE *)(v11 + 72) && (v41 = *(_DWORD *)(v39 + 28), (*(_DWORD *)v10 = v41) == 0) )
            {
              *(_DWORD *)v10 = *(_DWORD *)(v39 + 84);
            }
          }
          else
          {
            *(_DWORD *)v10 = *(_DWORD *)(v39 + 28);
          }
        }
        else
        {
          *(_DWORD *)v10 = 0;
        }
        v40 = dword_BDB40;
        *((_DWORD *)v10 + 1) = *(_DWORD *)(v11 + 20);
        if ( v40 )
          *((_DWORD *)v10 + 20) = 0;
      }
      else
      {
        v13 = *(_DWORD *)(v11 + 56);
        if ( v13 )
        {
          if ( *(_BYTE *)(v11 + 72) == 4 )
            v14 = (int *)(v13 + 88);
          else
            v14 = (int *)(v13 + 32);
          v15 = *v14;
          v19 = v14 + 1;
          v16 = v14[1];
          v17 = *++v19;
          v18 = v19[1];
          *((_DWORD *)v10 + 22) = v15;
          *((_DWORD *)v10 + 23) = v16;
          *((_DWORD *)v10 + 24) = v17;
          *((_DWORD *)v10 + 25) = v18;
        }
        else
        {
          memset(v10 + 88, 0, 0x10u);
        }
        v20 = *(_DWORD *)(v12 + 28);
        v21 = *(_DWORD *)(v12 + 32);
        v22 = *(_DWORD *)(v12 + 36);
        *((_DWORD *)v10 + 26) = *(_DWORD *)(v12 + 24);
        *((_DWORD *)v10 + 27) = v20;
        *((_DWORD *)v10 + 28) = v21;
        *((_DWORD *)v10 + 29) = v22;
        v23 = *(_DWORD *)(v12 + 748);
        *((_DWORD *)v10 + 20) = 1;
      }
      v24 = *(_WORD *)(v12 + 18);
      v25 = 0;
      v26 = bswap32(v23);
      *((_WORD *)v10 + 5) = 0;
      *((_WORD *)v10 + 4) = v24;
      v27 = *(_DWORD *)(v12 + 720);
      v28 = bswap32(*(_DWORD *)(v12 + 740));
      v29 = *(_DWORD *)(v12 + 68);
      if ( v12 == sys_peer )
      {
        v25 = 2;
        *((_WORD *)v10 + 5) = 2;
      }
      if ( (v29 & 1) != 0 )
      {
        v25 |= 1u;
        *((_WORD *)v10 + 5) = v25;
      }
      if ( (v29 & 8) != 0 )
      {
        v25 |= 8u;
        *((_WORD *)v10 + 5) = v25;
      }
      if ( (v29 & 0x20) != 0 )
      {
        v25 |= 0x10u;
        *((_WORD *)v10 + 5) = v25;
      }
      if ( (v29 & 0x40) != 0 )
      {
        v25 |= 4u;
        *((_WORD *)v10 + 5) = v25;
      }
      if ( (v29 & 0x100) != 0 )
      {
        v25 |= 0x100u;
        *((_WORD *)v10 + 5) = v25;
      }
      v30 = *(unsigned __int8 *)(v12 + 296);
      if ( v30 == 4 )
      {
        v25 |= 0x40u;
        *((_WORD *)v10 + 5) = v25;
        v30 = *(unsigned __int8 *)(v12 + 296);
      }
      if ( v30 > 5 )
        v25 |= 0x80u;
      *((_WORD *)v10 + 5) = (v25 >> 8) | ((_WORD)v25 << 8);
      v31 = current_time - *(_DWORD *)(v12 + 736);
      v32 = *(_DWORD *)(v12 + 752);
      v33 = bswap32(v27 - current_time);
      *((_DWORD *)v10 + 4) = bswap32(current_time - *(_DWORD *)(v12 + 732));
      v34 = *(_DWORD *)(v12 + 760);
      *((_DWORD *)v10 + 5) = v33;
      *((_DWORD *)v10 + 6) = bswap32(v31);
      v35 = *(_DWORD *)(v12 + 764);
      *((_DWORD *)v10 + 9) = v26;
      *((_DWORD *)v10 + 7) = v28;
      v36 = *(_DWORD *)(v12 + 768);
      *((_DWORD *)v10 + 11) = bswap32(v32);
      v37 = *(_DWORD *)(v12 + 772);
      *((_DWORD *)v10 + 12) = bswap32(v34);
      *((_DWORD *)v10 + 13) = bswap32(v35);
      *((_DWORD *)v10 + 16) = bswap32(v36);
      *((_DWORD *)v10 + 17) = bswap32(v37);
      v10[76] = *(_BYTE *)(v12 + 296);
      v10 = sub_3B168();
    }
    v5 = (unsigned __int16)(v5 - 1);
  }
  return sub_3B8C4();
}
