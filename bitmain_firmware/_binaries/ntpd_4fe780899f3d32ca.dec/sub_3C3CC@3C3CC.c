int __fastcall sub_3C3CC(int a1, int a2, int a3)
{
  char v3; // r12
  int v4; // r3
  char v5; // r1
  int v6; // r2
  __int16 v7; // r2
  double v8; // r0
  int v9; // r5
  int *v10; // r4
  int v11; // r3
  int v12; // r2
  int v13; // r2
  int v14; // r3
  unsigned int v15; // r3
  double v16; // d0
  __int64 v17; // r0
  double v18; // d0
  double v19; // d8
  bool v20; // zf
  int *v21; // r12
  int v22; // r2
  int v23; // r3
  bool v24; // zf
  int v25; // r2

  v3 = *(_BYTE *)(a3 + 2);
  v4 = dword_BCB2C;
  dword_BCB24 = a2;
  v5 = *(_BYTE *)(a3 + 3);
  dword_BCB28 = a1;
  if ( dword_BCB2C )
    v6 = 72;
  else
    v6 = 32;
  dword_BC91C = v6;
  if ( dword_BCB2C )
    v7 = 18432;
  else
    v7 = 0x2000;
  byte_BC927 = v5;
  word_BC92A = v7;
  HIDWORD(v8) = _stack_chk_guard;
  byte_BC926 = v3;
  dword_BCB20 = 0;
  dword_BC910 = 0;
  dword_BC914 = 0;
  dword_BC918 = 0;
  v9 = peer_list;
  if ( peer_list )
  {
    v10 = &dword_BC92C;
    while ( 1 )
    {
      if ( *(_WORD *)(v9 + 16) == 10 )
      {
        if ( !v4 )
          goto LABEL_33;
        v21 = *(int **)(v9 + 56);
        v8 = *(double *)(v9 + 24);
        v22 = *(_DWORD *)(v9 + 32);
        v23 = *(_DWORD *)(v9 + 36);
        v24 = v21 == 0;
        *((double *)v10 + 7) = v8;
        v10[16] = v22;
        v10[17] = v23;
        if ( v21 )
        {
          v23 = (int)(v21 + 8);
          v21 = v10 + 10;
        }
        v10[8] = 1;
        if ( v24 )
        {
          v10[10] = (int)v21;
          v10[11] = (int)v21;
        }
        else
        {
          v8 = *(double *)v23;
          v22 = *(_DWORD *)(v23 + 8);
          v23 = *(_DWORD *)(v23 + 12);
        }
        if ( v24 )
        {
          v10[12] = (int)v21;
          v10[13] = (int)v21;
        }
        else
        {
          *(double *)v21 = v8;
          v21[2] = v22;
          v21[3] = v23;
        }
      }
      else
      {
        v20 = v4 == 0;
        v11 = *(_DWORD *)(v9 + 56);
        v12 = *(_DWORD *)(v9 + 20);
        if ( !v20 )
          v10[8] = 0;
        v10[1] = v12;
        if ( v11 )
        {
          if ( *(_DWORD *)(v9 + 748) )
          {
            if ( *(_BYTE *)(v9 + 72) == 4 || *(_BYTE *)(v9 + 72) && (v25 = *(_DWORD *)(v11 + 28), (*v10 = v25) == 0) )
              *v10 = *(_DWORD *)(v11 + 84);
          }
          else
          {
            *v10 = *(_DWORD *)(v11 + 28);
          }
        }
        else
        {
          *v10 = 0;
        }
      }
      *((_WORD *)v10 + 4) = *(_WORD *)(v9 + 18);
      *((_BYTE *)v10 + 10) = *(_BYTE *)(v9 + 93);
      *((_BYTE *)v10 + 11) = *(_BYTE *)(v9 + 64);
      *((_BYTE *)v10 + 12) = *(_BYTE *)(v9 + 94);
      v13 = *(unsigned __int8 *)(v9 + 298);
      *((_BYTE *)v10 + 14) = 0;
      *((_BYTE *)v10 + 13) = v13;
      if ( sys_peer == v9 )
        *((_BYTE *)v10 + 14) = 2;
      v14 = *(_DWORD *)(v9 + 68);
      if ( (v14 & 1) != 0 )
      {
        v13 = *((unsigned __int8 *)v10 + 14) | 1;
        *((_BYTE *)v10 + 14) = v13;
      }
      if ( (v14 & 8) != 0 )
      {
        v13 = *((unsigned __int8 *)v10 + 14) | 8;
        *((_BYTE *)v10 + 14) = v13;
      }
      if ( (v14 & 0x20) != 0 )
      {
        v13 = *((unsigned __int8 *)v10 + 14) | 0x10;
        *((_BYTE *)v10 + 14) = v13;
      }
      if ( (v14 & 0x40) != 0 )
        *((_BYTE *)v10 + 14) |= 4u;
      v15 = *(unsigned __int8 *)(v9 + 296);
      if ( v15 == 4 )
      {
        *((_BYTE *)v10 + 14) |= 0x40u;
      }
      else if ( v15 > 5 )
      {
        *((_BYTE *)v10 + 14) = ~((unsigned int)~(*((unsigned __int8 *)v10 + 14) << 25) >> 25);
      }
      *((_BYTE *)v10 + 15) = *(_BYTE *)(v9 + 63);
      v16 = *(double *)(v9 + 608);
      v10[4] = bswap32((int)(*(double *)(v9 + 616) * 65536.0));
      LODWORD(v8) = 32;
      ldexp(v8, v13);
      if ( v16 < 0.0 )
        v17 = -sub_8C010(COERCE_UNSIGNED_INT64(-v16), HIDWORD(COERCE_UNSIGNED_INT64(-v16)));
      else
        v17 = sub_8C010(LODWORD(v16), HIDWORD(v16));
      v18 = *(double *)(v9 + 632);
      LODWORD(v17) = bswap32(v17);
      v10[5] = bswap32(HIDWORD(v17));
      v10[6] = v17;
      v19 = sqrt(v18);
      if ( v18 < 0.0 )
        sqrt(*(double *)&v17);
      v10[7] = bswap32((unsigned int)(v19 * 65536.0));
      v10 = (int *)sub_3A918();
LABEL_33:
      v9 = *(_DWORD *)v9;
      v20 = v9 == 0;
      if ( v9 )
        v20 = v10 == 0;
      if ( v20 )
        return sub_3B02C();
      v4 = dword_BCB2C;
    }
  }
  return sub_3B02C();
}
