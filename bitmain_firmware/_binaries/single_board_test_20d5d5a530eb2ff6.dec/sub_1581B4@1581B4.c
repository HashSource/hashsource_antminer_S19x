int ***__fastcall sub_1581B4(_DWORD *a1, _DWORD *a2, unsigned __int8 *a3, int a4, int ***a5)
{
  int ***v5; // r6
  int v7; // r3
  int v9; // r9
  unsigned int v10; // r4
  int v11; // r2
  int ***result; // r0
  int v15; // r0
  int v16; // r7
  int v17; // r7
  int v18; // r3
  int v19; // r2
  int **v20; // r1
  int **v21; // r11
  int **v22; // r1
  int **v23; // r1
  _BOOL4 v24; // r4
  int v25; // r2
  void **v26; // [sp+8h] [bp-14h]
  int v27; // [sp+Ch] [bp-10h]
  int v28; // [sp+Ch] [bp-10h]
  int **v29; // [sp+10h] [bp-Ch]
  int **v30; // [sp+14h] [bp-8h]

  v5 = a5;
  if ( !a4 )
  {
    sub_D0048(16, 160, 100, (int)"crypto/ec/ec2_oct.c", 247);
    return 0;
  }
  v7 = *a3;
  v9 = v7 & 1;
  v10 = v7 & 0xFFFFFFFE;
  if ( (v7 & 0xF8) != 0 )
  {
    v11 = 268;
LABEL_9:
    sub_D0048(16, 160, 102, (int)"crypto/ec/ec2_oct.c", v11);
    return 0;
  }
  if ( (v7 & 0xFFFFFFFA) != 0 )
    goto LABEL_11;
  if ( (v7 & 1) != 0 )
  {
    v11 = 272;
    goto LABEL_9;
  }
  if ( v10 )
  {
LABEL_11:
    v15 = sub_C638C((int)a1);
    v16 = v15 + 14;
    if ( v15 + 7 >= 0 )
      v16 = v15 + 7;
    v17 = v16 >> 3;
    v18 = v15;
    if ( v10 == 2 )
      v19 = v17 + 1;
    else
      v19 = 2 * v17;
    if ( v10 != 2 )
      ++v19;
    if ( v19 != a4 )
    {
      v11 = 293;
      goto LABEL_9;
    }
    if ( a5 )
    {
      v26 = 0;
    }
    else
    {
      v28 = v15;
      result = (int ***)sub_130B08();
      v5 = result;
      if ( !result )
        return result;
      v26 = (void **)result;
      v18 = v28;
    }
    v27 = v18;
    sub_130BC0((int)v5);
    v21 = sub_130CCC(v5, v20);
    v29 = sub_130CCC(v5, v22);
    v30 = sub_130CCC(v5, v23);
    if ( !v30 || !sub_B8AEC(a3 + 1, v17, v21) )
      goto LABEL_32;
    if ( v27 < sub_B85BC(v21) )
    {
      v25 = 313;
    }
    else
    {
      if ( v10 == 2 )
      {
        v24 = sub_C8788(a1, a2) != 0;
        goto LABEL_33;
      }
      if ( !sub_B8AEC(&a3[v17 + 1], v17, v29) )
        goto LABEL_32;
      if ( v27 >= sub_B85BC(v29) )
      {
        if ( v10 != 6 )
        {
LABEL_28:
          v24 = sub_C6E54(a1, a2) != 0;
LABEL_33:
          sub_130C74(v5);
          sub_130B5C(v26);
          return (int ***)v24;
        }
        if ( sub_B85B0((int)v21) )
        {
          if ( v9 )
          {
            v24 = 0;
            sub_D0048(16, 16, 102, (int)"crypto/ec/ec2_oct.c", 335);
            goto LABEL_33;
          }
          goto LABEL_28;
        }
        if ( (*(int (__fastcall **)(_DWORD *, int **, int **, int **, int ***))(*a1 + 144))(a1, v30, v29, v21, v5) )
        {
          if ( v9 != sub_B870C((int)v30) )
          {
            v24 = 0;
            sub_D0048(16, 16, 102, (int)"crypto/ec/ec2_oct.c", 342);
            goto LABEL_33;
          }
          goto LABEL_28;
        }
LABEL_32:
        v24 = 0;
        goto LABEL_33;
      }
      v25 = 324;
    }
    sub_D0048(16, 160, 102, (int)"crypto/ec/ec2_oct.c", v25);
    goto LABEL_32;
  }
  if ( a4 != 1 )
  {
    v11 = 279;
    goto LABEL_9;
  }
  return (int ***)sub_C6A30((int)a1, a2);
}
