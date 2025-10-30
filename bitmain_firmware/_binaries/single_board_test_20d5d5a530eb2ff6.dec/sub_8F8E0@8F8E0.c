int __fastcall sub_8F8E0(_DWORD *a1, int a2, int a3, int a4, int a5, _DWORD *a6, _DWORD *a7, int a8, int a9)
{
  int v11; // r7
  const char *v12; // r10
  _DWORD *v13; // r11
  int v14; // r0
  int v15; // r0
  int v16; // r4
  int v17; // r11
  int v18; // r6
  int v20; // r0
  int v21; // r0
  int v22; // r2
  int v23; // r3
  int v24; // r1
  unsigned int v25; // r0
  unsigned int v26; // lr
  unsigned int v27; // lr
  unsigned int v28; // r3
  int v29; // r3
  int v32; // [sp+24h] [bp-108h] BYREF
  _BYTE v33[64]; // [sp+28h] [bp-104h] BYREF
  _BYTE v34[64]; // [sp+68h] [bp-C4h] BYREF
  _BYTE v35[64]; // [sp+A8h] [bp-84h] BYREF
  _DWORD v36[17]; // [sp+E8h] [bp-44h] BYREF

  v11 = sub_D8C78(a2);
  if ( v11 < 0 )
  {
    v16 = 0;
    v18 = -1;
    v17 = 0;
    sub_95494(a1, 80, 506, 68, "ssl/statem/extensions.c", 1495);
    goto LABEL_24;
  }
  if ( !a9 )
  {
    v12 = "res binder";
LABEL_4:
    v13 = a1 + 51;
    goto LABEL_5;
  }
  if ( a1[26] != 2 || *(_DWORD *)(a1[285] + 480) )
  {
    if ( a1[7] )
    {
      v12 = "ext binder";
      goto LABEL_4;
    }
  }
  else
  {
    if ( a1[7] )
    {
      v12 = "ext binder";
      goto LABEL_4;
    }
    if ( a7[120] )
    {
      v12 = "ext binder";
      goto LABEL_4;
    }
  }
  v13 = a7 + 2;
  v12 = "ext binder";
LABEL_5:
  v14 = sub_A55FC(a1, a2, 0, a7 + 18, a7[1], v13);
  if ( !v14 )
  {
    v16 = 0;
    v18 = -1;
    v17 = 0;
    goto LABEL_24;
  }
  v15 = sub_D14F4(v14);
  v16 = v15;
  if ( !v15 || sub_D1520(v15, a2, 0) <= 0 || sub_D16E4(v16, v33, 0) <= 0 )
  {
    v18 = -1;
    sub_95494(a1, 80, 506, 68, "ssl/statem/extensions.c", 1542);
    v17 = 0;
    goto LABEL_24;
  }
  if ( !sub_A5334(a1, a2, v13, v12, 10, v33, v11, v34, v11, 1) )
  {
    v17 = 0;
    v18 = -1;
    goto LABEL_24;
  }
  if ( !sub_A55D0(a1, a2, v34, v35, v11) )
  {
    v17 = 0;
    v18 = -1;
    goto LABEL_24;
  }
  if ( sub_D1520(v16, a2, 0) <= 0 )
  {
    v23 = 1561;
    goto LABEL_35;
  }
  if ( a1[275] == 1 )
  {
    v21 = sub_B6ECC(*(_DWORD *)(a1[31] + 212), 3, 0, v36);
    v22 = v21;
    if ( v21 <= 0 )
    {
      sub_95494(a1, 80, 506, 332, "ssl/statem/extensions.c", 1579);
      goto LABEL_36;
    }
    if ( a1[7] )
    {
      if ( (unsigned int)v21 <= 3
        || (v24 = v36[0],
            v25 = *(unsigned __int8 *)(v36[0] + 3)
                | (*(unsigned __int8 *)(v36[0] + 2) << 8)
                | (*(unsigned __int8 *)(v36[0] + 1) << 16),
            v25 > v22 - 4)
        || (v26 = v22 - 4 - v25, v26 <= 3)
        || (v27 = v26 - 4,
            v28 = (*(unsigned __int8 *)(v25 + v36[0] + 4 + 2) << 8)
                | (*(unsigned __int8 *)(v25 + v36[0] + 4 + 1) << 16)
                | *(unsigned __int8 *)(v25 + v36[0] + 4 + 3),
            v28 > v27) )
      {
        v23 = 1597;
        goto LABEL_35;
      }
      v22 -= v27 - v28;
    }
    else
    {
      v24 = v36[0];
    }
    if ( sub_D16D8(v16, v24, v22) > 0 )
      goto LABEL_13;
    v23 = 1605;
LABEL_35:
    sub_95494(a1, 80, 506, 68, "ssl/statem/extensions.c", v23);
LABEL_36:
    v18 = -1;
    v17 = 0;
    goto LABEL_24;
  }
LABEL_13:
  if ( sub_D16D8(v16, a3, a4) <= 0 || sub_D16E4(v16, v33, 0) <= 0 )
  {
    v23 = 1613;
    goto LABEL_35;
  }
  v17 = sub_DA2B8(855, 0, v35, v11);
  if ( !v17 )
  {
    v29 = 1621;
    goto LABEL_48;
  }
  if ( !a8 )
    a6 = v36;
  v32 = v11;
  if ( sub_D9454(v16, 0, a2) <= 0 || sub_D16D8(v16, v33, v11) <= 0 || sub_D9644(v16, a6, &v32) <= 0 || v11 != v32 )
  {
    v29 = 1634;
LABEL_48:
    sub_95494(a1, 80, 506, 68, "ssl/statem/extensions.c", v29);
    v18 = -1;
    goto LABEL_24;
  }
  if ( a8 )
  {
    v18 = 1;
  }
  else
  {
    v20 = sub_BC33C(a5, a6, v11);
    v18 = v20 == 0;
    if ( v20 )
      sub_95494(a1, 47, 506, 253, "ssl/statem/extensions.c", 1645);
  }
LABEL_24:
  sub_E07F8((int)v34, 0x40u);
  sub_E07F8((int)v35, 0x40u);
  sub_DA240(v17);
  sub_D1504(v16);
  return v18;
}
