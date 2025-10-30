int __fastcall sub_F8BB0(int **a1, int *a2, int a3, int a4)
{
  int *v6; // r11
  int *v7; // r10
  int v8; // r1
  int v9; // r2
  int v10; // r9
  int v11; // r3
  int v12; // r6
  _DWORD *v14; // r0
  int v15; // r6
  _DWORD *v16; // r0
  int v17; // r7
  int v18; // r3
  int v19; // r0
  _DWORD *v20; // r0
  int v21; // r7
  int v22; // r0
  bool v23; // zf
  int v24; // r8
  _DWORD *v25; // r7
  int v26; // r0
  int v27; // r1
  int **v28; // r0
  int **v29; // r8
  int v30; // r6
  int **v31; // r0
  int **v32; // r7
  int v33; // r0
  int v34; // r0
  int v35; // r0
  int v36; // r6
  int v37; // r0
  int v38; // r2
  int v39; // r3
  _DWORD *v40; // r0
  int v41; // r6
  int v42; // r3
  _DWORD *v43; // r7
  int v44; // r8
  int v45; // r0
  _DWORD *v46; // r6
  int v47; // r1
  _DWORD *v48; // r0
  int v49; // r7
  int v52; // [sp+14h] [bp-30h]
  int **v53; // [sp+18h] [bp-2Ch]
  _DWORD *v54; // [sp+24h] [bp-20h]
  _DWORD *v55; // [sp+28h] [bp-1Ch]
  _DWORD v56[4]; // [sp+34h] [bp-10h]

  sub_130BC0(a4);
  v6 = (int *)sub_130CCC(a4);
  v53 = (int **)sub_130CCC(a4);
  v7 = (int *)sub_130CCC(a4);
  v52 = sub_130CCC(a4);
  if ( !v52 )
    goto LABEL_8;
  if ( *(_DWORD *)(a3 + 4) == 1 )
  {
    v34 = sub_10C010(*(_DWORD *)(a3 + 48), v8, v9);
    v10 = v34;
    if ( (unsigned int)(v34 - 1) > 2 )
      goto LABEL_8;
  }
  else
  {
    v10 = 0;
  }
  v11 = *(_DWORD *)(a3 + 64);
  if ( (v11 & 4) == 0 )
    goto LABEL_6;
  v28 = (int **)sub_B822C();
  v29 = v28;
  if ( !v28 )
    goto LABEL_8;
  sub_B8740(v28, *(int **)(a3 + 28), 4);
  if ( !sub_B96D8((int **)(a3 + 72), *(_DWORD *)(a3 + 92), v29, a4)
    || (sub_B8740(v29, *(int **)(a3 + 32), 4), !sub_B96D8((int **)(a3 + 76), *(_DWORD *)(a3 + 92), v29, a4)) )
  {
    v19 = (int)v29;
    goto LABEL_44;
  }
  v30 = 0;
  if ( v10 )
  {
    do
    {
      v31 = (int **)sub_10C01C(*(_DWORD *)(a3 + 48), v30);
      v32 = v31 + 4;
      sub_B8740(v29, *v31, 4);
      ++v30;
      if ( !sub_B96D8(v32, *(_DWORD *)(a3 + 92), v29, a4) )
      {
        v12 = 0;
        sub_B895C((int)v29);
        goto LABEL_9;
      }
    }
    while ( v10 != v30 );
    sub_B895C((int)v29);
    goto LABEL_42;
  }
  sub_B895C((int)v29);
  if ( *(int (__fastcall **)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))(*(_DWORD *)(a3 + 8) + 24) != BN_mod_exp_mont )
  {
LABEL_42:
    v11 = *(_DWORD *)(a3 + 64);
    goto LABEL_6;
  }
  v36 = sub_B85BC(*(_DWORD **)(a3 + 32));
  v37 = sub_B85BC(*(_DWORD **)(a3 + 28));
  v11 = *(_DWORD *)(a3 + 64);
  if ( v36 == v37 )
  {
    if ( (v11 & 2) != 0 && !sub_B96D8((int **)(a3 + 68), *(_DWORD *)(a3 + 92), *(int ***)(a3 + 16), a4)
      || !sub_B93DC(v7, (int)a2, *(_DWORD **)(a3 + 76), a4)
      || !sub_B943C(v7, (int)v7, *(_DWORD **)(a3 + 76), a4)
      || !sub_1318A4(v7, v7, *(_DWORD *)(a3 + 40), *(_DWORD *)(a3 + 32), a4, *(_DWORD *)(a3 + 76))
      || !sub_B93DC(v6, (int)a2, *(_DWORD **)(a3 + 72), a4)
      || !sub_B943C(v6, (int)v6, *(_DWORD **)(a3 + 72), a4)
      || !sub_1318A4(v6, v6, *(_DWORD *)(a3 + 36), *(_DWORD *)(a3 + 28), a4, *(_DWORD *)(a3 + 72))
      || !sub_133B30(v6, v6, v7, *(_DWORD *)(a3 + 28))
      || !sub_B943C(v6, (int)v6, *(_DWORD **)(a3 + 72), a4)
      || !sub_B9348(v6, (int)v6, *(_DWORD *)(a3 + 44), *(_DWORD **)(a3 + 72), a4)
      || !sub_B9F40(a1, (int **)v6, *(int ***)(a3 + 32), a4)
      || !sub_13386C(a1, a1, v7, *(_DWORD *)(a3 + 16)) )
    {
      goto LABEL_8;
    }
LABEL_61:
    v38 = *(_DWORD *)(a3 + 20);
    if ( !v38 )
      goto LABEL_70;
    v39 = *(_DWORD *)(a3 + 16);
    if ( !v39 )
      goto LABEL_70;
    if ( *(int (__fastcall **)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))(*(_DWORD *)(a3 + 8) + 24) == BN_mod_exp_mont )
    {
      if ( !BN_mod_exp_mont(v52, a1, v38, v39, a4, *(_DWORD *)(a3 + 68)) )
        goto LABEL_8;
    }
    else
    {
      sub_B8ACC(a1);
      if ( !(*(int (__fastcall **)(int, int **, _DWORD, _DWORD, int, _DWORD))(*(_DWORD *)(a3 + 8) + 24))(
              v52,
              a1,
              *(_DWORD *)(a3 + 20),
              *(_DWORD *)(a3 + 16),
              a4,
              *(_DWORD *)(a3 + 68)) )
        goto LABEL_8;
    }
    if ( BN_sub(v52, v52, a2) )
    {
      if ( sub_B85B0(v52) )
        goto LABEL_70;
      if ( !sub_131220(0, v52, v52, *(_DWORD *)(a3 + 16), a4)
        || sub_B8720(v52) && !BN_add(v52, v52, *(_DWORD *)(a3 + 16)) )
      {
        goto LABEL_8;
      }
      if ( sub_B85B0(v52) )
      {
LABEL_70:
        v12 = 1;
        sub_B8ACC(a1);
        goto LABEL_9;
      }
      v48 = (_DWORD *)sub_B822C();
      v49 = (int)v48;
      if ( !v48 )
        goto LABEL_8;
      sub_B8740(v48, *(int **)(a3 + 24), 4);
      v12 = (*(int (__fastcall **)(int **, int *, int, _DWORD, int, _DWORD))(*(_DWORD *)(a3 + 8) + 24))(
              a1,
              a2,
              v49,
              *(_DWORD *)(a3 + 16),
              a4,
              *(_DWORD *)(a3 + 68));
      v19 = v49;
      if ( v12 )
      {
        sub_B895C(v49);
        goto LABEL_70;
      }
LABEL_45:
      sub_B895C(v19);
      goto LABEL_9;
    }
