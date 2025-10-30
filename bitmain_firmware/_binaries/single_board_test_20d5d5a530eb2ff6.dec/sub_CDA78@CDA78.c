int __fastcall sub_CDA78(int a1, int a2)
{
  int v4; // r0
  int v5; // r6
  int v6; // r0
  _DWORD *v7; // r3
  int v8; // r4
  int *v9; // r2
  int *v10; // r8
  int v11; // r5
  bool v12; // zf
  int v13; // r9
  int v14; // r3
  int v15; // r2
  int v16; // r4
  int v17; // r3
  int v18; // r10
  void *v19; // r3
  size_t v20; // r2
  void *v21; // r0
  int v22; // r3
  int *v23; // r2
  int v24; // r0
  int *v25; // r1
  int *v26; // r2
  int v27; // r12
  int v28; // lr
  int v29; // r4
  int v30; // r0
  int v31; // r1
  int v32; // [sp+8h] [bp-10h] BYREF
  int v33; // [sp+Ch] [bp-Ch] BYREF
  _DWORD *v34; // [sp+10h] [bp-8h] BYREF
  int v35; // [sp+14h] [bp-4h] BYREF

  if ( !sub_AE64C(0, &v32, &v33, &v34, a2) )
    return 0;
  v4 = sub_B2038(0, (void **)&v32, v33);
  v5 = v4;
  if ( v4 )
  {
    v32 = sub_AE2B4(v4);
    v6 = sub_AE2A8(v5);
    v7 = v34;
    v8 = v6;
    v9 = *(int **)(a1 + 12);
    v33 = v6;
    v10 = (int *)v32;
    v11 = *v9;
    if ( !v34 )
      goto LABEL_6;
    goto LABEL_5;
  }
  v7 = v34;
  v8 = 0;
  v23 = *(int **)(a1 + 12);
  v10 = 0;
  v32 = 0;
  v33 = 0;
  v11 = *v23;
  if ( v34 )
  {
LABEL_5:
    sub_B294C(0, &v35, 0, v7);
    if ( v35 != -1 )
    {
      v15 = 59;
      goto LABEL_17;
    }
LABEL_6:
    if ( !v10 )
      goto LABEL_16;
    v12 = v11 == 1034;
    if ( v11 != 1034 )
      v12 = v11 == 1087;
    if ( v12 )
    {
      v13 = 0;
      v14 = 32;
    }
    else
    {
      v13 = 1;
      v14 = v11 == 1035 ? 56 : 57;
    }
    if ( v14 != v8 )
      goto LABEL_16;
    v18 = sub_E0740(64, "crypto/ec/ecx_meth.c", 70);
    if ( !v18 )
    {
      v16 = 0;
      sub_D0048(16, 266, 65, "crypto/ec/ecx_meth.c", 72);
      goto LABEL_18;
    }
    if ( v13 )
    {
      if ( v11 == 1035 )
      {
        v24 = sub_E12E4(56, "crypto/ec/ecx_meth.c", 80, 1035);
        v25 = v10 + 12;
        v22 = v24;
        *(_DWORD *)(v18 + 60) = v24;
        v26 = (int *)v24;
        if ( v24 )
        {
          do
          {
            v27 = *v10;
            v10 += 4;
            v28 = *(v10 - 3);
            v26 += 4;
            v29 = *(v10 - 2);
            v30 = *(v10 - 1);
            *(v26 - 4) = v27;
            *(v26 - 3) = v28;
            *(v26 - 2) = v29;
            *(v26 - 1) = v30;
          }
          while ( v10 != v25 );
          v31 = v10[1];
          *v26 = *v10;
          v26[1] = v31;
          goto LABEL_40;
        }
      }
      else
      {
        v19 = (void *)sub_E12E4(57, "crypto/ec/ecx_meth.c", 80, 1035);
        *(_DWORD *)(v18 + 60) = v19;
        if ( v19 )
        {
          v20 = 57;
LABEL_24:
          v21 = memcpy(v19, v10, v20);
          v22 = (int)v21;
          if ( v11 != 1035 )
          {
            if ( v11 <= 1035 )
            {
              if ( v11 == 1034 )
                sub_14F904(v18, v21);
            }
            else if ( v11 == 1087 )
            {
              sub_14F80C(v18, v21);
            }
            else if ( v11 == 1088 )
            {
              sub_15551C(v18, v21);
            }
            goto LABEL_29;
          }
LABEL_40:
          sub_154E38(v18, v22);
LABEL_29:
          v16 = 1;
          sub_D9F44(a1, v11, v18, v22);
          goto LABEL_18;
        }
      }
    }
    else
    {
      v19 = (void *)sub_E12E4(32, "crypto/ec/ecx_meth.c", 80, v17);
      *(_DWORD *)(v18 + 60) = v19;
      if ( v19 )
      {
        v20 = 32;
        goto LABEL_24;
      }
    }
    v16 = 0;
    sub_D0048(16, 266, 65, "crypto/ec/ecx_meth.c", 82);
    CRYPTO_free(v18, "crypto/ec/ecx_meth.c", 121);
    goto LABEL_18;
  }
LABEL_16:
  v15 = 65;
LABEL_17:
  v16 = 0;
  sub_D0048(16, 266, 102, "crypto/ec/ecx_meth.c", v15);
LABEL_18:
  sub_AE254(v5);
  return v16;
}
