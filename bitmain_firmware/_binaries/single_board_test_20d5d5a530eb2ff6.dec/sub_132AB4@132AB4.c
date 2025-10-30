int __fastcall sub_132AB4(int a1, int a2, int *a3, int ***a4, _DWORD *a5)
{
  int **v7; // r1
  int *v8; // r4
  int **v9; // r1
  int **v10; // r5
  int **v11; // r1
  int **v12; // r7
  int **v13; // r1
  int **v14; // r11
  int **v15; // r1
  int **v16; // r9
  int **v17; // r1
  int **v18; // r6
  int **v19; // r1
  int *v20; // r3
  int v21; // r0
  int **v23; // r1
  int *v24; // r4
  int **v25; // r1
  int *v26; // r5
  int **v27; // r1
  int **v28; // r6
  int **v29; // r1
  int **v30; // r9
  int **v31; // r1
  int **v32; // r1
  int **v33; // r7
  int **v34; // r1
  int v35; // r11
  int *v36; // r8
  int v37; // r11
  int *v38; // r3
  int v39; // r10
  int v40; // r10
  int v41; // r0
  int v42; // r8
  int v43; // r8
  bool v44; // zf
  int v45; // [sp+Ch] [bp-30h]
  int **v46; // [sp+Ch] [bp-30h]
  int v49; // [sp+18h] [bp-24h]
  int **v50; // [sp+18h] [bp-24h]
  int ***v51; // [sp+18h] [bp-24h]
  int v52; // [sp+1Ch] [bp-20h]
  int v53[6]; // [sp+24h] [bp-18h] BYREF

  if ( sub_B8590((int)a3, 1) || sub_B85B0((int)a3) )
  {
    *a5 = 1;
    return 0;
  }
  *a5 = 0;
  if ( sub_B87C0(a2, 4) || sub_B87C0((int)a3, 4) )
  {
    sub_130BC0((int)a4);
    v8 = (int *)sub_130CCC(a4, v7);
    v10 = sub_130CCC(a4, v9);
    v12 = sub_130CCC(a4, v11);
    v14 = sub_130CCC(a4, v13);
    v16 = sub_130CCC(a4, v15);
    v18 = sub_130CCC(a4, v17);
    if ( sub_130CCC(a4, v19) )
    {
      if ( a1 )
      {
        if ( !sub_B8930(v12, 1) )
          goto LABEL_27;
        sub_B8930(v18, 0);
        if ( !sub_B89E4((int)v10, a2) )
          goto LABEL_27;
        v49 = a1;
      }
      else
      {
        v49 = sub_B822C();
        if ( !v49 )
          goto LABEL_25;
        if ( !sub_B8930(v12, 1) )
          goto LABEL_25;
        sub_B8930(v18, 0);
        if ( !sub_B89E4((int)v10, a2) )
          goto LABEL_25;
      }
      if ( sub_B89E4((int)v8, (int)a3) )
      {
        if ( (v8[3] = 0, !v10[3]) && sub_B82F8((int *)v10, v8) < 0
          || (sub_B8210(v53), sub_B8740(v53, (int *)v10, 4), sub_1337FC(v10, v53, v8, a4)) )
        {
          v45 = -1;
          while ( !sub_B85B0((int)v10) )
          {
            v45 = -v45;
            sub_B8210(v53);
            sub_B8740(v53, v8, 4);
            if ( !sub_131220(v14, v16, v53, v10, a4)
              || !sub_BA0CC((int **)v8, v14, v12, (int)a4)
              || !BN_add(v8, v8, (int *)v18) )
            {
              goto LABEL_24;
            }
            v20 = v8;
            v8 = (int *)v10;
            v10 = v16;
            v16 = v18;
            v18 = v12;
            v12 = (int **)v20;
          }
          if ( v45 != -1 || BN_sub((int *)v18, a3, (int *)v18) )
          {
            if ( sub_B86D8((int)v8) )
            {
              if ( v18[3] || sub_B82F8((int *)v18, a3) >= 0 )
              {
                if ( !sub_1337FC(v49, v18, a3, a4) )
                  goto LABEL_24;
              }
              else if ( !sub_B89E4(v49, (int)v18) )
              {
                goto LABEL_24;
              }
              *a5 = 0;
              goto LABEL_28;
            }
            *a5 = 1;
          }
        }
      }
    }
    else
    {
      v49 = 0;
    }
LABEL_24:
    if ( !a1 )
    {
LABEL_25:
      v21 = v49;
      v49 = 0;
      sub_B895C(v21);
LABEL_28:
      sub_130C74(a4);
      return v49;
    }
LABEL_27:
    v49 = 0;
    goto LABEL_28;
  }
  sub_130BC0((int)a4);
  v24 = (int *)sub_130CCC(a4, v23);
  v26 = (int *)sub_130CCC(a4, v25);
  v28 = sub_130CCC(a4, v27);
  v30 = sub_130CCC(a4, v29);
  v50 = sub_130CCC(a4, v31);
  v33 = sub_130CCC(a4, v32);
  v46 = sub_130CCC(a4, v34);
  if ( !v46 )
  {
    v35 = 0;
    goto LABEL_57;
  }
  if ( a1 )
  {
    if ( !sub_B8930(v28, 1) )
      goto LABEL_36;
    sub_B8930(v33, 0);
    if ( !sub_B89E4((int)v26, a2) )
      goto LABEL_36;
    v35 = a1;
  }
  else
  {
    v35 = sub_B822C();
    if ( !v35 )
      goto LABEL_58;
    if ( !sub_B8930(v28, 1) )
      goto LABEL_58;
    sub_B8930(v33, 0);
    if ( !sub_B89E4((int)v26, a2) )
      goto LABEL_58;
  }
  if ( !sub_B89E4((int)v24, (int)a3) )
    goto LABEL_57;
  v24[3] = 0;
  if ( (v26[3] || sub_B82F8(v26, v24) >= 0) && !sub_1337FC(v26, v26, v24, a4) )
    goto LABEL_57;
  if ( sub_B870C((int)a3) && sub_B85BC(a3) <= 2048 )
  {
    while ( !sub_B85B0((int)v26) )
    {
      v42 = 0;
      while ( !sub_B83F0(v26, v42) )
      {
        ++v42;
        if ( sub_B870C((int)v28) && !sub_12F408((int *)v28, (int *)v28, a3) || !sub_BA324((int)v28, (int *)v28) )
          goto LABEL_57;
      }
      if ( v42 && !sub_BA7EC(v26, v26, v42) )
        goto LABEL_57;
      v43 = 0;
      while ( !sub_B83F0(v24, v43) )
      {
        ++v43;
        if ( sub_B870C((int)v33) && !sub_12F408((int *)v33, (int *)v33, a3) || !sub_BA324((int)v33, (int *)v33) )
          goto LABEL_57;
      }
      if ( v43 && !sub_BA7EC(v24, v24, v43) )
        goto LABEL_57;
      if ( sub_B82F8(v26, v24) < 0 )
      {
        if ( !sub_12F408((int *)v33, (int *)v33, (int *)v28) || !sub_12F56C(v24, v24, v26) )
          goto LABEL_57;
      }
      else if ( !sub_12F408((int *)v28, (int *)v28, (int *)v33) || !sub_12F56C(v26, v26, v24) )
      {
        goto LABEL_57;
      }
    }
    goto LABEL_121;
  }
  v36 = (int *)v50;
  v52 = v35;
  v37 = -1;
  v51 = a4;
  while ( !sub_B85B0((int)v26) )
  {
    v39 = sub_B85BC(v24);
    if ( v39 == sub_B85BC(v26) )
      goto LABEL_130;
    v40 = sub_B85BC(v24);
    if ( v40 != sub_B85BC(v26) + 1 )
    {
      if ( !sub_131220(v30, v36, v24, v26, v51) )
        goto LABEL_56;
      goto LABEL_52;
    }
    if ( !sub_BA234(v46, (int **)v26) )
      goto LABEL_56;
    if ( sub_B82F8(v24, (int *)v46) < 0 )
    {
LABEL_130:
      if ( !sub_B8930(v30, 1) || !BN_sub(v36, v24, v26) )
      {
LABEL_56:
        v35 = v52;
        a4 = v51;
        goto LABEL_57;
      }
    }
    else
    {
      if ( !BN_sub(v36, v24, (int *)v46) || !BN_add((int *)v30, (int *)v46, v26) )
        goto LABEL_56;
      if ( sub_B82F8(v24, (int *)v30) < 0 )
      {
        if ( !sub_B8930(v30, 2) )
          goto LABEL_56;
      }
      else if ( !sub_B8930(v30, 3) || !BN_sub(v36, v36, v26) )
      {
        goto LABEL_56;
      }
    }
LABEL_52:
    if ( sub_B86D8((int)v30) )
    {
      if ( !BN_add(v24, (int *)v28, (int *)v33) )
        goto LABEL_56;
    }
    else
    {
      if ( sub_B86F0((int)v30, 2) )
      {
        if ( !sub_BA234((int **)v24, v28) )
          goto LABEL_56;
      }
      else if ( sub_B86F0((int)v30, 4) )
      {
        if ( !sub_BA5F8((void **)v24, (int *)v28, 2) )
          goto LABEL_56;
      }
      else if ( v30[1] == (int *)1 )
      {
        if ( !sub_B89E4((int)v24, (int)v28) || !sub_BADB4((int **)v24, **v30) )
          goto LABEL_56;
      }
      else if ( !sub_BA0CC((int **)v24, v30, v28, (int)v51) )
      {
        goto LABEL_56;
      }
      if ( !BN_add(v24, v24, (int *)v33) )
        goto LABEL_56;
    }
    v38 = v36;
    v37 = -v37;
    v36 = (int *)v33;
    v33 = v28;
    v28 = (int **)v24;
    v24 = v26;
    v26 = v38;
  }
  a4 = v51;
  v44 = v37 == -1;
  v35 = v52;
  if ( !v44 )
    goto LABEL_115;
LABEL_121:
  if ( !BN_sub((int *)v33, a3, (int *)v33) )
  {
LABEL_57:
    if ( !a1 )
    {
LABEL_58:
      v41 = v35;
      v35 = 0;
      sub_B895C(v41);
      goto LABEL_37;
    }
LABEL_36:
    v35 = 0;
    goto LABEL_37;
  }
LABEL_115:
  if ( !sub_B86D8((int)v24) )
  {
    *a5 = 1;
    goto LABEL_57;
  }
  if ( !v33[3] && sub_B82F8((int *)v33, a3) < 0 )
  {
    if ( sub_B89E4(v35, (int)v33) )
      goto LABEL_37;
    goto LABEL_57;
  }
  if ( !sub_1337FC(v35, v33, a3, a4) )
    goto LABEL_57;
LABEL_37:
  sub_130C74(a4);
  return v35;
}
