int __fastcall sub_C8EF8(_BYTE *a1, int a2, int *a3, int a4, int a5)
{
  int v5; // r7
  int v6; // r0
  int v7; // r10
  int v8; // r5
  int v9; // r0
  int *v10; // r3
  int *v11; // r4
  bool v12; // zf
  int v13; // r6
  int *v14; // r11
  int v15; // r0
  int v16; // r8
  _BOOL4 v17; // r3
  char v18; // r2
  int v19; // r2
  int *v20; // r8
  int v21; // r0
  bool v22; // zf
  int v23; // r3
  int **v24; // r0
  int v26; // r3
  int v27; // r2
  int v28; // r2
  int v29; // r2
  int *v30; // r0
  _BOOL4 v33; // [sp+14h] [bp-40h]
  _DWORD *v34; // [sp+18h] [bp-3Ch]
  int v35; // [sp+1Ch] [bp-38h]
  int *v37; // [sp+24h] [bp-30h]
  int *v38; // [sp+28h] [bp-2Ch]
  int *v40; // [sp+30h] [bp-24h]
  int *v41; // [sp+34h] [bp-20h]
  int *v42; // [sp+38h] [bp-1Ch]
  int v43; // [sp+3Ch] [bp-18h]
  int v44; // [sp+40h] [bp-14h]
  _DWORD *v45; // [sp+44h] [bp-10h]

  v5 = sub_C59B8(a5);
  v6 = sub_C59E4(a5);
  if ( v5 )
  {
    v7 = v6;
    if ( v6 )
    {
      if ( sub_C5E34(a5) )
      {
        v8 = sub_C49AC();
        if ( v8 )
        {
          *(_DWORD *)v8 = sub_B822C();
          v9 = sub_B822C();
          v10 = *(int **)v8;
          v11 = (int *)v9;
          *(_DWORD *)(v8 + 4) = v9;
          v12 = v9 == 0;
          if ( v9 )
            v12 = v10 == 0;
          if ( v12 )
          {
            v37 = 0;
            v13 = 0;
            sub_D0048(16, 249, 65, "crypto/ec/ecdsa_ossl.c", 191);
            v14 = 0;
          }
          else
          {
            v13 = sub_130B08();
            if ( v13 && (v14 = (int *)sub_B822C()) != 0 )
            {
              v34 = (_DWORD *)sub_C6244(v5);
              v15 = sub_B85BC(v34);
              v16 = v15;
              if ( v15 >= 8 * a2 )
              {
                if ( sub_B8AEC(a1, a2, v14) )
                  goto LABEL_12;
LABEL_77:
                sub_D0048(16, 249, 3, "crypto/ec/ecdsa_ossl.c", 210);
                v37 = 0;
                goto LABEL_37;
              }
              v26 = v15 + 14;
              if ( v15 + 7 >= 0 )
                v26 = v15 + 7;
              a2 = v26 >> 3;
              if ( !sub_B8AEC(a1, v26 >> 3, v14) )
                goto LABEL_77;
              if ( v16 >= 8 * a2 || sub_BA7EC(v14, v14, 8 - (v16 & 7)) )
              {
LABEL_12:
                v37 = 0;
                v17 = a4 == 0;
                if ( a3 )
                {
                  v18 = 1;
                }
                else
                {
                  v18 = 0;
                  v17 = 1;
                }
                if ( a4 )
                  v19 = v18 & 1;
                else
                  v19 = 0;
                v33 = v17;
                v35 = v19;
                while ( 1 )
                {
                  if ( v33 )
                  {
                    if ( !a5 || (v40 = (int *)sub_C59B8(a5)) == 0 )
                    {
                      sub_D0048(16, 248, 67, "crypto/ec/ecdsa_ossl.c", 47);
                      goto LABEL_35;
                    }
                    v43 = sub_C59E4(a5);
                    if ( !v43 )
                    {
                      sub_D0048(16, 248, 125, "crypto/ec/ecdsa_ossl.c", 51);
                      goto LABEL_35;
                    }
                    if ( !sub_C5E34(a5) )
                    {
                      sub_D0048(16, 248, 159, "crypto/ec/ecdsa_ossl.c", 56);
                      goto LABEL_35;
                    }
                    v20 = (int *)sub_B822C();
                    v38 = (int *)sub_B822C();
                    v21 = sub_B822C();
                    v41 = (int *)v21;
                    v22 = v38 == 0;
                    if ( v38 )
                      v22 = v20 == 0;
                    v23 = v22;
                    if ( !v21 )
                      v23 |= 1u;
                    if ( v23 )
                    {
                      sub_D0048(16, 248, 65, "crypto/ec/ecdsa_ossl.c", 71);
                      v42 = 0;
                      goto LABEL_34;
                    }
                    v42 = sub_C63F4(v40);
                    if ( !v42 )
                    {
                      sub_D0048(16, 248, 16, "crypto/ec/ecdsa_ossl.c", 75);
                      goto LABEL_34;
                    }
                    v45 = (_DWORD *)sub_C6244((int)v40);
                    v44 = sub_B85BC(v45);
                    if ( !sub_B8A68(v20, v44) || !sub_B8A68(v38, v44) || !sub_B8A68(v41, v44) )
                    {
LABEL_34:
                      sub_B87C8(v20);
                      sub_B87C8(v38);
                      sub_C6490((int)v42);
                      sub_B87C8(v41);
LABEL_35:
                      sub_D0048(16, 249, 42, "crypto/ec/ecdsa_ossl.c", 221);
                      goto LABEL_37;
                    }
                    do
                    {
                      if ( !a1 )
                      {
                        while ( sub_1365E8(v20, v45) )
                        {
                          if ( !sub_B85B0((int)v20) )
                            goto LABEL_82;
                        }
                        v28 = 100;
LABEL_71:
                        sub_D0048(16, 248, 158, "crypto/ec/ecdsa_ossl.c", v28);
                        goto LABEL_34;
                      }
                      do
                      {
                        if ( !sub_136630((int)v20, (int)v45, v43, (int)a1, a2, v13) )
                        {
                          v28 = 94;
                          goto LABEL_71;
                        }
                      }
                      while ( sub_B85B0((int)v20) );
LABEL_82:
                      if ( !sub_C7330(v40, v42, (int)v20, 0, 0, v13) )
                      {
                        sub_D0048(16, 248, 16, "crypto/ec/ecdsa_ossl.c", 108);
                        goto LABEL_34;
                      }
                      if ( !sub_C6D34(v40, v42, (int)v41, 0, v13) )
                      {
                        sub_D0048(16, 248, 16, "crypto/ec/ecdsa_ossl.c", 113);
                        goto LABEL_34;
                      }
                      if ( !sub_1337FC(v38, v41, v45, v13) )
                      {
                        v29 = 118;
                        goto LABEL_88;
                      }
                    }
                    while ( sub_B85B0((int)v38) );
                    if ( !sub_C73A8(v40, (int)v20, (int)v20, v13) )
                    {
                      v29 = 125;
LABEL_88:
                      sub_D0048(16, 248, 3, "crypto/ec/ecdsa_ossl.c", v29);
                      goto LABEL_34;
                    }
                    sub_B87C8(*(int **)v8);
                    v30 = v37;
                    v37 = v20;
                    sub_B87C8(v30);
                    *(_DWORD *)v8 = v38;
                    sub_C6490((int)v42);
                    sub_B87C8(v41);
                  }
                  else
                  {
                    if ( !sub_B89E4(*(_DWORD *)v8, a4) )
                    {
                      sub_D0048(16, 249, 65, "crypto/ec/ecdsa_ossl.c", 228);
                      goto LABEL_37;
                    }
                    v20 = a3;
                  }
                  if ( !sub_B943C(v11, *(_DWORD *)v8, *(_DWORD **)(v5 + 92), v13)
                    || !sub_B9348(v11, (int)v11, v7, *(_DWORD **)(v5 + 92), v13) )
                  {
                    break;
                  }
                  if ( !sub_13386C(v11, v11, v14, v34) )
                  {
                    v27 = 246;
                    goto LABEL_61;
                  }
                  if ( !sub_B943C(v11, (int)v11, *(_DWORD **)(v5 + 92), v13)
                    || !sub_B93C0(v11, (int)v11, (int)v20, *(_DWORD **)(v5 + 92), v13) )
                  {
                    v27 = 255;
                    goto LABEL_61;
                  }
                  if ( !sub_B85B0((int)v11) )
                    goto LABEL_38;
                  if ( v35 )
                  {
                    sub_D0048(16, 249, 157, "crypto/ec/ecdsa_ossl.c", 265);
                    goto LABEL_37;
                  }
                }
                v27 = 242;
LABEL_61:
                sub_D0048(16, 249, 3, "crypto/ec/ecdsa_ossl.c", v27);
                goto LABEL_37;
              }
              v37 = 0;
              sub_D0048(16, 249, 3, "crypto/ec/ecdsa_ossl.c", 215);
            }
            else
            {
              v14 = 0;
              v37 = 0;
              sub_D0048(16, 249, 65, "crypto/ec/ecdsa_ossl.c", 198);
            }
          }
LABEL_37:
          v24 = (int **)v8;
          v8 = 0;
          sub_C49E8(v24);
LABEL_38:
          sub_130B5C(v13);
          sub_B87C8(v14);
          sub_B87C8(v37);
          return v8;
        }
        else
        {
          sub_D0048(16, 249, 65, "crypto/ec/ecdsa_ossl.c", 185);
          return 0;
        }
      }
      else
      {
        sub_D0048(16, 249, 159, "crypto/ec/ecdsa_ossl.c", 179);
        return 0;
      }
    }
    else
    {
      sub_D0048(16, 249, 125, "crypto/ec/ecdsa_ossl.c", 174);
      return 0;
    }
  }
  else
  {
    sub_D0048(16, 249, 67, "crypto/ec/ecdsa_ossl.c", 170);
    return 0;
  }
}
