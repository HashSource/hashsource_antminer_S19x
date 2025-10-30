int __fastcall sub_C3B38(_DWORD *a1)
{
  _DWORD *v1; // r3
  int v2; // r3
  int *v4; // r2
  _BYTE *v5; // r0
  int v6; // r3
  _DWORD *v7; // r6
  _DWORD *v8; // r7
  int v9; // r0
  int v10; // r0
  int v11; // r0
  int *v12; // r8
  int v13; // r4
  int v14; // r2
  int v15; // r11
  int v16; // r10
  int *v17; // r9
  int v18; // r2
  int v20; // r2
  int *v21; // r4
  int v22; // r10
  int v23; // r0
  int v24; // r2
  int v25; // r0
  int v26; // r1
  _BOOL4 v27; // r4
  int v28; // r9
  int v29; // r0
  int v30; // r3
  int v31; // r2
  bool v32; // cc
  int *v33; // r3
  int v34; // r2
  void *v35; // r0
  _DWORD *v36; // r3
  int v37; // r2
  int v38; // r0
  int v39; // r0
  int v40; // r0
  int v41; // [sp+0h] [bp-14h]
  int v42; // [sp+0h] [bp-14h]
  int v43; // [sp+0h] [bp-14h]
  int v44; // [sp+0h] [bp-14h]
  int v45; // [sp+Ch] [bp-8h]

  v1 = (_DWORD *)a1[1];
  if ( !v1 || !*v1 || !v1[1] )
  {
    v18 = 597;
    goto LABEL_20;
  }
  v2 = a1[2];
  if ( !v2
    || (v4 = *(int **)v2) == 0
    || (v5 = (_BYTE *)v4[2]) == 0
    || (v6 = *(_DWORD *)(v2 + 4)) == 0
    || !*(_DWORD *)(v6 + 8) )
  {
    v18 = 610;
LABEL_20:
    v13 = 0;
    v15 = 0;
    v8 = 0;
    v7 = 0;
    v12 = 0;
    v16 = 0;
    v17 = 0;
    sub_D0048(16, 263, 115, "crypto/ec/ec_asn1.c", v18);
    goto LABEL_21;
  }
  v7 = sub_B8AEC(v5, *v4, 0);
  if ( !v7 )
  {
    v13 = 0;
    sub_D0048(16, 263, 3, "crypto/ec/ec_asn1.c", 615);
    v15 = 0;
    v8 = 0;
    v12 = 0;
    v16 = 0;
    v17 = 0;
    goto LABEL_21;
  }
  v8 = sub_B8AEC(*(_BYTE **)(*(_DWORD *)(a1[2] + 4) + 8), **(_DWORD **)(a1[2] + 4), 0);
  if ( !v8 )
  {
    v42 = 620;
    v20 = 3;
    goto LABEL_25;
  }
  v9 = sub_EAC84(*(_DWORD *)a1[1]);
  if ( v9 == 407 )
  {
    v21 = *(int **)(a1[1] + 4);
    v22 = *v21;
    if ( *v21 > 661 )
    {
      v42 = 640;
      v20 = 143;
      goto LABEL_25;
    }
    v12 = (int *)sub_B822C();
    if ( !v12 )
    {
      sub_D0048(16, 263, 65, "crypto/ec/ec_asn1.c", 645);
      goto LABEL_35;
    }
    v23 = sub_EAC84(v21[1]);
    if ( v23 == 682 )
    {
      if ( !v21[2] )
      {
        v13 = 0;
        v43 = 656;
        v24 = 115;
        goto LABEL_40;
      }
      v25 = sub_126F04();
      v26 = *v21;
      v27 = v25 <= 0;
      v28 = v25;
      if ( v25 >= v26 )
        v27 = 1;
      if ( v27 )
      {
        v41 = 664;
        v14 = 137;
        goto LABEL_18;
      }
      v29 = sub_B8A68(v12, v26);
      if ( v29 )
      {
        v29 = sub_B8A68(v12, v28);
        if ( v29 )
        {
          v29 = sub_B8A68(v12, 0);
          if ( v29 )
          {
LABEL_75:
            v17 = (int *)sub_C53C8(v12, v7, v8, 0);
            goto LABEL_58;
          }
        }
      }
    }
    else
    {
      if ( v23 != 683 )
      {
        if ( v23 == 681 )
        {
          v41 = 704;
          v14 = 126;
        }
        else
        {
          v41 = 708;
          v14 = 115;
        }
        goto LABEL_18;
      }
      v17 = (int *)v21[2];
      if ( !v17 )
      {
        v13 = 0;
        v44 = 680;
        v34 = 115;
        goto LABEL_62;
      }
      v30 = v17[2];
      if ( *v21 <= v30 )
        goto LABEL_56;
      v31 = v17[1];
      if ( v30 <= v31 )
        goto LABEL_56;
      v32 = v31 <= *v17;
      if ( v31 > *v17 )
        v32 = *v17 <= 0;
      if ( v32 )
      {
LABEL_56:
        v41 = 688;
        v14 = 132;
        goto LABEL_18;
      }
      if ( !sub_B8A68(v12, *v21) )
      {
        v13 = 0;
        v15 = 0;
        v16 = 0;
        v17 = 0;
        goto LABEL_21;
      }
      v29 = sub_B8A68(v12, *v17);
      if ( v29 )
      {
        v29 = sub_B8A68(v12, v17[1]);
        if ( v29 )
        {
          v29 = sub_B8A68(v12, v17[2]);
          if ( v29 )
          {
            v29 = sub_B8A68(v12, 0);
            if ( v29 )
              goto LABEL_75;
          }
        }
      }
    }
    v13 = v29;
    v15 = v29;
    v16 = v29;
    v17 = (int *)v29;
    goto LABEL_21;
  }
  if ( v9 != 406 )
  {
    v42 = 743;
    v20 = 103;
LABEL_25:
    v13 = 0;
    v15 = 0;
    sub_D0048(16, 263, v20, "crypto/ec/ec_asn1.c", v42);
    v12 = 0;
    v16 = 0;
    v17 = 0;
    goto LABEL_21;
  }
  v10 = *(_DWORD *)(a1[1] + 4);
  if ( !v10 )
  {
    v13 = 0;
    v15 = 0;
    v12 = 0;
    v16 = 0;
    v17 = 0;
    sub_D0048(16, 263, 115, "crypto/ec/ec_asn1.c", 720);
    goto LABEL_21;
  }
  v11 = sub_12700C(v10, 0);
  v12 = (int *)v11;
  if ( !v11 )
  {
    sub_D0048(16, 263, 13, "crypto/ec/ec_asn1.c", 725);
LABEL_35:
    v13 = 0;
    v15 = 0;
    v16 = 0;
    v17 = 0;
    goto LABEL_21;
  }
  if ( sub_B8720(v11) || (v13 = sub_B85B0((int)v12)) != 0 )
  {
    v41 = 730;
    v14 = 103;
LABEL_18:
    v13 = 0;
    v15 = 0;
    sub_D0048(16, 263, v14, "crypto/ec/ec_asn1.c", v41);
    v16 = 0;
    v17 = 0;
LABEL_21:
    v45 = 0;
    sub_C64B8(v17);
    goto LABEL_22;
  }
  v22 = sub_B85BC(v12);
  if ( v22 > 661 )
  {
    v24 = 143;
    v43 = 736;
LABEL_40:
    v15 = 0;
    v16 = 0;
    sub_D0048(16, 263, v24, "crypto/ec/ec_asn1.c", v43);
    v17 = 0;
    goto LABEL_21;
  }
  v17 = (int *)sub_C537C(v12, v7, v8, 0);
LABEL_58:
  if ( !v17 )
  {
    v13 = 0;
    v15 = 0;
    v16 = 0;
    sub_D0048(16, 263, 16, "crypto/ec/ec_asn1.c", 748);
    goto LABEL_21;
  }
  v33 = *(int **)(a1[2] + 8);
  if ( v33 )
  {
    v13 = *v33;
    if ( !*v33 )
    {
      v34 = 115;
      v44 = 761;
LABEL_62:
      v15 = 0;
      v16 = 0;
      sub_D0048(16, 263, v34, "crypto/ec/ec_asn1.c", v44);
      goto LABEL_21;
    }
    CRYPTO_free(v17[8], "crypto/ec/ec_asn1.c", 764);
    v35 = (void *)CRYPTO_malloc(**(_DWORD **)(a1[2] + 8), "crypto/ec/ec_asn1.c", 765);
    v13 = (int)v35;
    v17[8] = (int)v35;
    if ( !v35 )
    {
      v44 = 766;
      v34 = 65;
      goto LABEL_62;
    }
    memcpy(v35, *(const void **)(*(_DWORD *)(a1[2] + 8) + 8), **(_DWORD **)(a1[2] + 8));
    v17[9] = **(_DWORD **)(a1[2] + 8);
  }
  if ( !a1[4] || (v36 = (_DWORD *)a1[3]) == 0 || !v36[2] || !*v36 )
  {
    v13 = 0;
    sub_D0048(16, 263, 115, "crypto/ec/ec_asn1.c", 778);
    v15 = 0;
    v16 = 0;
    goto LABEL_21;
  }
  v15 = sub_C63F4(v17);
  if ( !v15 )
  {
    v13 = 0;
    v16 = 0;
    goto LABEL_21;
  }
  sub_C6290(v17, **(_BYTE **)(a1[3] + 8) & 0xFE);
  if ( !sub_C88C0(v17, v15, *(_DWORD *)(a1[3] + 8), *(_DWORD *)a1[3], 0) )
  {
    v13 = 0;
    v16 = 0;
    sub_D0048(16, 263, 16, "crypto/ec/ec_asn1.c", 792);
    goto LABEL_21;
  }
  if ( !sub_12700C(a1[4], v7) )
  {
    v13 = 0;
    v16 = 0;
    sub_D0048(16, 263, 13, "crypto/ec/ec_asn1.c", 798);
    goto LABEL_21;
  }
  if ( sub_B8720((int)v7) || sub_B85B0((int)v7) )
  {
    v37 = 802;
LABEL_91:
    v13 = 0;
    sub_D0048(16, 263, 122, "crypto/ec/ec_asn1.c", v37);
    v16 = 0;
    goto LABEL_21;
  }
  if ( sub_B85BC(v7) > v22 + 1 )
  {
    v37 = 806;
    goto LABEL_91;
  }
  if ( a1[5] )
  {
    if ( !sub_12700C(a1[5], v8) )
    {
      v13 = 0;
      v16 = 0;
      sub_D0048(16, 263, 13, "crypto/ec/ec_asn1.c", 815);
      goto LABEL_21;
    }
  }
  else
  {
    v40 = (int)v8;
    v8 = 0;
    sub_B895C(v40);
  }
  if ( !sub_C67B4(v17, v15, v7, v8) )
  {
    v13 = 0;
    v16 = 0;
    sub_D0048(16, 263, 16, "crypto/ec/ec_asn1.c", 820);
    goto LABEL_21;
  }
  v13 = sub_130B08();
  if ( !v13 )
  {
    v16 = 0;
    sub_D0048(16, 263, 3, "crypto/ec/ec_asn1.c", 837);
    goto LABEL_21;
  }
  v38 = sub_C6784(v17);
  v16 = v38;
  if ( !v38 || sub_C6298(v38, 0) != 1 || !sub_C67B4(v16, v15, v7, 0) )
  {
    sub_D0048(16, 263, 16, "crypto/ec/ec_asn1.c", 843);
    goto LABEL_21;
  }
  v39 = sub_C51B4(v16, v13);
  if ( !v39 )
  {
    v45 = (int)v17;
    goto LABEL_22;
  }
  v45 = sub_C4BE8(v39);
  if ( !v45 )
  {
    sub_D0048(16, 263, 16, "crypto/ec/ec_asn1.c", 868);
    goto LABEL_21;
  }
  sub_C64B8(v17);
  sub_C6288(v45, 0);
  if ( !*(_DWORD *)(a1[2] + 8) && sub_C6298(v45, 0) != 1 )
  {
    v17 = (int *)v45;
    goto LABEL_21;
  }
LABEL_22:
  sub_C64B8(v16);
  sub_B895C((int)v12);
  sub_B895C((int)v7);
  sub_B895C((int)v8);
  sub_C6490(v15);
  sub_130B5C(v13);
  return v45;
}
