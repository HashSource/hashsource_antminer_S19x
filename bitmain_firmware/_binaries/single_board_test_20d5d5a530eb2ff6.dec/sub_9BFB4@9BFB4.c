int __fastcall sub_9BFB4(_DWORD *a1, int a2, int *a3)
{
  int v6; // r4
  int v7; // r7
  int v8; // r0
  int v9; // r2
  int v10; // r3
  int *v11; // r3
  _BOOL4 v12; // lr
  int v13; // r4
  int v14; // r4
  int result; // r0
  int v16; // r3
  int v17; // r2
  int v18; // r3
  int v19; // r9
  int v20; // r0
  int v21; // r8
  int v22; // r0
  int v23; // r11
  int v24; // r1
  int v25; // r2
  int v26; // r4
  int v27; // r9
  int v28; // r7
  _BOOL4 v29; // r0
  int v30; // r1
  int v31; // r2
  int v32; // r4
  int v33; // r0
  bool v34; // cc
  int v35; // r1
  int v36; // [sp+Ch] [bp-10h]
  _BYTE v37[8]; // [sp+14h] [bp-8h] BYREF

  if ( !sub_A8398(a2, 3) )
  {
    v16 = 1011;
LABEL_17:
    sub_95494(a1, 80, 147, 68, (int)"ssl/statem/statem_lib.c", v16);
    return 0;
  }
  if ( a3 )
  {
    v6 = *a3;
    if ( *a3 )
    {
      v7 = a3[2];
      if ( v7 )
      {
LABEL_5:
        v8 = sub_A4E74(a1, v7, v6);
        if ( v8 != 1 )
        {
          v9 = 989;
          v10 = v8;
LABEL_27:
          sub_95494(a1, 80, 316, v10, (int)"ssl/statem/statem_lib.c", v9);
          return 0;
        }
        v29 = sub_9B274(a1, a2, v6, 0);
        v32 = 0;
        if ( !v29 )
          return 0;
        while ( 1 )
        {
          v34 = v32 < sub_10C010(v7, v30, v31);
          v35 = v32++;
          if ( !v34 )
            break;
          v33 = sub_10C01C(v7, v35);
          if ( !sub_9B274(a1, a2, v33, v32) )
            return 0;
        }
        goto LABEL_14;
      }
      v17 = a1[308];
      v18 = (a1[316] >> 3) & 1;
      if ( *(_DWORD *)(v17 + 152) )
        v18 = 1;
      if ( v18 )
      {
        v7 = *(_DWORD *)(v17 + 152);
        goto LABEL_5;
      }
      v19 = *(_DWORD *)(a1[257] + 232);
      if ( !v19 )
      {
        v19 = *(_DWORD *)(v17 + 16);
        if ( !v19 )
          goto LABEL_5;
      }
      v20 = sub_112CD8();
      v21 = v20;
      if ( !v20 )
      {
        sub_95494(a1, 80, 316, 65, (int)"ssl/statem/statem_lib.c", 944);
        return 0;
      }
      if ( !sub_112DA0(v20, v19, v6, 0) )
      {
        sub_112D7C(v21);
        sub_95494(a1, 80, 316, 11, (int)"ssl/statem/statem_lib.c", 950);
        return 0;
      }
      v22 = sub_112694(v21);
      sub_D00F0(v22);
      v23 = sub_112BB8(v21);
      v26 = sub_A4E74(a1, v23, 0);
      if ( v26 != 1 )
      {
        sub_112D7C(v21);
        v9 = 972;
        v10 = v26;
        goto LABEL_27;
      }
      v36 = sub_10C010(v23, v24, v25);
      if ( v36 > 0 )
      {
        v13 = 0;
        while ( 1 )
        {
          v27 = sub_10C01C(v23, v13);
          v28 = i2d_X509(v27, 0);
          if ( v28 < 0 )
            break;
          if ( !sub_A8420(a2, v28, v37, 3) || v28 != i2d_X509(v27, v37) )
          {
            sub_95494(a1, 80, 493, 68, (int)"ssl/statem/statem_lib.c", 896);
            goto LABEL_36;
          }
          v11 = (int *)a1[1];
          if ( (*(_DWORD *)(v11[25] + 48) & 8) == 0 )
          {
            v12 = *v11 != 0x10000;
            if ( *v11 < 772 )
              v12 = 0;
            if ( v12 && !sub_8F72C(a1, a2, 4096, v27, v13) )
              goto LABEL_36;
          }
          if ( v36 == ++v13 )
            goto LABEL_13;
        }
        sub_95494(a1, 80, 493, 7, (int)"ssl/statem/statem_lib.c", 890);
LABEL_36:
        sub_112D7C(v21);
        return 0;
      }
LABEL_13:
      sub_112D7C(v21);
    }
  }
LABEL_14:
  v14 = sub_A7EDC(a2);
  result = 1;
  if ( !v14 )
  {
    v16 = 1020;
    goto LABEL_17;
  }
  return result;
}
