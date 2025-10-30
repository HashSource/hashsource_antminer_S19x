int __fastcall BN_mod_exp_mont(int *a1, int *a2, _DWORD *a3, int **a4, int ***a5, int *a6)
{
  int *v10; // r8
  int v12; // r10
  int v13; // r10
  int **v14; // r1
  int **v15; // r1
  int **v16; // r1
  int *v17; // r11
  int v18; // r0
  _UNKNOWN **v19; // r0
  int v20; // r5
  int v21; // r9
  bool v22; // nf
  int v23; // r11
  int v24; // r5
  int v25; // r8
  int v26; // r1
  char v27; // r3
  int v28; // r8
  _BOOL4 v29; // r0
  int **v30; // r1
  int *v31; // r5
  int v32; // r6
  int v33; // r1
  int *v34; // r0
  int *v35; // r0
  int *v36; // [sp+8h] [bp-9Ch]
  int *v37; // [sp+Ch] [bp-98h]
  int v38; // [sp+Ch] [bp-98h]
  int *v39; // [sp+10h] [bp-94h]
  int v40; // [sp+14h] [bp-90h]
  int v41; // [sp+14h] [bp-90h]
  int v42; // [sp+18h] [bp-8Ch]
  int *v43; // [sp+1Ch] [bp-88h]
  _DWORD v44[33]; // [sp+20h] [bp-84h] BYREF

  v10 = a6;
  if ( sub_B87C0((int)a3, 4) || sub_B87C0((int)a2, 4) || sub_B87C0((int)a4, 4) )
    return sub_1318A4(a1, a2, a3, (int)a4, a5, a6);
  v12 = sub_B870C((int)a4);
  if ( !v12 )
  {
    sub_D0048(3, 109, 102, (int)"crypto/bn/bn_exp.c", 319);
    return v12;
  }
  v13 = sub_B85BC(a3);
  if ( v13 )
  {
    sub_130BC0((int)a5);
    v37 = (int *)sub_130CCC(a5, v14);
    v39 = (int *)sub_130CCC(a5, v15);
    v17 = (int *)sub_130CCC(a5, v16);
    v44[0] = v17;
    if ( !v17 )
    {
      v12 = 0;
      v36 = 0;
      goto LABEL_34;
    }
    if ( a6 )
    {
      v36 = a6;
    }
    else
    {
      v35 = sub_B9478();
      v36 = v35;
      if ( !v35 || !sub_B94F0((int)v35, a4, (int)a5) )
      {
        v12 = 0;
        goto LABEL_53;
      }
    }
    if ( a2[3] || sub_B82F8(a2, (int *)a4) >= 0 )
    {
      v18 = sub_1337FC(v17, a2, a4, a5);
      a2 = v17;
      if ( !v18 )
        goto LABEL_40;
    }
    v18 = sub_B943C(v17, (int)a2, v36, (int)a5);
    if ( !v18 )
      goto LABEL_40;
    if ( v13 >= 672 )
    {
      v41 = 32;
      v42 = 6;
    }
    else if ( v13 > 239 )
    {
      v41 = 16;
      v42 = 5;
    }
    else if ( v13 > 79 )
    {
      v41 = 8;
      v42 = 4;
    }
    else
    {
      if ( v13 <= 23 )
      {
        v42 = 1;
LABEL_19:
        v19 = sub_B81FC();
        v18 = sub_B943C(v39, (int)v19, v36, (int)a5);
        if ( v18 )
        {
          v43 = a1;
          v38 = v13 - 1;
          v20 = v13 - 1;
          v40 = 1;
          while ( 1 )
          {
            while ( sub_B83F0(a3, v20) )
            {
              if ( v42 == 1 )
              {
                v24 = 1;
                v21 = 0;
              }
              else
              {
                v21 = 0;
                v23 = v20 - 1;
                v22 = v20 - 1 < 0;
                v24 = 1;
                if ( !v22 )
                {
                  v25 = 1;
                  do
                  {
                    v26 = v23--;
                    if ( sub_B83F0(a3, v26) )
                    {
                      v27 = v25 - v21;
                      v21 = v25;
                      v24 = (v24 << v27) | 1;
                    }
                    ++v25;
                  }
                  while ( v25 != v42 && v23 != -1 );
                }
              }
              if ( !v40 )
              {
                v28 = 0;
                while ( 1 )
                {
                  ++v28;
                  v29 = sub_B9348(v39, (int)v39, (int)v39, v36, (int)a5);
                  if ( !v29 )
                    break;
                  if ( v28 > v21 )
                    goto LABEL_58;
                }
LABEL_33:
                v10 = a6;
                v12 = v29;
                goto LABEL_34;
              }
LABEL_58:
              v29 = sub_B9348(v39, (int)v39, v44[v24 >> 1], v36, (int)a5);
              if ( !v29 )
                goto LABEL_33;
              v38 -= v21 + 1;
              if ( v38 < 0 )
              {
LABEL_63:
                v10 = a6;
                v12 = sub_B9428(v43, (int)v39, v36, (int)a5) != 0;
                goto LABEL_34;
              }
              v20 = v38;
              v40 = 0;
            }
            if ( !v40 && !sub_B9348(v39, (int)v39, (int)v39, v36, (int)a5) )
              break;
            if ( !v38 )
              goto LABEL_63;
            v20 = --v38;
          }
          v10 = a6;
          v12 = 0;
          goto LABEL_34;
        }
        goto LABEL_40;
      }
      v41 = 4;
      v42 = 3;
    }
    v18 = sub_B9348(v37, (int)v17, (int)v17, v36, (int)a5);
    if ( v18 )
    {
      v31 = v44;
      v32 = 1;
      while ( 1 )
      {
        ++v32;
        v34 = (int *)sub_130CCC(a5, v30);
        v31[1] = (int)v34;
        if ( !v34 )
          break;
        v33 = *v31++;
        v18 = sub_B9348(v34, v33, (int)v37, v36, (int)a5);
        if ( !v18 )
          goto LABEL_40;
        if ( v32 >= v41 )
          goto LABEL_19;
      }
      v12 = 0;
LABEL_34:
      if ( v10 )
      {
LABEL_35:
        sub_130C74(a5);
        return v12;
      }
LABEL_53:
      sub_B94B4(v36);
      goto LABEL_35;
    }
LABEL_40:
    v12 = v18;
    goto LABEL_34;
  }
  if ( sub_B8590((int)a4, 1) )
  {
    v12 = 1;
    sub_B8930((int **)a1, 0);
    return v12;
  }
  return sub_B8930((int **)a1, 1);
}
