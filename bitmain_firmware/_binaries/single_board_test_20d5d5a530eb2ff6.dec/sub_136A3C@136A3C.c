int **__fastcall sub_136A3C(int **a1, int *a2, int *a3, int ***a4)
{
  int v8; // r0
  int **v10; // r4
  _BOOL4 v11; // r0
  _BOOL4 v12; // r0
  int **v13; // r4
  int **v14; // r1
  int **v15; // r1
  int **v16; // r1
  int **v17; // r1
  int **v18; // r1
  int **v19; // r1
  int *v20; // r11
  int i; // r9
  int v22; // r10
  int v23; // r0
  int *v24; // r0
  int v25; // r2
  int v26; // r2
  int v27; // r0
  int v28; // r0
  int ***v30; // r3
  int **v31; // r8
  int ***v32; // r4
  int j; // r10
  int v34; // r9
  int ***v36; // r3
  int ***v37; // r3
  int ***v38; // r3
  int *v39; // [sp+8h] [bp-1Ch]
  int *v40; // [sp+Ch] [bp-18h]
  int **v41; // [sp+10h] [bp-14h]
  int **v42; // [sp+14h] [bp-10h]
  int **v43; // [sp+18h] [bp-Ch]

  if ( sub_B870C((int)a3) && !sub_B8590((int)a3, 1) )
  {
    if ( sub_B85B0((int)a2) || sub_B86D8((int)a2) )
    {
      if ( a1 )
      {
        v12 = sub_B86D8((int)a2);
        if ( !sub_B8930(a1, v12) )
          return 0;
        return a1;
      }
      v10 = (int **)sub_B822C();
      if ( v10 )
      {
        v11 = sub_B86D8((int)a2);
        if ( sub_B8930(v10, v11) )
          return v10;
        goto LABEL_9;
      }
      goto LABEL_16;
    }
    sub_130BC0((int)a4);
    v39 = (int *)sub_130CCC(a4, v14);
    v43 = sub_130CCC(a4, v15);
    v41 = sub_130CCC(a4, v16);
    v42 = sub_130CCC(a4, v17);
    v40 = (int *)sub_130CCC(a4, v18);
    v20 = (int *)sub_130CCC(a4, v19);
    if ( !v20 )
      goto LABEL_16;
    if ( a1 )
    {
      v13 = a1;
      if ( !sub_1337FC(v39, a2, a3, a4) )
        goto LABEL_16;
    }
    else
    {
      v13 = (int **)sub_B822C();
      if ( !v13 )
        goto LABEL_16;
      if ( !sub_1337FC(v39, a2, a3, a4) )
        goto LABEL_36;
    }
    for ( i = 1; !sub_B83F0(a3, i); ++i )
      ;
    if ( i == 1 )
    {
      if ( !sub_BA7EC(v41, a3, 2) )
        goto LABEL_35;
      v41[3] = 0;
      if ( !sub_BAD28((int)v41, 1u) || !sub_132330(v13, v39, v41, (int **)a3, a4) )
        goto LABEL_35;
      goto LABEL_47;
    }
    if ( i == 2 )
    {
      if ( !sub_133FE4(v42, (int **)v39, a3) )
        goto LABEL_35;
      if ( !sub_BA7EC(v41, a3, 3) )
        goto LABEL_35;
      v41[3] = 0;
      if ( !sub_132330(v43, (int *)v42, v41, (int **)a3, a4)
        || !sub_133FA0(v20, (int)v43, a3, a4)
        || !sub_133F3C((int *)v42, v42, (int **)v20, a3, a4)
        || !sub_BACA0(v42, 1u)
        || !sub_133F3C(v40, (int **)v39, v43, a3, a4)
        || !sub_133F3C(v40, (int **)v40, v42, a3, a4) )
      {
        goto LABEL_35;
      }
      goto LABEL_46;
    }
    if ( !sub_B89E4((int)v41, (int)a3) )
      goto LABEL_35;
    v22 = 2;
    v41[3] = 0;
    while ( 1 )
    {
      if ( v22 <= 21 )
        goto LABEL_110;
      v28 = sub_B85BC(a3);
      if ( !sub_136480((int **)v20, v28, 0, 0) )
        goto LABEL_35;
      if ( sub_B82F8(v20, a3) >= 0 && !(a3[3] ? BN_add(v20, v20, a3) : BN_sub(v20, v20, a3)) )
        goto LABEL_35;
      if ( sub_B85B0((int)v20) )
      {
LABEL_110:
        if ( !sub_B8930((int **)v20, v22) )
          goto LABEL_35;
      }
      v23 = sub_133634((int)v20, (int)v41, a4);
      if ( v23 < -1 )
        goto LABEL_35;
      if ( !v23 )
      {
        v26 = 201;
        goto LABEL_64;
      }
      if ( v23 != 1 )
        break;
      if ( ++v22 == 82 )
        goto LABEL_58;
    }
    if ( v23 != -1 )
    {
LABEL_58:
      sub_D0048(3, 121, 113, (int)"crypto/bn/bn_sqrt.c", 213);
      goto LABEL_35;
    }
    if ( !sub_BA7EC(v41, v41, i) || !sub_132330((int **)v20, v20, v41, (int **)a3, a4) )
      goto LABEL_35;
    if ( sub_B86D8((int)v20) )
    {
      v26 = 228;
LABEL_64:
      sub_D0048(3, 121, 112, (int)"crypto/bn/bn_sqrt.c", v26);
      goto LABEL_35;
    }
    if ( !sub_BA324((int)v42, (int *)v41) )
      goto LABEL_35;
    if ( sub_B85B0((int)v42) )
    {
      if ( !sub_1337FC((int *)v42, v39, a3, a4) )
        goto LABEL_35;
      if ( !sub_B85B0((int)v42) )
      {
        if ( !sub_B8930((int **)v40, 1) )
          goto LABEL_35;
LABEL_80:
        if ( !sub_133FA0((int *)v43, (int)v40, a3, a4)
          || !sub_133F3C((int *)v43, v43, (int **)v39, a3, a4)
          || !sub_133F3C(v40, (int **)v40, (int **)v39, a3, a4) )
        {
          goto LABEL_35;
        }
        v30 = a4;
        v31 = v13;
        v32 = v30;
        while ( !sub_B86D8((int)v43) )
        {
          for ( j = 1; ; ++j )
          {
            if ( i == j )
            {
              v37 = v32;
              v13 = v31;
              a4 = v37;
              v25 = 320;
              goto LABEL_50;
            }
            if ( j == 1 )
            {
              if ( !sub_133FA0((int *)v42, (int)v43, a3, v32) )
                goto LABEL_96;
            }
            else if ( !sub_133F3C((int *)v42, v42, v42, a3, v32) )
            {
              goto LABEL_96;
            }
            if ( sub_B86D8((int)v42) )
              break;
          }
          if ( !sub_B89E4((int)v42, (int)v20) )
            goto LABEL_96;
          v34 = i - j - 1;
          while ( v34-- > 0 )
          {
            if ( !sub_133FA0((int *)v42, (int)v42, a3, v32) )
              goto LABEL_96;
          }
          if ( !sub_133F3C(v20, v42, v42, a3, v32)
            || !sub_133F3C(v40, (int **)v40, v42, a3, v32)
            || !sub_133F3C((int *)v43, v43, (int **)v20, a3, v32) )
          {
LABEL_96:
            v36 = v32;
            v13 = v31;
            a4 = v36;
            goto LABEL_35;
          }
          i = j;
        }
        v38 = v32;
        v13 = v31;
        a4 = v38;
LABEL_46:
        if ( !sub_B89E4((int)v13, (int)v40) )
          goto LABEL_35;
LABEL_47:
        if ( sub_133FA0(v40, (int)v13, a3, a4) )
        {
          if ( !sub_B8354(v40, v39) )
            goto LABEL_17;
          v25 = 351;
LABEL_50:
          sub_D0048(3, 121, 111, (int)"crypto/bn/bn_sqrt.c", v25);
        }
LABEL_35:
        if ( a1 != v13 )
        {
LABEL_36:
          v24 = (int *)v13;
          v13 = 0;
          sub_B87C8(v24);
          goto LABEL_17;
        }
LABEL_16:
        v13 = 0;
LABEL_17:
        sub_130C74(a4);
        return v13;
      }
    }
    else
    {
      if ( !sub_132330((int **)v40, v39, v42, (int **)a3, a4) )
        goto LABEL_35;
      if ( !sub_B85B0((int)v40) )
        goto LABEL_80;
    }
    sub_B8930(v13, 0);
    goto LABEL_17;
  }
  if ( !sub_B8590((int)a3, 2) )
  {
    sub_D0048(3, 121, 112, (int)"crypto/bn/bn_sqrt.c", 42);
    return 0;
  }
  if ( a1 )
  {
    v8 = sub_B83F0(a2, 0);
    if ( !sub_B8930(a1, v8) )
      return 0;
    return a1;
  }
  v10 = (int **)sub_B822C();
  if ( !v10 )
    goto LABEL_16;
  v27 = sub_B83F0(a2, 0);
  if ( !sub_B8930(v10, v27) )
  {
LABEL_9:
    sub_B895C((int)v10);
    return a1;
  }
  return v10;
}
