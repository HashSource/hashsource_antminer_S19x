int __fastcall sub_17CF2C(int a1, int a2, int a3, int a4)
{
  int v8; // r4
  int v9; // r0
  bool v10; // zf
  int v11; // r1
  int v12; // r9
  int v13; // r4
  int result; // r0
  int v15; // r3
  int v16; // r2
  int v17; // r1
  int v18; // r3
  int v19; // r0
  int v20; // r3
  int v21; // r6
  int v22; // r2
  int *v23; // r0
  int v24; // r2

  v8 = sub_B66C8(a1);
  v9 = sub_B7170(a1);
  v10 = v9 == 0;
  if ( v9 )
    v10 = v8 == 0;
  v11 = v10;
  if ( v10 )
    return 0;
  v12 = v9;
  if ( a2 == 11 )
  {
    v19 = *(_DWORD *)v8;
    v20 = *(_DWORD *)(v8 + 4);
    v21 = v11;
    while ( v20 == v19 )
    {
LABEL_32:
      if ( (sub_B6708(a1, -1) & 0x100) != 0 )
      {
        v22 = *(_DWORD *)(v8 + 8);
        if ( !v22 )
          return sub_B6ECC(v12, 11, a3, a4);
        v19 = sub_15DC10((_BYTE *)(v8 + 32), v8 + 1534, v22);
        v20 = 0;
        *(_DWORD *)v8 = v19;
        *(_DWORD *)(v8 + 4) = v21;
        *(_DWORD *)(v8 + 8) = v21;
      }
      else
      {
        if ( !*(_DWORD *)(v8 + 16) || !sub_15DAA4(*(_DWORD *)(v8 + 28)) )
          return sub_B6ECC(v12, 11, a3, a4);
        v23 = *(int **)(v8 + 28);
        *(_DWORD *)(v8 + 4) = 0;
        sub_15DBE4(v23, (_BYTE *)(v8 + 32), (int *)v8);
        v19 = *(_DWORD *)v8;
        v20 = *(_DWORD *)(v8 + 4);
      }
    }
    while ( 1 )
    {
      result = sub_17CB4C(a1, 0, 0);
      if ( result < 0 )
        break;
      if ( *(_DWORD *)(v8 + 4) == *(_DWORD *)v8 )
        goto LABEL_32;
    }
  }
  else
  {
    if ( a2 <= 11 )
    {
      switch ( a2 )
      {
        case 2:
          if ( *(int *)(v8 + 24) <= 0 )
            return 1;
          break;
        case 10:
          v24 = *(_DWORD *)(v8 + 4);
          if ( *(_DWORD *)v8 < v24 )
            sub_BC328("assertion failed: ctx->buf_len >= ctx->buf_off", "crypto/evp/bio_b64.c", 483);
          if ( *(_DWORD *)v8 != v24 )
            return *(_DWORD *)v8 - v24;
          break;
        case 1:
          *(_DWORD *)(v8 + 16) = v11;
          v15 = a4;
          *(_DWORD *)(v8 + 24) = 1;
          v16 = a3;
          *(_DWORD *)(v8 + 20) = 1;
          v17 = 1;
          return sub_B6ECC(v9, v17, v16, v15);
      }
LABEL_16:
      v15 = a4;
      v16 = a3;
      v17 = a2;
      return sub_B6ECC(v9, v17, v16, v15);
    }
    if ( a2 != 13 )
    {
      if ( a2 >= 13 )
      {
        if ( a2 == 101 )
        {
          sub_B66FC(a1, 15);
          v13 = sub_B6ECC(v12, 101, a3, a4);
          sub_B724C(a1);
          return v13;
        }
        goto LABEL_16;
      }
      return 1;
    }
    v18 = *(_DWORD *)(v8 + 4);
    if ( *(_DWORD *)v8 < v18 )
      sub_BC328("assertion failed: ctx->buf_len >= ctx->buf_off", "crypto/evp/bio_b64.c", 474);
    result = *(_DWORD *)v8 - v18;
    if ( !result )
    {
      if ( !*(_DWORD *)(v8 + 16) || !sub_15DAA4(*(_DWORD *)(v8 + 28)) )
        return sub_B6ECC(v12, 13, a3, a4);
      return 1;
    }
  }
  return result;
}
