int __fastcall sub_C51B4(int a1, int a2)
{
  int *v2; // r6
  int v3; // r5
  int v5; // r0
  int v6; // r4
  int v7; // r10
  int v8; // r3
  int v9; // r8
  int v10; // r3
  int *v11; // r11
  int v12; // r8
  int v13; // r0
  int v14; // r4
  int v15; // r0
  signed int v16; // r4
  char *v17; // r8
  int v18; // r0
  int v19; // r7
  int v21; // r0
  char *v22; // r7
  int v23; // r1
  _DWORD *v24; // t1
  int v25; // r9
  _UNKNOWN **v26; // r6
  _DWORD *v27; // r5
  bool v28; // cc
  int v29; // r2
  char *v30; // r5
  bool v31; // zf
  int v32; // [sp+8h] [bp-34h]
  int n; // [sp+Ch] [bp-30h]
  int v34; // [sp+14h] [bp-28h]
  int v35; // [sp+14h] [bp-28h]
  void *s2; // [sp+18h] [bp-24h]
  int v37; // [sp+1Ch] [bp-20h]
  int v38; // [sp+20h] [bp-1Ch] BYREF
  int v39; // [sp+24h] [bp-18h]
  int v40; // [sp+28h] [bp-14h]
  int v41; // [sp+2Ch] [bp-10h]
  int v42; // [sp+30h] [bp-Ch]
  int v43; // [sp+34h] [bp-8h]
  char v44; // [sp+38h] [bp-4h] BYREF

  v2 = &v38;
  v3 = a2;
  v39 = 0;
  v38 = 0;
  v40 = 0;
  v41 = 0;
  v42 = 0;
  v43 = 0;
  v5 = sub_C620C(a1, a2);
  if ( !v5 )
    return -1;
  v6 = v5;
  v34 = sub_C6284(a1);
  v7 = sub_C6210(v6);
  n = sub_C6310(a1);
  s2 = (void *)sub_C630C(a1);
  v32 = sub_C627C(a1);
  sub_130BC0(v3);
  v8 = sub_B85BC(*(_DWORD **)(a1 + 8));
  v9 = v8 + 14;
  v10 = v8 + 7;
  if ( v10 < 0 )
    v10 = v9;
  v11 = &v38;
  v12 = v10 >> 3;
  v13 = sub_B85BC(*(_DWORD **)(a1 + 40));
  v14 = v13 + 14;
  v15 = v13 + 7;
  if ( v15 >= 0 )
    v14 = v15;
  v16 = v14 >> 3;
  if ( v16 < v12 )
    v16 = v12;
  v17 = (char *)CRYPTO_malloc(6 * v16, "crypto/ec/ec_curve.c", 3274);
  if ( v17 )
  {
    while ( 1 )
    {
      v18 = sub_130CCC(v3);
      *v11++ = v18;
      if ( !v18 )
        break;
      if ( &v44 == (char *)v11 )
      {
        if ( sub_C6348(a1, v38, v39, v40, v3) )
        {
          v21 = sub_C6214(a1);
          if ( v21 )
          {
            if ( sub_C6D34(a1, v21, v41, v42, v3) && sub_C621C(a1, v43, v3) )
            {
              v22 = v17;
              while ( 1 )
              {
                v23 = (int)v22;
                v24 = (_DWORD *)*v2++;
                v22 += v16;
                if ( sub_B8CD4(v24, v23, v16) <= 0 )
                  break;
                if ( v2 == (int *)&v44 )
                {
                  v25 = v34;
                  v37 = v3;
                  v26 = &off_205660;
                  do
                  {
                    v27 = *(v26 - 12);
                    __pld(v26);
                    if ( v7 == *v27 && v27[2] == v16 )
                    {
                      v19 = (int)*(v26 - 13);
                      v28 = v19 <= v25;
                      if ( v19 != v25 )
                        v28 = v25 <= 0;
                      if ( v28 )
                      {
                        v35 = v27[1];
                        if ( sub_B85B0(v32) || sub_B86F0(v32, v27[3]) )
                        {
                          v29 = v27[1];
                          v30 = (char *)(v27 + 4);
                          v31 = n == 0;
                          if ( n )
                            v31 = v29 == 0;
                          if ( (v31 || n == v29 && !memcmp(v30, s2, n)) && !memcmp(v17, &v30[v35], 6 * v16) )
                          {
                            v3 = v37;
                            goto LABEL_13;
                          }
                        }
                      }
                    }
                    v26 += 4;
                  }
                  while ( &unk_205B80 != (_UNKNOWN *)v26 );
                  v3 = v37;
                  v19 = 0;
                  goto LABEL_13;
                }
              }
            }
          }
        }
        break;
      }
    }
  }
  v19 = -1;
LABEL_13:
  CRYPTO_free(v17, "crypto/ec/ec_curve.c", 3335);
  sub_130C74(v3);
  return v19;
}
