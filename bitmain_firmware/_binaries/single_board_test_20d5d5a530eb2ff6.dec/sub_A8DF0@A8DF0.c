int __fastcall sub_A8DF0(int a1)
{
  int v1; // r4
  _DWORD *v4; // r3
  int v5; // r2
  int v6; // r0
  int v7; // r4
  int v8; // r4
  int v9; // r11
  int v10; // r0
  int v11; // r3
  int v12; // r9
  int v13; // r0
  bool v14; // zf
  int v15; // r7
  int v16; // r8
  void *v17; // r0
  int v18; // r5
  char v19; // r4
  int v20; // r0
  int v21; // r0
  int v22; // r0
  int v23; // r1
  int v24; // r2
  int v25; // r2
  int v26; // r3
  int v27; // [sp+4h] [bp-50h]
  int v28; // [sp+14h] [bp-40h]
  void *dest; // [sp+18h] [bp-3Ch]
  int v30; // [sp+20h] [bp-34h] BYREF
  int v31; // [sp+24h] [bp-30h] BYREF
  int v32; // [sp+28h] [bp-2Ch] BYREF
  _BYTE v33[16]; // [sp+2Ch] [bp-28h] BYREF
  _BYTE v34[20]; // [sp+3Ch] [bp-18h] BYREF

  v1 = 1;
  if ( *(_DWORD *)(*(_DWORD *)(a1 + 124) + 552) )
    return v1;
  if ( !sub_86258(*(int **)(a1 + 1140), &v30, &v31, 0, 0, &v32, 0) )
  {
    sub_95494((_DWORD *)a1, 80, 157, 138, (int)"ssl/s3_enc.c", 259);
    return 0;
  }
  v4 = *(_DWORD **)(a1 + 124);
  v5 = v32;
  v6 = v31;
  v4[140] = v30;
  v4[144] = v5;
  v4[141] = v6;
  v7 = sub_D8C78(v6);
  if ( v7 < 0 )
    return 0;
  v8 = v7 + sub_D8AD0(v30);
  v9 = 2 * (sub_D8940(v30) + v8);
  sub_A8DC4(a1);
  v10 = CRYPTO_malloc(v9, "ssl/s3_enc.c", 280);
  v28 = v10;
  if ( !v10 )
  {
    v1 = 0;
    sub_95494((_DWORD *)a1, 80, 157, 65, (int)"ssl/s3_enc.c", 282);
    return v1;
  }
  v11 = *(_DWORD *)(a1 + 124);
  *(_DWORD *)(v11 + 552) = v9;
  *(_DWORD *)(v11 + 556) = v10;
  v12 = sub_D14F4(v10);
  v13 = sub_D14F4(v12);
  v14 = v13 == 0;
  if ( v13 )
    v14 = v12 == 0;
  v15 = v13;
  v16 = v14;
  if ( v14 )
  {
    v1 = 0;
    sub_95494((_DWORD *)a1, 80, 238, 65, (int)"ssl/s3_enc.c", 34);
    goto LABEL_49;
  }
  v17 = (void *)sub_D8DA4(v12, 8);
  if ( v9 <= 0 )
  {
LABEL_58:
    sub_E07F8((int)v34, 0x14u);
    v1 = 1;
    goto LABEL_49;
  }
  v33[0] = 65;
  v18 = 1;
  while ( 1 )
  {
    v19 = v18 + 65;
    dest = (void *)(v28 + v16);
    v20 = sub_D93D8(v17);
    if ( !sub_D1520(v15, v20, 0)
      || !sub_D16D8(v15, v33, v18)
      || !sub_D16D8(v15, *(_DWORD *)(a1 + 1140) + 72, *(_DWORD *)(*(_DWORD *)(a1 + 1140) + 4))
      || !sub_D16D8(v15, *(_DWORD *)(a1 + 124) + 140, 32)
      || !sub_D16D8(v15, *(_DWORD *)(a1 + 124) + 172, 32)
      || (v21 = sub_D16E4(v15, v34, 0)) == 0
      || (v22 = sub_D902C(v21), !sub_D1520(v12, v22, 0))
      || !sub_D16D8(v12, *(_DWORD *)(a1 + 1140) + 72, *(_DWORD *)(*(_DWORD *)(a1 + 1140) + 4))
      || !sub_D16D8(v12, v34, 20) )
    {
      v26 = 62;
      goto LABEL_55;
    }
    v16 += 16;
    if ( v16 > v9 )
    {
      if ( !sub_D16E4(v12, v34, 0) )
      {
        v27 = 68;
        goto LABEL_46;
      }
      v17 = memcpy(dest, v34, v9 + 16 - v16);
    }
    else
    {
      v17 = (void *)sub_D16E4(v12, dest, 0);
      if ( !v17 )
      {
        v27 = 75;
LABEL_46:
        v1 = 0;
        sub_95494((_DWORD *)a1, 80, 238, 68, (int)"ssl/s3_enc.c", v27);
        goto LABEL_49;
      }
    }
    if ( v16 >= v9 )
      goto LABEL_58;
    ++v18;
    if ( v16 == 256 )
      break;
    v33[0] = v19;
    v33[1] = v19;
    if ( v18 != 2 )
    {
      v33[2] = v19;
      if ( v18 != 3 )
      {
        v33[3] = v19;
        if ( v18 != 4 )
        {
          v33[4] = v19;
          if ( v18 != 5 )
          {
            v33[5] = v19;
            if ( v18 != 6 )
            {
              v33[6] = v19;
              if ( v18 != 7 )
              {
                v33[7] = v19;
                if ( v18 != 8 )
                {
                  v33[8] = v19;
                  if ( v18 != 9 )
                  {
                    v33[9] = v19;
                    if ( v18 != 10 )
                    {
                      v33[10] = v19;
                      if ( v18 != 11 )
                      {
                        v33[11] = v19;
                        if ( v18 != 12 )
                        {
                          v33[12] = v19;
                          if ( v18 != 13 )
                          {
                            v33[13] = v19;
                            if ( v18 != 14 )
                            {
                              v33[14] = v19;
                              if ( v18 == 16 )
                                v33[15] = v19;
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  v26 = 43;
LABEL_55:
  sub_95494((_DWORD *)a1, 80, 238, 68, (int)"ssl/s3_enc.c", v26);
  v1 = 0;
LABEL_49:
  sub_D1504(v12);
  sub_D1504(v15);
  if ( (*(_DWORD *)(a1 + 1260) & 0x800) == 0 )
  {
    v23 = *(_DWORD *)(a1 + 124);
    v24 = *(_DWORD *)(*(_DWORD *)(a1 + 1140) + 440);
    *(_DWORD *)(v23 + 204) = 1;
    if ( v24 )
    {
      v25 = *(_DWORD *)(v24 + 24);
      if ( v25 == 32 || v25 == 4 )
        *(_DWORD *)(v23 + 204) = 0;
    }
  }
  return v1;
}
