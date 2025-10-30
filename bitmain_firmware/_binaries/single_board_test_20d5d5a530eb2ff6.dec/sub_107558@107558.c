int **__fastcall sub_107558(int a1, int a2)
{
  int *v3; // r9
  int *v4; // r7
  int *v5; // r6
  int v6; // r0
  bool v7; // zf
  int v8; // r4
  int v9; // r8
  int v10; // r10
  int *v11; // r5
  int v12; // r0
  bool v13; // zf
  int v14; // r11
  _UNKNOWN **v15; // r0
  int **v16; // r0
  int **v17; // r7
  int v19; // r2
  int v20; // r2
  int *v22; // [sp+10h] [bp-14h]
  int *v23; // [sp+14h] [bp-10h]
  int v24; // [sp+18h] [bp-Ch]
  int v25; // [sp+1Ch] [bp-8h]

  v24 = sub_C59E4(a1);
  v3 = (int *)sub_C59B8(a1);
  v4 = (int *)sub_C6244((int)v3);
  v5 = sub_C63F4(v3);
  v6 = sub_130B08(v5);
  v7 = v6 == 0;
  if ( v6 )
    v7 = v5 == 0;
  v8 = v6;
  if ( v7 )
  {
    v11 = 0;
    v23 = 0;
    sub_D0048(53, 106, 65, (int)"crypto/sm2/sm2_sign.c", 203);
    goto LABEL_26;
  }
  sub_130BC0(v6);
  v9 = sub_130CCC(v8);
  v22 = (int *)sub_130CCC(v8);
  v10 = sub_130CCC(v8);
  v25 = sub_130CCC(v8);
  if ( !v25 )
  {
    v11 = 0;
    v23 = 0;
    sub_D0048(53, 106, 65, (int)"crypto/sm2/sm2_sign.c", 213);
    goto LABEL_26;
  }
  v11 = (int *)sub_B822C();
  v12 = sub_B822C();
  v13 = v12 == 0;
  if ( v12 )
    v13 = v11 == 0;
  v23 = (int *)v12;
  v14 = v13;
  if ( v13 )
  {
    v20 = 225;
    goto LABEL_33;
  }
  while ( 1 )
  {
    if ( !sub_1365E8(v9, v4) )
    {
      v19 = 231;
      goto LABEL_29;
    }
    if ( !sub_C7330(v3, v5, v9, 0, v14, v8) || !sub_C6D34(v3, v5, v10, 0, v8) || !sub_13384C(v11, a2, v10, v4, v8) )
    {
      v19 = 239;
LABEL_29:
      sub_D0048(53, 106, 68, (int)"crypto/sm2/sm2_sign.c", v19);
      goto LABEL_26;
    }
    if ( !sub_B85B0((int)v11) )
    {
      if ( !BN_add(v22, v11, v9) )
      {
        v19 = 248;
        goto LABEL_29;
      }
      if ( sub_B8354(v22, v4) )
        break;
    }
  }
  v15 = sub_B81FC();
  if ( !BN_add(v23, v24, v15)
    || !sub_C73A8(v3, (int)v23, (int)v23, v8)
    || !sub_133F3C(v25, v24, v11, v4, v8)
    || !BN_sub(v25, v9, v25)
    || !sub_133F3C(v23, v23, v25, v4, v8) )
  {
    sub_D0048(53, 106, 3, (int)"crypto/sm2/sm2_sign.c", 260);
    goto LABEL_26;
  }
  v16 = (int **)sub_C49AC();
  v17 = v16;
  if ( v16 )
  {
    sub_C4A2C(v16, v11, v23);
    goto LABEL_27;
  }
  v20 = 266;
LABEL_33:
  sub_D0048(53, 106, 65, (int)"crypto/sm2/sm2_sign.c", v20);
LABEL_26:
  v17 = 0;
  sub_B895C((int)v11);
  sub_B895C((int)v23);
LABEL_27:
  sub_130B5C(v8);
  sub_C6490((int)v5);
  return v17;
}
