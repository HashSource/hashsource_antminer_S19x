int __fastcall sub_C9510(_BYTE *a1, int a2, int *a3, int a4)
{
  int *v8; // r6
  int v9; // r0
  bool v10; // zf
  int v11; // r7
  int v12; // r0
  int v13; // r4
  int v14; // r8
  int *v15; // r9
  int *v16; // r10
  int v17; // r5
  int v19; // r0
  int v20; // r11
  int v21; // r11
  int v22; // r2
  int *v23; // r0
  int *v24; // [sp+8h] [bp-14h]
  int v25; // [sp+Ch] [bp-10h]
  _DWORD *v26; // [sp+10h] [bp-Ch]
  int v27; // [sp+14h] [bp-8h]

  if ( !a4 )
    goto LABEL_22;
  v8 = (int *)sub_C59B8(a4);
  if ( !v8 )
    goto LABEL_22;
  v9 = sub_C5A68(a4);
  v10 = a3 == 0;
  if ( a3 )
    v10 = v9 == 0;
  v11 = v9;
  if ( !v10 )
  {
    if ( sub_C5E34(a4) )
    {
      v12 = sub_130B08();
      v13 = v12;
      if ( v12 )
      {
        sub_130BC0(v12);
        v24 = (int *)sub_130CCC(v13);
        v25 = sub_130CCC(v13);
        v26 = (_DWORD *)sub_130CCC(v13);
        v14 = sub_130CCC(v13);
        if ( !v14 )
        {
          v16 = 0;
          v17 = -1;
          sub_D0048(16, 250, 3, "crypto/ec/ecdsa_ossl.c", 351);
          goto LABEL_12;
        }
        v15 = (int *)sub_C6244((int)v8);
        if ( !v15 )
        {
          v16 = 0;
          v17 = -1;
          sub_D0048(16, 250, 16, "crypto/ec/ecdsa_ossl.c", 357);
          goto LABEL_12;
        }
        if ( sub_B85B0(*a3)
          || sub_B8720(*a3)
          || sub_B82F8((int *)*a3, v15) >= 0
          || sub_B85B0(a3[1])
          || sub_B8720(a3[1])
          || sub_B82F8((int *)a3[1], v15) >= 0 )
        {
          v16 = 0;
          v17 = 0;
          sub_D0048(16, 250, 156, "crypto/ec/ecdsa_ossl.c", 364);
LABEL_12:
          sub_130C74(v13);
          sub_130B5C(v13);
          sub_C6490((int)v16);
          return v17;
        }
        if ( !sub_C73A8(v8, v25, a3[1], v13) )
        {
          v16 = 0;
          v17 = -1;
          sub_D0048(16, 250, 3, "crypto/ec/ecdsa_ossl.c", 370);
          goto LABEL_12;
        }
        v19 = sub_B85BC(v15);
        if ( v19 >= 8 * a2 )
        {
          if ( sub_B8AEC(a1, a2, v26) )
            goto LABEL_31;
        }
        else
        {
          v20 = v19 + 7;
          v27 = v19;
          if ( v19 + 7 < 0 )
            v20 = v19 + 14;
          v21 = v20 >> 3;
          if ( sub_B8AEC(a1, v21, v26) )
          {
            if ( v27 < 8 * v21 )
            {
              v16 = (int *)sub_BA7EC(v26, v26, 8 - (v27 & 7));
              if ( !v16 )
              {
                v22 = 386;
LABEL_33:
                v17 = -1;
                sub_D0048(16, 250, 3, "crypto/ec/ecdsa_ossl.c", v22);
                goto LABEL_12;
              }
            }
LABEL_31:
            v16 = (int *)sub_133F3C(v24, v26, v25, v15, v13);
            if ( v16 )
            {
              v16 = (int *)sub_133F3C(v25, *a3, v25, v15, v13);
              if ( v16 )
              {
                v23 = sub_C63F4(v8);
                v16 = v23;
                if ( v23 )
                {
                  if ( sub_C7330(v8, v23, (int)v24, v11, v25, v13) )
                  {
                    if ( sub_C6D34(v8, v16, v14, 0, v13) )
                    {
                      if ( sub_1337FC(v24, v14, v15, v13) )
                      {
                        v17 = sub_B82F8(v24, (int *)*a3) == 0;
                      }
                      else
                      {
                        v17 = -1;
                        sub_D0048(16, 250, 3, "crypto/ec/ecdsa_ossl.c", 415);
                      }
                    }
                    else
                    {
                      v17 = -1;
                      sub_D0048(16, 250, 16, "crypto/ec/ecdsa_ossl.c", 410);
                    }
                  }
                  else
                  {
                    v17 = -1;
                    sub_D0048(16, 250, 16, "crypto/ec/ecdsa_ossl.c", 405);
                  }
                }
                else
                {
                  v17 = -1;
                  sub_D0048(16, 250, 65, "crypto/ec/ecdsa_ossl.c", 401);
                }
                goto LABEL_12;
              }
              v22 = 396;
            }
            else
            {
              v22 = 391;
            }
            goto LABEL_33;
          }
        }
        v16 = 0;
        sub_D0048(16, 250, 3, "crypto/ec/ecdsa_ossl.c", 381);
        v17 = -1;
        goto LABEL_12;
      }
      sub_D0048(16, 250, 65, "crypto/ec/ecdsa_ossl.c", 342);
      return -1;
    }
    else
    {
      sub_D0048(16, 250, 159, "crypto/ec/ecdsa_ossl.c", 336);
      return -1;
    }
  }
  else
  {
LABEL_22:
    sub_D0048(16, 250, 124, "crypto/ec/ecdsa_ossl.c", 331);
    return -1;
  }
}
