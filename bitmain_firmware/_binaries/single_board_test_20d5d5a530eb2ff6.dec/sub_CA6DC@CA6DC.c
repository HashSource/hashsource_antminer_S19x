int __fastcall sub_CA6DC(int a1, _DWORD *a2, int a3, _BYTE *a4, unsigned int a5, int a6)
{
  unsigned int v6; // r5
  bool v7; // zf
  int v8; // r9
  int result; // r0
  int v14; // r0
  int v15; // r8
  int v16; // r0
  unsigned int v17; // r8
  unsigned int v18; // r11
  int v19; // r3
  char v20; // r3
  int v21; // r0
  int v22; // r2
  int v23; // r0
  size_t v24; // r2
  int v25; // r5
  int v26; // r5
  int v27; // r2
  int v28; // r0
  int v29; // r0
  int v30; // r2
  int v31; // r0
  size_t v32; // r2
  _BYTE *v33; // r0
  _DWORD *v34; // [sp+8h] [bp-Ch]
  _DWORD *v35; // [sp+Ch] [bp-8h]

  v6 = a3 & 0xFFFFFFFB;
  v7 = a3 == 4;
  if ( a3 != 4 )
    v7 = v6 == 2;
  if ( !v7 )
  {
    sub_D0048(16, 104, 104, "crypto/ec/ecp_oct.c", 167);
LABEL_6:
    v8 = 0;
LABEL_7:
    sub_130B5C(v8);
    return 0;
  }
  if ( !sub_C6CD4((_DWORD *)a1, a2) )
  {
    v14 = sub_B85BC(*(_DWORD **)(a1 + 40));
    v15 = v14 + 14;
    v16 = v14 + 7;
    if ( v16 < 0 )
      v16 = v15;
    v17 = v16 >> 3;
    if ( a3 == 2 )
      v18 = v17 + 1;
    else
      v18 = 2 * v17;
    if ( a3 != 2 )
      ++v18;
    if ( a4 )
    {
      if ( v18 > a5 )
      {
        sub_D0048(16, 104, 100, "crypto/ec/ecp_oct.c", 192);
        goto LABEL_6;
      }
      v8 = 0;
      result = a6;
      if ( !a6 )
      {
        result = sub_130B08(0);
        a6 = result;
        if ( !result )
          return result;
        v8 = result;
      }
      sub_130BC0(result);
      v34 = (_DWORD *)sub_130CCC(a6);
      v19 = sub_130CCC(a6);
      v35 = (_DWORD *)v19;
      if ( !v19 || !sub_C6D34((_DWORD *)a1, a2, (int)v34, v19, a6) )
      {
LABEL_35:
        sub_130C74(a6);
        goto LABEL_7;
      }
      if ( v6 != 2 || (v28 = sub_B870C((int)v35), v20 = a3 + 1, !v28) )
        v20 = a3;
      *a4 = v20;
      v21 = sub_B85BC(v34);
      v22 = v21 + 14;
      v23 = v21 + 7;
      if ( v23 >= 0 )
        v22 = v23;
      v24 = v17 - (v22 >> 3);
      if ( v17 < v24 )
      {
        v27 = 222;
        goto LABEL_34;
      }
      v25 = 1;
      if ( v24 )
      {
        v25 = v24 + 1;
        memset(a4 + 1, 0, v24);
      }
      v26 = v25 + sub_B8648(v34, (int)&a4[v25]);
      if ( v26 != v17 + 1 )
      {
        v27 = 232;
LABEL_34:
        sub_D0048(16, 104, 68, "crypto/ec/ecp_oct.c", v27);
        goto LABEL_35;
      }
      if ( (a3 & 0xFFFFFFFD) == 4 )
      {
        v29 = sub_B85BC(v35);
        v30 = v29 + 14;
        v31 = v29 + 7;
        if ( v31 >= 0 )
          v30 = v31;
        v32 = v17 - (v30 >> 3);
        if ( v17 < v32 )
        {
          v27 = 240;
          goto LABEL_34;
        }
        if ( v32 )
        {
          v33 = &a4[v26];
          v26 += v32;
          memset(v33, 0, v32);
        }
        v26 += sub_B8648(v35, (int)&a4[v26]);
      }
      if ( v26 != v18 )
      {
        v27 = 252;
        goto LABEL_34;
      }
      sub_130C74(a6);
    }
    else
    {
      v8 = 0;
    }
    sub_130B5C(v8);
    return v18;
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
    sub_D0048(16, 104, 100, "crypto/ec/ecp_oct.c", 175);
    return 0;
  }
}
