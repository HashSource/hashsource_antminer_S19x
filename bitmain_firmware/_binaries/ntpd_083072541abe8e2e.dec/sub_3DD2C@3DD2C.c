int __fastcall sub_3DD2C(struct sockaddr *a1, int a2, int a3)
{
  char v3; // r3
  unsigned int v4; // r7
  unsigned int v5; // r5
  int v6; // r6
  unsigned int v7; // r5
  int v8; // r12
  __int16 v9; // r2
  int *v10; // r4
  int v11; // r0
  int v12; // r12
  int *v13; // r3
  int *v14; // r3
  int v15; // r0
  int v16; // r1
  int v17; // r2
  int v18; // r3
  int v19; // r1
  int v20; // r2
  int v21; // r3
  unsigned int v22; // lr
  unsigned int v23; // r3
  __int16 v24; // r1
  int v25; // r2
  unsigned int v26; // r0
  int v27; // r1
  int v28; // r2
  int v29; // r10
  int v30; // r3
  unsigned int v31; // r11
  unsigned int v32; // r1
  unsigned int v33; // r2
  unsigned int v34; // lr
  unsigned int v35; // r3
  unsigned int v36; // r10
  unsigned int v37; // r1
  unsigned int v38; // r2
  unsigned int v39; // r12
  bool v40; // zf
  void *v41; // r0
  int v42; // r2
  int v43; // r3
  unsigned __int16 v45[2]; // [sp+10h] [bp-44h] BYREF
  int v46; // [sp+14h] [bp-40h]
  int v47; // [sp+18h] [bp-3Ch]
  int v48; // [sp+1Ch] [bp-38h]
  int v49; // [sp+20h] [bp-34h]
  int v50; // [sp+24h] [bp-30h]
  int v51; // [sp+28h] [bp-2Ch]
  _DWORD s[8]; // [sp+2Ch] [bp-28h] BYREF

  v3 = *(_BYTE *)(a3 + 3);
  v4 = __rev16(*(unsigned __int16 *)(a3 + 6)) & 0xFFF;
  if ( v4 > 0x20 )
    return sub_3AD58(a1, a2, *(_BYTE *)(a3 + 2), v3, 3);
  v5 = *(unsigned __int16 *)(a3 + 4);
  v6 = a3 + 8;
  byte_BC926 = *(_BYTE *)(a3 + 2);
  v7 = __rev16(v5) & 0xFFF;
  byte_BC927 = v3;
  dword_BCB28 = (int)a1;
  if ( dword_BCB2C )
    v8 = 120;
  else
    v8 = 80;
  if ( dword_BCB2C )
    v9 = 30720;
  else
    v9 = 20480;
  dword_BCB24 = a2;
  v10 = &dword_BC92C;
  dword_BC91C = v8;
  word_BC92A = v9;
  dword_BCB20 = 0;
  dword_BC910 = 0;
  dword_BC914 = 0;
  dword_BC918 = 0;
  while ( 1 )
  {
    v40 = v10 == 0;
    if ( v10 )
      v40 = v7 == 0;
    if ( v40 )
      break;
    v41 = memset(s, 0, sizeof(s));
    _memcpy_chk(v41, v6);
    v45[0] = 0;
    v46 = 0;
    v47 = 0;
    v48 = 0;
    v49 = 0;
    v50 = 0;
    v51 = 0;
    v45[1] = s[1];
    if ( dword_BCB2C && s[2] )
    {
      v45[0] = 10;
      v47 = s[4];
      v48 = s[5];
      v49 = s[6];
      v50 = s[7];
    }
    else
    {
      v45[0] = 2;
      v46 = s[0];
    }
    v6 += v4;
    v11 = sub_31A44(v45, 0, 0, -1, 0, 0);
    v12 = v11;
    if ( v11 )
    {
      v13 = *(int **)(v11 + 56);
      if ( *(_WORD *)(v11 + 16) == 2 )
      {
        v22 = *(_DWORD *)(v11 + 748);
        if ( v13 )
        {
          if ( v22 )
          {
            if ( *(_BYTE *)(v11 + 72) == 4 || *(_BYTE *)(v11 + 72) && (v42 = v13[7], (*v10 = v42) == 0) )
              *v10 = v13[21];
          }
          else
          {
            *v10 = v13[7];
          }
        }
        else
        {
          *v10 = 0;
        }
        v43 = dword_BCB2C;
        v10[1] = *(_DWORD *)(v11 + 20);
        if ( v43 )
          v10[20] = 0;
      }
      else
      {
        if ( v13 )
        {
          if ( *(_BYTE *)(v11 + 72) == 4 )
            v14 = v13 + 22;
          else
            v14 = v13 + 8;
          v15 = *v14;
          v16 = v14[1];
          v17 = v14[2];
          v18 = v14[3];
          v10[22] = v15;
          v10[23] = v16;
          v10[24] = v17;
          v10[25] = v18;
        }
        else
        {
          v10[22] = 0;
          v10[23] = 0;
          v10[24] = 0;
          v10[25] = 0;
        }
        v19 = *(_DWORD *)(v12 + 28);
        v20 = *(_DWORD *)(v12 + 32);
        v21 = *(_DWORD *)(v12 + 36);
        v22 = *(_DWORD *)(v12 + 748);
        v10[26] = *(_DWORD *)(v12 + 24);
        v10[27] = v19;
        v10[28] = v20;
        v10[29] = v21;
        v10[20] = 1;
      }
      v23 = 0;
      v24 = *(_WORD *)(v12 + 18);
      *((_WORD *)v10 + 5) = 0;
      *((_WORD *)v10 + 4) = v24;
      v25 = *(_DWORD *)(v12 + 68);
      if ( sys_peer == v12 )
      {
        *((_WORD *)v10 + 5) = 2;
        v23 = 2;
      }
      if ( (v25 & 1) != 0 )
      {
        v23 |= 1u;
        *((_WORD *)v10 + 5) = v23;
      }
      if ( (v25 & 8) != 0 )
      {
        v23 |= 8u;
        *((_WORD *)v10 + 5) = v23;
      }
      if ( (v25 & 0x20) != 0 )
      {
        v23 |= 0x10u;
        *((_WORD *)v10 + 5) = v23;
      }
      if ( (v25 & 0x40) != 0 )
      {
        v23 |= 4u;
        *((_WORD *)v10 + 5) = v23;
      }
      if ( (v25 & 0x100) != 0 )
      {
        v23 |= 0x100u;
        *((_WORD *)v10 + 5) = v23;
      }
      v26 = *(unsigned __int8 *)(v12 + 296);
      if ( v26 == 4 )
      {
        v23 |= 0x40u;
      }
      else if ( v26 > 5 )
      {
        v23 |= 0x80u;
      }
      *((_WORD *)v10 + 5) = __rev16(v23);
      v27 = *(_DWORD *)(v12 + 732);
      v28 = *(_DWORD *)(v12 + 720);
      v29 = *(_DWORD *)(v12 + 736);
      v30 = current_time;
      v31 = *(_DWORD *)(v12 + 740);
      v10[9] = bswap32(v22);
      v32 = bswap32(v30 - v27);
      v33 = bswap32(v28 - v30);
      v34 = *(_DWORD *)(v12 + 760);
      v35 = v30 - v29;
      v36 = *(_DWORD *)(v12 + 752);
      v10[4] = v32;
      v37 = *(_DWORD *)(v12 + 764);
      v10[5] = v33;
      v38 = *(_DWORD *)(v12 + 768);
      v39 = *(_DWORD *)(v12 + 772);
      v10[6] = bswap32(v35);
      v10[7] = bswap32(v31);
      v10[11] = bswap32(v36);
      v10[12] = bswap32(v34);
      v10[13] = bswap32(v37);
      v10[16] = bswap32(v38);
      v10[17] = bswap32(v39);
      *((_BYTE *)v10 + 76) = v26;
      v10 = (int *)sub_3A918();
    }
    v7 = (unsigned __int16)(v7 - 1);
  }
  return sub_3B02C();
}