LABEL_8:
    v12 = 0;
    goto LABEL_9;
  }
LABEL_6:
  if ( (v11 & 2) != 0 && !sub_B96D8((int **)(a3 + 68), *(_DWORD *)(a3 + 92), *(int ***)(a3 + 16), a4) )
    goto LABEL_8;
  v14 = (_DWORD *)sub_B822C();
  v15 = (int)v14;
  if ( !v14 )
    goto LABEL_8;
  sub_B8740(v14, a2, 4);
  if ( !sub_131220(0, v6, v15, *(_DWORD *)(a3 + 32), a4) || (v16 = (_DWORD *)sub_B822C(), (v17 = (int)v16) == 0) )
  {
    v33 = v15;
    v12 = 0;
    sub_B895C(v33);
    goto LABEL_9;
  }
  sub_B8740(v16, *(int **)(a3 + 40), 4);
  if ( !(*(int (__fastcall **)(int *, int *, int, _DWORD, int, _DWORD))(*(_DWORD *)(a3 + 8) + 24))(
          v7,
          v6,
          v17,
          *(_DWORD *)(a3 + 32),
          a4,
          *(_DWORD *)(a3 + 76)) )
  {
    v35 = v15;
    v12 = 0;
    sub_B895C(v35);
    sub_B895C(v17);
    goto LABEL_9;
  }
  sub_B895C(v17);
  v18 = sub_131220(0, v6, v15, *(_DWORD *)(a3 + 28), a4);
  v19 = v15;
  if ( !v18 )
    goto LABEL_44;
  sub_B895C(v15);
  v20 = (_DWORD *)sub_B822C();
  v21 = (int)v20;
  if ( !v20 )
    goto LABEL_8;
  sub_B8740(v20, *(int **)(a3 + 36), 4);
  v12 = (*(int (__fastcall **)(int **, int *, int, _DWORD, int, _DWORD))(*(_DWORD *)(a3 + 8) + 24))(
          a1,
          v6,
          v21,
          *(_DWORD *)(a3 + 28),
          a4,
          *(_DWORD *)(a3 + 72));
  v19 = v21;
  if ( !v12 )
    goto LABEL_45;
  sub_B895C(v21);
  if ( !v10 )
  {
LABEL_73:
    if ( !BN_sub(a1, a1, v7) || sub_B8720((int)a1) && !BN_add(a1, a1, *(_DWORD *)(a3 + 28)) )
      goto LABEL_8;
    if ( !sub_BA0CC((int **)v6, a1, *(int ***)(a3 + 44), a4) )
      goto LABEL_8;
    v40 = (_DWORD *)sub_B822C();
    v41 = (int)v40;
    if ( !v40 )
      goto LABEL_8;
    sub_B8740(v40, v6, 4);
    v42 = sub_131220(0, a1, v41, *(_DWORD *)(a3 + 28), a4);
    v19 = v41;
    if ( v42 )
    {
      sub_B895C(v41);
      if ( sub_B8720((int)a1) && !BN_add(a1, a1, *(_DWORD *)(a3 + 28))
        || !sub_BA0CC((int **)v6, a1, *(int ***)(a3 + 32), a4)
        || !BN_add(a1, v6, v7) )
      {
        goto LABEL_8;
      }
      if ( v10 )
      {
        v43 = (_DWORD *)sub_B822C();
        if ( !v43 )
          goto LABEL_8;
        v44 = 0;
        do
        {
          v46 = (_DWORD *)sub_10C01C(*(_DWORD *)(a3 + 48), v44);
          v47 = v56[v44++];
          v45 = BN_sub(v6, v47, a1);
          if ( v45 )
          {
            v45 = sub_BA0CC(v53, (int **)v6, (int **)v46[2], a4);
            if ( v45 )
            {
              sub_B8740(v43, (int *)v53, 4);
              v45 = sub_131220(0, v6, v43, *v46, a4);
              if ( v45 )
              {
                if ( !sub_B8720((int)v6) || (v45 = BN_add(v6, v6, *v46)) != 0 )
                {
                  v45 = sub_BA0CC((int **)v6, (int **)v6, (int **)v46[3], a4);
                  if ( v45 )
                  {
                    v45 = BN_add(a1, a1, v6);
                    if ( v45 )
                      continue;
                  }
                }
              }
            }
          }
          v12 = v45;
          sub_B895C((int)v43);
          goto LABEL_9;
        }
        while ( v10 != v44 );
        sub_B895C((int)v43);
      }
      goto LABEL_61;
    }
LABEL_44:
    v12 = 0;
    goto LABEL_45;
  }
  v54 = (_DWORD *)sub_B822C();
  v22 = sub_B822C();
  v23 = v54 == 0;
  if ( v54 )
    v23 = v22 == 0;
  v55 = (_DWORD *)v22;
  v24 = v23;
  if ( v23 )
  {
    sub_B895C(v22);
    sub_B895C((int)v54);
    goto LABEL_8;
  }
  while ( 1 )
  {
    v26 = sub_130CCC(a4);
    v27 = v24;
    v12 = v26;
    v56[v24++] = v26;
    if ( !v26 )
      goto LABEL_29;
    v25 = (_DWORD *)sub_10C01C(*(_DWORD *)(a3 + 48), v27);
    sub_B8740(v55, a2, 4);
    sub_B8740(v54, (int *)v25[1], 4);
    if ( !sub_131220(0, v6, v55, *v25, a4) )
      break;
    if ( !(*(int (__fastcall **)(int, int *, _DWORD *, _DWORD, int, _DWORD))(*(_DWORD *)(a3 + 8) + 24))(
            v12,
            v6,
            v54,
            *v25,
            a4,
            v25[4]) )
    {
      v12 = 0;
LABEL_29:
      sub_B895C((int)v55);
      v19 = (int)v54;
      goto LABEL_45;
    }
    if ( v10 == v24 )
    {
      sub_B895C((int)v55);
      sub_B895C((int)v54);
      goto LABEL_73;
    }
  }
  v12 = 0;
  sub_B895C((int)v55);
  sub_B895C((int)v54);
LABEL_9:
  sub_130C74(a4);
  return v12;
}
