int __fastcall sub_157F98(_DWORD *a1, _DWORD *a2, int a3, _BYTE *a4, unsigned int a5, int ***a6)
{
  bool v7; // zf
  void **v8; // r8
  int result; // r0
  int v13; // r0
  int v14; // r7
  int v15; // r0
  unsigned int v16; // r7
  unsigned int v17; // r10
  int **v18; // r1
  int **v19; // r11
  int **v20; // r1
  int **v21; // r1
  int v22; // r0
  int v23; // r2
  int v24; // r0
  size_t v25; // r2
  int v26; // r6
  int v27; // r6
  int v28; // r2
  int v29; // r0
  int v30; // r2
  int v31; // r0
  size_t v32; // r2
  _BYTE *v33; // r0
  int **v34; // [sp+8h] [bp-Ch]
  int **v35; // [sp+Ch] [bp-8h]

  v7 = (a3 & 0xFFFFFFFB) == 2;
  if ( (a3 & 0xFFFFFFFB) != 2 )
    v7 = a3 == 4;
  if ( !v7 )
  {
    sub_D0048(16, 161, 104, (int)"crypto/ec/ec2_oct.c", 126);
LABEL_6:
    v8 = 0;
LABEL_7:
    sub_130B5C(v8);
    return 0;
  }
  if ( !sub_C6CD4(a1, a2) )
  {
    v13 = sub_C638C((int)a1);
    v14 = v13 + 14;
    v15 = v13 + 7;
    if ( v15 < 0 )
      v15 = v14;
    v16 = v15 >> 3;
    if ( a3 == 2 )
      v17 = v16 + 1;
    else
      v17 = 2 * v16;
    if ( a3 != 2 )
      ++v17;
    if ( a4 )
    {
      if ( v17 > a5 )
      {
        sub_D0048(16, 161, 100, (int)"crypto/ec/ec2_oct.c", 151);
        goto LABEL_6;
      }
      v8 = 0;
      result = (int)a6;
      if ( !a6 )
      {
        result = (int)sub_130B08();
        a6 = (int ***)result;
        if ( !result )
          return result;
        v8 = (void **)result;
      }
      sub_130BC0(result);
      v19 = sub_130CCC(a6, v18);
      v34 = sub_130CCC(a6, v20);
      v35 = sub_130CCC(a6, v21);
      if ( !v35 || !sub_C6D34(a1, a2, (int)v19, (int)v34, (int)a6) )
      {
LABEL_35:
        sub_130C74(a6);
        goto LABEL_7;
      }
      *a4 = a3;
      if ( a3 != 4 && !sub_B85B0((int)v19) )
      {
        if ( !(*(int (__fastcall **)(_DWORD *, int **, int **, int **, int ***))(*a1 + 144))(a1, v35, v34, v19, a6) )
          goto LABEL_35;
        if ( sub_B870C((int)v35) )
          ++*a4;
      }
      v22 = sub_B85BC(v19);
      v23 = v22 + 14;
      v24 = v22 + 7;
      if ( v24 >= 0 )
        v23 = v24;
      v25 = v16 - (v23 >> 3);
      if ( v16 < v25 )
      {
        v28 = 184;
        goto LABEL_34;
      }
      v26 = 1;
      if ( v25 )
      {
        v26 = v25 + 1;
        memset(a4 + 1, 0, v25);
      }
      v27 = v26 + sub_B8648(v19, (int)&a4[v26]);
      if ( v27 != v16 + 1 )
      {
        v28 = 194;
LABEL_34:
        sub_D0048(16, 161, 68, (int)"crypto/ec/ec2_oct.c", v28);
        goto LABEL_35;
      }
      if ( (a3 & 0xFFFFFFFD) == 4 )
      {
        v29 = sub_B85BC(v34);
        v30 = v29 + 14;
        v31 = v29 + 7;
        if ( v31 >= 0 )
          v30 = v31;
        v32 = v16 - (v30 >> 3);
        if ( v16 < v32 )
        {
          v28 = 202;
          goto LABEL_34;
        }
        if ( v32 )
        {
          v33 = &a4[v27];
          v27 += v32;
          memset(v33, 0, v32);
        }
        v27 += sub_B8648(v34, (int)&a4[v27]);
      }
      if ( v27 != v17 )
      {
        v28 = 214;
        goto LABEL_34;
      }
      sub_130C74(a6);
    }
    else
    {
      v8 = 0;
    }
    sub_130B5C(v8);
    return v17;
  }
  if ( !a4 )
    return 1;
  if ( a5 )
  {
    *a4 = 0;
    return 1;
  }
  else
  {
    sub_D0048(16, 161, 100, (int)"crypto/ec/ec2_oct.c", 134);
    return 0;
  }
}
