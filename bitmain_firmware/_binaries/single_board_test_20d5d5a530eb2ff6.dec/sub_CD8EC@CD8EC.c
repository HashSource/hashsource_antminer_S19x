int __fastcall sub_CD8EC(int a1, int *a2, int a3)
{
  int v3; // r4
  int v4; // r3
  bool v5; // zf
  int *v7; // r7
  int v8; // r5
  int v10; // r3
  int v11; // r3
  int v12; // r6
  void *v13; // r3
  size_t v14; // r2
  void *v15; // r0
  int v16; // r3
  int v17; // r0
  int *v18; // r1
  int *v19; // r2
  int v20; // r12
  int v21; // lr
  int v22; // r5
  int v23; // r0
  int v24; // r1

  v3 = **(_DWORD **)(a1 + 12);
  if ( !a2 )
    goto LABEL_10;
  v4 = 1034;
  v5 = v3 == 1034;
  if ( v3 != 1034 )
    v5 = v3 == 1087;
  v7 = a2;
  if ( v5 )
  {
    v8 = 0;
    v4 = 32;
  }
  else
  {
    v8 = 1;
  }
  if ( v5 )
  {
    if ( a3 == v4 )
      goto LABEL_15;
LABEL_10:
    sub_D0048(16, 266, 102, "crypto/ec/ecx_meth.c", 65);
    return 0;
  }
  if ( v3 == 1035 )
    v10 = 56;
  else
    v10 = 57;
  if ( a3 != v10 )
    goto LABEL_10;
LABEL_15:
  v12 = sub_E0740(64, "crypto/ec/ecx_meth.c", 70);
  if ( v12 )
  {
    if ( v8 )
    {
      if ( v3 == 1035 )
      {
        v17 = sub_E12E4(56, "crypto/ec/ecx_meth.c", 80, 1035);
        v18 = v7 + 12;
        v16 = v17;
        *(_DWORD *)(v12 + 60) = v17;
        v19 = (int *)v17;
        if ( v17 )
        {
          do
          {
            v20 = *v7;
            v7 += 4;
            v21 = *(v7 - 3);
            v19 += 4;
            v22 = *(v7 - 2);
            v23 = *(v7 - 1);
            *(v19 - 4) = v20;
            *(v19 - 3) = v21;
            *(v19 - 2) = v22;
            *(v19 - 1) = v23;
          }
          while ( v7 != v18 );
          v24 = v7[1];
          *v19 = *v7;
          v19[1] = v24;
          goto LABEL_33;
        }
      }
      else
      {
        v13 = (void *)sub_E12E4(57, "crypto/ec/ecx_meth.c", 80, 1035);
        *(_DWORD *)(v12 + 60) = v13;
        if ( v13 )
        {
          v14 = 57;
LABEL_19:
          v15 = memcpy(v13, v7, v14);
          v16 = (int)v15;
          if ( v3 != 1035 )
          {
            if ( v3 <= 1035 )
            {
              if ( v3 == 1034 )
                sub_14F904(v12, v15);
            }
            else if ( v3 == 1087 )
            {
              sub_14F80C(v12, v15);
            }
            else if ( v3 == 1088 )
            {
              sub_15551C(v12, v15);
            }
            goto LABEL_24;
          }
LABEL_33:
          sub_154E38(v12, v16);
LABEL_24:
          sub_D9F44(a1, v3, v12, v16);
          return 1;
        }
      }
    }
    else
    {
      v13 = (void *)sub_E12E4(32, "crypto/ec/ecx_meth.c", 80, v11);
      *(_DWORD *)(v12 + 60) = v13;
      if ( v13 )
      {
        v14 = 32;
        goto LABEL_19;
      }
    }
    sub_D0048(16, 266, 65, "crypto/ec/ecx_meth.c", 82);
    CRYPTO_free(v12, "crypto/ec/ecx_meth.c", 121);
    return 0;
  }
  else
  {
    sub_D0048(16, 266, 65, "crypto/ec/ecx_meth.c", 72);
    return 0;
  }
}
