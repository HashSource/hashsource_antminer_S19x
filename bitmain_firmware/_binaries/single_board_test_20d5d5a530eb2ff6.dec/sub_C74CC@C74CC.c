int __fastcall sub_C74CC(int a1, _DWORD *a2, int a3, _DWORD *a4, int a5)
{
  _DWORD *v9; // r9
  _DWORD *v10; // r10
  int v11; // r7
  int **v12; // r7
  _DWORD *v13; // r11
  int v15; // r2
  int v16; // r2
  int v17; // r0
  int v18; // r7
  int (__fastcall *v19)(int, _DWORD *, _DWORD *, _DWORD *, int); // r6
  int v20; // r3
  int v21; // r11
  int i; // r0
  int v23; // r9
  int v24; // r12
  int v25; // lr
  int (__fastcall *v26)(int, _DWORD *, _DWORD *, _DWORD *, int); // r9
  int v27; // r2
  int v28; // r3
  int (__fastcall *v29)(int, _DWORD *, _DWORD *, _DWORD *, int); // r6
  _DWORD *v30; // [sp+Ch] [bp-10h]
  int v31; // [sp+Ch] [bp-10h]
  int v32; // [sp+10h] [bp-Ch]
  _DWORD *v33; // [sp+10h] [bp-Ch]
  int v34; // [sp+14h] [bp-8h]
  _DWORD *v35; // [sp+14h] [bp-8h]

  if ( a4 && sub_C6CD4((_DWORD *)a1, a4) )
    return sub_C6A30(a1, a2);
  if ( sub_B85B0(*(_DWORD *)(a1 + 8)) )
  {
    sub_D0048(16, 284, 114, "crypto/ec/ec_mult.c", 156);
    return 0;
  }
  else
  {
    if ( !sub_B85B0(*(_DWORD *)(a1 + 12)) )
    {
      sub_130BC0(a5);
      v9 = sub_C63F4((_DWORD *)a1);
      if ( !v9 || (v10 = sub_C63F4((_DWORD *)a1)) == 0 )
      {
        v11 = 0;
        sub_D0048(16, 284, 65, "crypto/ec/ec_mult.c", 168);
        v10 = 0;
        goto LABEL_12;
      }
      if ( a4 )
      {
        v11 = sub_C6594(v9, a4);
        if ( !v11 )
        {
          sub_D0048(16, 284, 16, "crypto/ec/ec_mult.c", 179);
          goto LABEL_12;
        }
      }
      else if ( !sub_C6594(v9, *(_DWORD **)(a1 + 4)) )
      {
        v11 = 0;
        sub_D0048(16, 284, 16, "crypto/ec/ec_mult.c", 174);
        goto LABEL_12;
      }
      sub_B87B8(v9[2], 4);
      sub_B87B8(v9[3], 4);
      sub_B87B8(v9[4], 4);
      sub_B87B8(a2[2], 4);
      sub_B87B8(a2[3], 4);
      sub_B87B8(a2[4], 4);
      sub_B87B8(v10[2], 4);
      sub_B87B8(v10[3], 4);
      sub_B87B8(v10[4], 4);
      v12 = (int **)sub_130CCC(a5);
      v30 = (_DWORD *)sub_130CCC(a5);
      v13 = (_DWORD *)sub_130CCC(a5);
      if ( !v13 )
      {
        v11 = 0;
        sub_D0048(16, 284, 65, "crypto/ec/ec_mult.c", 192);
        goto LABEL_12;
      }
      if ( !sub_BA0CC(v12, *(int ***)(a1 + 8), *(int ***)(a1 + 12), a5) )
      {
        v11 = 0;
        sub_D0048(16, 284, 3, "crypto/ec/ec_mult.c", 197);
LABEL_12:
        sub_C6490((int)v9);
        sub_C6508((int)v10);
        sub_130C74(a5);
        return v11;
      }
      v34 = sub_B85BC(v12);
      v32 = sub_133578(v12) + 2;
      if ( sub_B89D8((int)v13, v32) && sub_B89D8((int)v30, v32) )
      {
        if ( !sub_B89E4((int)v13, a3) )
        {
          v15 = 216;
          goto LABEL_25;
        }
        sub_B87B8((int)v13, 4);
        if ( (v34 < sub_B85BC(v13) || sub_B8720((int)v13)) && !sub_1337FC(v13, v13, v12, a5) )
        {
          v15 = 228;
          goto LABEL_25;
        }
        if ( !BN_add(v30, v13, v12) )
        {
          v15 = 234;
LABEL_25:
          v11 = 0;
          sub_D0048(16, 284, 3, "crypto/ec/ec_mult.c", v15);
          goto LABEL_12;
        }
        sub_B87B8((int)v30, 4);
        v11 = BN_add(v13, v30, v12);
        if ( !v11 )
        {
          sub_D0048(16, 284, 3, "crypto/ec/ec_mult.c", 239);
          goto LABEL_12;
        }
        v17 = sub_B83F0(v30, v34);
        sub_B84C4(v17, (int)v13, (int)v30, v32);
        v18 = sub_133578(*(_DWORD *)(a1 + 40));
        if ( sub_B89D8(v10[2], v18)
          && sub_B89D8(v10[3], v18)
          && sub_B89D8(v10[4], v18)
          && sub_B89D8(a2[2], v18)
          && sub_B89D8(a2[3], v18)
          && sub_B89D8(a2[4], v18)
          && sub_B89D8(v9[2], v18)
          && sub_B89D8(v9[3], v18)
          && sub_B89D8(v9[4], v18) )
        {
          if ( !v9[5] && !sub_C7110((_DWORD *)a1, v9) )
          {
            v11 = 0;
            sub_D0048(16, 284, 16, "crypto/ec/ec_mult.c", 265);
            goto LABEL_12;
          }
          v19 = *(int (__fastcall **)(int, _DWORD *, _DWORD *, _DWORD *, int))(*(_DWORD *)a1 + 208);
          if ( v19 )
          {
            if ( v19(a1, a2, v10, v9, a5) )
            {
LABEL_48:
              v20 = v34 - 1;
              if ( v34 - 1 < 0 )
              {
                v31 = 1;
              }
              else
              {
                v35 = v13;
                v31 = 1;
                v21 = v20;
                v33 = v9;
                for ( i = sub_B83F0(v35, v20); ; i = sub_B83F0(v35, v21) )
                {
                  --v21;
                  v23 = i ^ v31;
                  sub_B84C4(i ^ v31, a2[2], v10[2], v18);
                  v31 ^= v23;
                  sub_B84C4(v23, a2[3], v10[3], v18);
                  sub_B84C4(v23, a2[4], v10[4], v18);
                  v24 = a2[5];
                  v25 = (v24 ^ v10[5]) & v23;
                  v26 = *(int (__fastcall **)(int, _DWORD *, _DWORD *, _DWORD *, int))(*(_DWORD *)a1 + 212);
                  a2[5] = v24 ^ v25;
                  v10[5] ^= v25;
                  if ( v26 )
                  {
                    if ( !v26(a1, a2, v10, v33, a5) )
                      goto LABEL_55;
                  }
                  else if ( !sub_C6B60((_DWORD *)a1, v10, a2, v10) || !sub_C6BFC((_DWORD *)a1, a2, a2) )
                  {
LABEL_55:
                    v9 = v33;
                    v11 = 0;
                    sub_D0048(16, 284, 162, "crypto/ec/ec_mult.c", 351);
                    goto LABEL_12;
                  }
                  if ( v21 == -1 )
                    break;
                }
                v9 = v33;
              }
              sub_B84C4(v31, a2[2], v10[2], v18);
              sub_B84C4(v31, a2[3], v10[3], v18);
              sub_B84C4(v31, a2[4], v10[4], v18);
              v27 = a2[5];
              v28 = (v10[5] ^ v27) & v31;
              v29 = *(int (__fastcall **)(int, _DWORD *, _DWORD *, _DWORD *, int))(*(_DWORD *)a1 + 216);
              a2[5] = v27 ^ v28;
              v10[5] ^= v28;
              if ( v29 && (v11 = v29(a1, a2, v10, v9, a5)) == 0 )
                sub_D0048(16, 284, 136, "crypto/ec/ec_mult.c", 366);
              else
                v11 = 1;
              goto LABEL_12;
            }
          }
          else if ( sub_C6594(v10, v9) && sub_C6BFC((_DWORD *)a1, a2, v10) )
          {
            goto LABEL_48;
          }
          v11 = 0;
          sub_D0048(16, 284, 153, "crypto/ec/ec_mult.c", 271);
          goto LABEL_12;
        }
        v16 = 259;
      }
      else
      {
        v16 = 211;
      }
      sub_D0048(16, 284, 3, "crypto/ec/ec_mult.c", v16);
      v11 = 0;
      goto LABEL_12;
    }
    sub_D0048(16, 284, 164, "crypto/ec/ec_mult.c", 160);
    return 0;
  }
}
