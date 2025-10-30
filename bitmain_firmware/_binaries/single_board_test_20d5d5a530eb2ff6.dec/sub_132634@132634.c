int __fastcall sub_132634(int **a1, int *a2, _DWORD *a3, int *a4, _DWORD *a5, int **a6, int ***a7, int *a8)
{
  int ***v10; // r4
  int *v11; // r11
  int v12; // r8
  int v13; // r7
  int **v14; // r1
  int **v15; // r1
  int **v16; // r1
  int **v17; // r9
  int **v18; // r1
  int *v20; // r2
  int v21; // r0
  int **v22; // r1
  int *v23; // r5
  int v24; // r6
  int v25; // r1
  int *v26; // r0
  int *v27; // r1
  _BOOL4 v28; // r7
  int *v29; // r0
  int **v30; // r1
  int v31; // r9
  int *v32; // r6
  int *v33; // r0
  int v34; // r1
  _UNKNOWN **v35; // r0
  int j; // r8
  int v37; // r5
  int v38; // r6
  int v39; // r7
  int i; // r9
  _DWORD *v41; // r4
  int v42; // r11
  int v43; // r3
  int v44; // r3
  int v45; // r3
  int v46; // r5
  _DWORD *v47; // r7
  int v48; // r4
  int v49; // r1
  int v50; // r3
  _DWORD *v51; // r5
  int v52; // r4
  int v53; // r1
  int v56; // [sp+14h] [bp-138h]
  int *v57; // [sp+1Ch] [bp-130h]
  int **v58; // [sp+20h] [bp-12Ch]
  int *v59; // [sp+24h] [bp-128h]
  int v60; // [sp+24h] [bp-128h]
  int v61; // [sp+24h] [bp-128h]
  int *v62; // [sp+28h] [bp-124h]
  int v63; // [sp+2Ch] [bp-120h]
  int v64; // [sp+2Ch] [bp-120h]
  int v65; // [sp+30h] [bp-11Ch]
  int v66; // [sp+34h] [bp-118h]
  int v67; // [sp+38h] [bp-114h]
  _DWORD v68[32]; // [sp+48h] [bp-104h] BYREF
  _DWORD v69[33]; // [sp+C8h] [bp-84h] BYREF

  v10 = a7;
  v11 = a8;
  if ( !sub_B870C((int)a6) )
  {
    sub_D0048(3, 118, 102, (int)"crypto/bn/bn_exp2.c", 36);
    return 0;
  }
  v12 = sub_B85BC(a3);
  v13 = sub_B85BC(a5);
  if ( !(v12 | v13) )
    return sub_B8930(a1, 1);
  sub_130BC0((int)a7);
  v59 = (int *)sub_130CCC(a7, v14);
  v62 = (int *)sub_130CCC(a7, v15);
  v17 = sub_130CCC(a7, v16);
  v68[0] = v17;
  v58 = sub_130CCC(a7, v18);
  v69[0] = v58;
  if ( !v58 )
  {
    v57 = 0;
    v28 = 0;
    goto LABEL_39;
  }
  if ( a8 )
  {
    v57 = a8;
  }
  else
  {
    v29 = sub_B9478();
    v57 = v29;
    if ( !v29 || !sub_B94F0((int)v29, a6, (int)a7) )
    {
      v28 = 0;
      goto LABEL_52;
    }
  }
  if ( v12 < 672 )
  {
    if ( v12 > 239 )
    {
      v65 = 16;
      v63 = 5;
    }
    else if ( v12 > 79 )
    {
      v65 = 8;
      v63 = 4;
    }
    else if ( v12 > 23 )
    {
      v65 = 4;
      v63 = 3;
    }
    else
    {
      v65 = 1;
      v63 = 1;
    }
  }
  else
  {
    v65 = 32;
    v63 = 6;
  }
  if ( v13 >= 672 )
  {
    v67 = 32;
    v66 = 6;
  }
  else if ( v13 > 239 )
  {
    v67 = 16;
    v66 = 5;
  }
  else if ( v13 > 79 )
  {
    v67 = 8;
    v66 = 4;
  }
  else if ( v13 > 23 )
  {
    v67 = 4;
    v66 = 3;
  }
  else
  {
    v67 = 1;
    v66 = 1;
  }
  if ( a2[3] || sub_B82F8(a2, (int *)a6) >= 0 )
  {
    v20 = a2;
    a2 = (int *)v17;
    v21 = sub_131220(0, v17, v20, a6, a7);
    if ( !v21 )
      goto LABEL_42;
  }
  if ( sub_B85B0((int)a2) )
    goto LABEL_43;
  v21 = sub_B872C((int)v17, (int)a2, (int)v57, (int)a7);
  if ( !v21 )
    goto LABEL_42;
  if ( v63 != 1 )
  {
    v21 = sub_B93C0(v59, (int)v17, (int)v17, v57, (int)a7);
    if ( v21 )
    {
      v31 = 1;
      v32 = v68;
      while ( 1 )
      {
        ++v31;
        v33 = (int *)sub_130CCC(a7, v30);
        v27 = v33;
        v32[1] = (int)v33;
        if ( !v33 )
          goto LABEL_38;
        v34 = *v32++;
        v21 = sub_B93C0(v33, v34, (int)v59, v57, (int)a7);
        if ( !v21 )
          goto LABEL_42;
        if ( v31 >= v65 )
          goto LABEL_26;
      }
    }
    goto LABEL_42;
  }
LABEL_26:
  if ( a4[3] || sub_B82F8(a4, (int *)a6) >= 0 )
  {
    v21 = sub_131220(0, v58, a4, a6, a7);
    if ( !v21 )
      goto LABEL_42;
    a4 = (int *)v58;
  }
  if ( sub_B85B0((int)a4) )
  {
LABEL_43:
    sub_B8930(a1, 0);
    v28 = 1;
    goto LABEL_39;
  }
  v21 = sub_B872C((int)v58, (int)a4, (int)v57, (int)a7);
  if ( !v21 )
    goto LABEL_42;
  if ( v66 != 1 )
  {
    v21 = sub_B93C0(v59, (int)v58, (int)v58, v57, (int)a7);
    if ( v21 )
    {
      v23 = v69;
      v24 = 1;
      while ( 1 )
      {
        ++v24;
        v26 = (int *)sub_130CCC(a7, v22);
        v27 = v26;
        v23[1] = (int)v26;
        if ( !v26 )
          break;
        v25 = *v23++;
        v21 = sub_B93C0(v26, v25, (int)v59, v57, (int)a7);
        if ( !v21 )
          goto LABEL_42;
        if ( v24 >= v67 )
          goto LABEL_61;
      }
LABEL_38:
      v28 = (_BOOL4)v27;
      goto LABEL_39;
    }
    goto LABEL_42;
  }
LABEL_61:
  v35 = sub_B81FC();
  v21 = sub_B872C((int)v62, (int)v35, (int)v57, (int)a7);
  if ( !v21 )
  {
LABEL_42:
    v28 = v21;
    goto LABEL_39;
  }
  if ( v13 < v12 )
    v13 = v12;
  if ( v13 > 0 )
  {
    j = 0;
    v37 = v13 - 2;
    v38 = 0;
    v39 = 0;
    i = 0;
    v41 = a5;
    v64 = 2 - v63;
    v56 = 1;
    while ( 1 )
    {
      v42 = v37 + 1;
      if ( v39 )
        goto LABEL_67;
      if ( sub_B83F0(a3, v37 + 1) )
        break;
      if ( v38 )
        goto LABEL_73;
LABEL_100:
      v38 = sub_B83F0(v41, v42);
      if ( v38 )
      {
        for ( i = 2 - v66 + v37; !sub_B83F0(v41, i); ++i )
          ;
        v50 = v37;
        v38 = 1;
        if ( i <= v37 )
        {
          v61 = v37;
          v51 = v41;
          v52 = v50;
          do
          {
            v53 = v52--;
            v38 *= 2;
            if ( sub_B83F0(v51, v53) )
              ++v38;
          }
          while ( i <= v52 );
          v41 = v51;
          v37 = v61;
        }
      }
LABEL_68:
      v43 = v39;
      if ( v39 )
        v43 = 1;
      if ( v42 != j )
        v43 = 0;
      if ( v43 )
      {
        v21 = sub_B93C0(v62, (int)v62, v68[v39 >> 1], v57, (int)a7);
        if ( !v21 )
        {
LABEL_41:
          v10 = a7;
          v11 = a8;
          goto LABEL_42;
        }
        v56 = 0;
        v39 = 0;
      }
LABEL_73:
      v44 = v38;
      if ( v38 )
        v44 = 1;
      if ( v42 != i )
        v44 = 0;
      if ( v44 )
      {
        v21 = sub_B93C0(v62, (int)v62, v69[v38 >> 1], v57, (int)a7);
        if ( !v21 )
          goto LABEL_41;
        if ( v37 == -1 )
        {
LABEL_110:
          v10 = a7;
          v11 = a8;
          goto LABEL_111;
        }
        v38 = 0;
      }
      else
      {
        if ( v37 == -1 )
          goto LABEL_110;
        if ( v56 )
        {
          v56 = 1;
          goto LABEL_81;
        }
      }
      v21 = sub_B93C0(v62, (int)v62, (int)v62, v57, (int)a7);
      if ( !v21 )
        goto LABEL_41;
      v56 = 0;
LABEL_81:
      --v37;
    }
    for ( j = v64 + v37; !sub_B83F0(a3, j); ++j )
      ;
    v45 = v37;
    v39 = 1;
    if ( j <= v37 )
    {
      v60 = v37;
      v46 = 1;
      v47 = v41;
      v48 = v45;
      do
      {
        v49 = v48--;
        v46 *= 2;
        if ( sub_B83F0(a3, v49) )
          ++v46;
      }
      while ( j <= v48 );
      v41 = v47;
      v39 = v46;
      v37 = v60;
    }
LABEL_67:
    if ( v38 )
      goto LABEL_68;
    goto LABEL_100;
  }
LABEL_111:
  v28 = sub_B9428((int *)a1, (int)v62, v57, (int)v10) != 0;
LABEL_39:
  if ( !v11 )
LABEL_52:
    sub_B94B4(v57);
  sub_130C74(v10);
  return v28;
}
