int __fastcall sub_1F5D00(_DWORD *a1, int a2, int *a3)
{
  _DWORD *v5; // r0
  _DWORD *v6; // r4
  _DWORD *v7; // r5
  unsigned int v8; // r7
  int v9; // r2
  _DWORD *v10; // r2
  _BYTE *v11; // r3
  int v12; // r2
  __int64 v13; // r2
  void *v14; // r0
  int v15; // r1
  int v16; // r2
  _DWORD *v17; // r2
  _BYTE *v18; // r3

  v5 = sub_1F5B04(a1, a2, a3);
  if ( (_DWORD *)a2 == v5 )
    return a2;
  v6 = v5;
  if ( (_DWORD *)a2 != v5 + 19 )
  {
    v7 = v5 + 38;
    v8 = (unsigned int)&v5[19 * ((678152731 * ((unsigned int)(a2 - (_DWORD)(v5 + 38)) >> 2)) & 0x3FFFFFFF) + 57];
    while ( *(v7 - 19) == *a3 && *(v7 - 18) == a3[1] && *(v7 - 17) == a3[2] )
    {
LABEL_13:
      v7 += 19;
      if ( v7 == (_DWORD *)v8 )
        return (int)v6;
    }
    v15 = *(v7 - 18);
    v16 = *(v7 - 17);
    *v6 = *(v7 - 19);
    v6[1] = v15;
    v6[2] = v16;
    v17 = (_DWORD *)*(v7 - 16);
    v18 = (_BYTE *)v6[3];
    if ( v17 == v7 - 14 )
    {
      sub_33B48C(v6 + 3, v7 - 16);
      v18 = (_BYTE *)*(v7 - 16);
    }
    else
    {
      v6[3] = v17;
      if ( v18 == (_BYTE *)(v6 + 5) )
      {
        v6[4] = *(v7 - 15);
        v6[5] = *(v7 - 14);
      }
      else
      {
        v9 = v6[5];
        v6[4] = *(v7 - 15);
        v6[5] = *(v7 - 14);
        if ( v18 )
        {
          *(v7 - 16) = v18;
          *(v7 - 14) = v9;
          goto LABEL_6;
        }
      }
      *(v7 - 16) = v7 - 14;
      v18 = v7 - 14;
    }
LABEL_6:
    *(v7 - 15) = 0;
    *v18 = 0;
    v10 = (_DWORD *)*(v7 - 10);
    v11 = (_BYTE *)v6[9];
    if ( v10 == v7 - 8 )
    {
      sub_33B48C(v6 + 9, v7 - 10);
      v11 = (_BYTE *)*(v7 - 10);
      goto LABEL_10;
    }
    v6[9] = v10;
    if ( v11 == (_BYTE *)(v6 + 11) )
    {
      v6[10] = *(v7 - 9);
      v6[11] = *(v7 - 8);
    }
    else
    {
      v12 = v6[11];
      v6[10] = *(v7 - 9);
      v6[11] = *(v7 - 8);
      if ( v11 )
      {
        *(v7 - 10) = v11;
        *(v7 - 8) = v12;
LABEL_10:
        *(v7 - 9) = 0;
        *v11 = 0;
        LODWORD(v13) = *(v7 - 4);
        v14 = (void *)v6[16];
        v6[17] = 0;
        v6[18] = 0;
        v6[16] = 0;
        HIDWORD(v13) = *(v7 - 3);
        *(_QWORD *)(v6 + 15) = v13;
        *(v7 - 3) = 0;
        HIDWORD(v13) = v6[17];
        v6[17] = *(v7 - 2);
        *(v7 - 2) = HIDWORD(v13);
        HIDWORD(v13) = v6[18];
        v6[18] = *(v7 - 1);
        *(v7 - 1) = HIDWORD(v13);
        if ( v14 )
          sub_339E64(v14);
        v6 += 19;
        goto LABEL_13;
      }
    }
    *(v7 - 10) = v7 - 8;
    v11 = v7 - 8;
    goto LABEL_10;
  }
  return (int)v6;
}
