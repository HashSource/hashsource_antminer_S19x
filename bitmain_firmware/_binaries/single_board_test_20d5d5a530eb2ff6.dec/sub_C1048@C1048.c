int *__fastcall sub_C1048(_BYTE *a1, int a2, int a3)
{
  int *v3; // r4
  int *v7; // r7
  int v8; // r0
  int v9; // r4
  bool v10; // zf
  int v11; // r4
  int v12; // r0
  int v13; // r8
  int v14; // r6
  int v15; // r10
  int v16; // r0
  int v17; // r2
  int **v18; // r0
  int v20; // r4
  int v21; // r0
  bool v22; // zf
  int v23; // r4
  int v24; // r2
  size_t v25; // r3
  int v26; // r8
  int *v27; // r11
  int v28; // r6
  size_t n; // r7
  int *v30; // r5
  int *v31; // r0
  int v32; // r2
  size_t v33; // r3
  int v34; // r0
  int v35; // r0
  int (__fastcall *v36)(int, int, _DWORD, int *, _DWORD, int, _DWORD); // r4
  int v37; // r4
  int v38; // r4
  int v39; // r3
  int v40; // r0
  int v41; // r3
  int v42; // r0
  int v43; // r0
  int v44; // r11
  int v45; // r0
  int *v46; // [sp+14h] [bp-28h]
  _DWORD *v47; // [sp+18h] [bp-24h]
  int v48; // [sp+1Ch] [bp-20h]
  int **v49; // [sp+1Ch] [bp-20h]
  int *v50; // [sp+20h] [bp-1Ch]
  int *v51; // [sp+24h] [bp-18h]
  int v52; // [sp+28h] [bp-14h]
  int v53; // [sp+30h] [bp-Ch]
  int v54; // [sp+30h] [bp-Ch]

  v3 = *(int **)(a3 + 8);
  if ( !v3 || (v3 = *(int **)(a3 + 12)) == 0 || (v3 = *(int **)(a3 + 16)) == 0 )
  {
    v17 = 101;
    v7 = v3;
    v13 = (int)v3;
    goto LABEL_23;
  }
  v3 = *(int **)(a3 + 24);
  if ( !v3 )
  {
    v17 = 111;
    v7 = 0;
    v13 = 0;
    goto LABEL_23;
  }
  v7 = (int *)sub_C07CC();
  if ( !v7 )
  {
    v3 = 0;
    v17 = 3;
    v13 = 0;
    goto LABEL_23;
  }
  *v7 = sub_B822C();
  v8 = sub_B822C();
  v9 = *v7;
  v7[1] = v8;
  v10 = v8 == 0;
  if ( v8 )
    v10 = v9 == 0;
  v11 = v10;
  if ( v10 )
  {
    v3 = 0;
    v17 = 3;
    v13 = 0;
    goto LABEL_23;
  }
  v12 = sub_130B08();
  v13 = v12;
  if ( !v12 )
  {
    v3 = 0;
    v17 = 3;
    goto LABEL_23;
  }
  v47 = (_DWORD *)sub_130CCC(v12);
  v14 = sub_130CCC(v13);
  v52 = sub_130CCC(v13);
  v15 = sub_130CCC(v13);
  if ( !v15 )
  {
    v3 = 0;
    v17 = 3;
    goto LABEL_23;
  }
  v46 = (int *)v11;
LABEL_15:
  v16 = *(_DWORD *)(a3 + 8);
  if ( !v16 || !*(_DWORD *)(a3 + 12) || !*(_DWORD *)(a3 + 16) )
  {
    sub_D0048(10, 107, 101, "crypto/dsa/dsa_ossl.c", 193);
    goto LABEL_21;
  }
  v48 = *v7;
  if ( sub_B85B0(v16) || sub_B85B0(*(_DWORD *)(a3 + 12)) || sub_B85B0(*(_DWORD *)(a3 + 16)) )
  {
    sub_D0048(10, 107, 112, "crypto/dsa/dsa_ossl.c", 199);
LABEL_21:
    v3 = v46;
    v17 = 3;
    goto LABEL_23;
  }
  if ( !*(_DWORD *)(a3 + 24) )
  {
    sub_D0048(10, 107, 111, "crypto/dsa/dsa_ossl.c", 203);
    goto LABEL_21;
  }
  v20 = sub_B822C();
  v21 = sub_B822C();
  v22 = v21 == 0;
  if ( v21 )
    v22 = v20 == 0;
  v51 = (int *)v21;
  v50 = (int *)v20;
  if ( v22 )
  {
    sub_D0048(10, 107, 3, "crypto/dsa/dsa_ossl.c", 291);
    sub_130B5C(0);
    v31 = (int *)v20;
    goto LABEL_43;
  }
  v53 = sub_B85BC(*(_DWORD **)(a3 + 12));
  v23 = sub_133578(*(_DWORD *)(a3 + 12)) + 2;
  if ( !sub_B89D8((int)v50, v23) || !sub_B89D8((int)v51, v23) )
    goto LABEL_50;
  if ( a1 )
  {
    v24 = v13;
    v25 = a2;
    v26 = v14;
    v27 = v7;
    v28 = v24;
    n = v25;
    do
    {
      if ( !sub_136630((int)v50, *(_DWORD *)(a3 + 12), *(_DWORD *)(a3 + 24), (int)a1, n, v28) )
      {
        v30 = v50;
        v13 = v28;
        v7 = v27;
        goto LABEL_42;
      }
    }
    while ( sub_B85B0((int)v50) );
    v32 = v28;
    v33 = n;
    v14 = v26;
    v7 = v27;
    v13 = v32;
    a2 = v33;
    v34 = (int)v50;
  }
  else
  {
    do
    {
      if ( !sub_1365E8(v50, *(_DWORD *)(a3 + 12)) )
      {
        v30 = v50;
        goto LABEL_42;
      }
    }
    while ( sub_B85B0((int)v50) );
    v34 = (int)v50;
  }
  sub_B87B8(v34, 4);
  sub_B87B8((int)v51, 4);
  if ( (*(_DWORD *)(a3 + 28) & 1) != 0 && !sub_B96D8((int **)(a3 + 32), *(_DWORD *)(a3 + 52), *(int ***)(a3 + 8), v13) )
    goto LABEL_50;
  if ( !BN_add(v51, v50, *(_DWORD *)(a3 + 12)) || !BN_add(v50, v51, *(_DWORD *)(a3 + 12)) )
    goto LABEL_50;
  v35 = sub_B83F0(v51, v53);
  sub_B84C4(v35, (int)v50, (int)v51, v23);
  v36 = *(int (__fastcall **)(int, int, _DWORD, int *, _DWORD, int, _DWORD))(*(_DWORD *)(a3 + 44) + 20);
  if ( v36 )
  {
    if ( v36(a3, v48, *(_DWORD *)(a3 + 16), v50, *(_DWORD *)(a3 + 8), v13, *(_DWORD *)(a3 + 32)) )
      goto LABEL_58;
LABEL_50:
    v30 = v50;
LABEL_42:
    sub_D0048(10, 107, 3, "crypto/dsa/dsa_ossl.c", 291);
    v31 = v30;
LABEL_43:
    sub_B87C8(v31);
    v3 = v46;
    sub_B87C8(v51);
    v17 = 3;
    goto LABEL_23;
  }
  if ( !BN_mod_exp_mont(v48, *(_DWORD *)(a3 + 16), v50, *(_DWORD *)(a3 + 8), v13, *(_DWORD *)(a3 + 32)) )
    goto LABEL_50;
LABEL_58:
  if ( !sub_131220(0, v48, v48, *(_DWORD *)(a3 + 12), v13) )
    goto LABEL_50;
  v37 = *(_DWORD *)(a3 + 12);
  v49 = (int **)sub_B822C();
  if ( !v49 )
    goto LABEL_50;
  sub_130BC0(v13);
  v54 = sub_130CCC(v13);
  if ( !v54 || !sub_B8930(v49, 2) || !BN_sub(v54, v37, v49) )
  {
    v30 = v50;
    v38 = (int)v49;
LABEL_63:
    sub_B895C(v38);
    sub_130C74(v13);
    goto LABEL_42;
  }
  v39 = v37;
  v38 = (int)v49;
  if ( !BN_mod_exp_mont(v49, v50, v54, v39, v13, 0) )
  {
    v30 = v50;
    goto LABEL_63;
  }
  sub_130C74(v13);
  sub_B87C8(v46);
  sub_B87C8(v50);
  sub_B87C8(v51);
  v40 = sub_B85BC(*(_DWORD **)(a3 + 12));
  v41 = v40 + 14;
  v42 = v40 + 7;
  if ( v42 < 0 )
    v42 = v41;
  if ( a2 > v42 >> 3 )
  {
    v43 = sub_B85BC(*(_DWORD **)(a3 + 12));
    v44 = v43 + 14;
    v45 = v43 + 7;
    if ( v45 < 0 )
      v45 = v44;
    a2 = v45 >> 3;
  }
  if ( sub_B8AEC(a1, a2, v47) )
  {
    while ( 1 )
    {
      sub_B85BC(*(_DWORD **)(a3 + 12));
      if ( !sub_136480(v14) )
        break;
      if ( !sub_B85B0(v14) )
      {
        sub_B87B8(v14, 4);
        sub_B87B8(v52, 4);
        sub_B87B8(v15, 4);
        if ( !sub_133F3C(v15, v14, *(_DWORD *)(a3 + 24), *(_DWORD *)(a3 + 12), v13)
          || !sub_133F3C(v15, v15, *v7, *(_DWORD *)(a3 + 12), v13)
          || !sub_133F3C(v52, v14, v47, *(_DWORD *)(a3 + 12), v13)
          || !sub_133AF8(v7[1], v15, v52, *(_DWORD *)(a3 + 12))
          || !sub_133F3C(v7[1], v7[1], v49, *(_DWORD *)(a3 + 12), v13)
          || !sub_1330EC(v14, v14, *(_DWORD *)(a3 + 12), v13)
          || !sub_133F3C(v7[1], v7[1], v14, *(_DWORD *)(a3 + 12), v13) )
        {
          break;
        }
        if ( sub_B85B0(*v7) || sub_B85B0(v7[1]) )
        {
          v46 = (int *)v49;
          goto LABEL_15;
        }
        v3 = (int *)v49;
        goto LABEL_24;
      }
    }
  }
  v3 = (int *)v49;
  v17 = 3;
LABEL_23:
  sub_D0048(10, 112, v17, "crypto/dsa/dsa_ossl.c", 167);
  v18 = (int **)v7;
  v7 = 0;
  sub_C0804(v18);
LABEL_24:
  sub_130B5C(v13);
  sub_B87C8(v3);
  return v7;
}
