int __fastcall sub_3E4D0(struct sockaddr *a1, int a2, int a3)
{
  char v3; // r7
  char v4; // r2
  unsigned int v5; // r5
  int v6; // r12
  __int16 v7; // lr
  int *v8; // r12
  _DWORD *v9; // r4
  int v10; // r1
  int v11; // r2
  int v12; // r3
  int v13; // r1
  int v14; // r2
  int v15; // r3
  int v16; // r2
  int v17; // r0
  unsigned int v18; // r1
  int v19; // r3
  _BOOL4 v20; // r3
  unsigned int v21; // lr
  int v22; // r2
  int v23; // r1
  int v24; // r3

  v3 = *(_BYTE *)(a3 + 2);
  v4 = *(_BYTE *)(a3 + 3);
  if ( num_ctl_traps )
  {
    v5 = 0;
    dword_BCB24 = a2;
    byte_BC927 = v4;
    byte_BC926 = v3;
    if ( dword_BCB2C )
      v6 = 64;
    else
      v6 = 28;
    if ( dword_BCB2C )
      v7 = 0x4000;
    else
      v7 = 7168;
    dword_BC91C = v6;
    v8 = &dword_BC92C;
    dword_BCB28 = (int)a1;
    word_BC92A = v7;
    dword_BCB20 = 0;
    dword_BC910 = 0;
    dword_BC914 = 0;
    dword_BC918 = 0;
    v9 = &ctl_traps;
    while ( 1 )
    {
      v21 = *((unsigned __int8 *)v9 + 50);
      if ( (v21 & 1) == 0 )
        goto LABEL_12;
      v22 = dword_BCB2C;
      if ( *(_WORD *)v9 == 2 )
        break;
      if ( dword_BCB2C )
      {
        v10 = *(_DWORD *)(v9[7] + 36);
        v11 = *(_DWORD *)(v9[7] + 40);
        v12 = *(_DWORD *)(v9[7] + 44);
        v8[8] = *(_DWORD *)(v9[7] + 32);
        v8[9] = v10;
        v8[10] = v11;
        v8[11] = v12;
        v13 = v9[3];
        v14 = v9[4];
        v15 = v9[5];
        v8[12] = v9[2];
        v8[13] = v13;
        v8[14] = v14;
        v8[15] = v15;
        v8[7] = 1;
LABEL_11:
        v16 = v9[8];
        *((_WORD *)v8 + 4) = *((_WORD *)v9 + 1);
        v17 = v9[10];
        *((_WORD *)v8 + 5) = __rev16(*((unsigned __int16 *)v9 + 24));
        v18 = v9[11];
        v8[6] = bswap32(v21);
        v19 = current_time;
        v8[5] = bswap32(v18);
        *(_QWORD *)(v8 + 3) = _byteswap_uint64(__PAIR64__(v19 - v16, v19 - v17));
        v8 = (int *)sub_3A918();
      }
LABEL_12:
      ++v5;
      v9 += 13;
      v20 = v5 <= 2;
      if ( !v8 )
        v20 = 0;
      if ( !v20 )
        return sub_3B02C();
    }
    v23 = v9[7];
    if ( v23 == any_interface )
      v24 = 0;
    else
      v24 = *(_DWORD *)(v23 + 28);
    *v8 = v24;
    v8[1] = v9[1];
    if ( v22 )
      v8[7] = 0;
    goto LABEL_11;
  }
  return sub_3AD58(a1, a2, v3, v4, 4);
}
