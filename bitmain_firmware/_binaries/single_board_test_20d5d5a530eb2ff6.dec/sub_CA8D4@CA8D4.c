int __fastcall sub_CA8D4(int a1, _DWORD *a2, unsigned __int8 *a3, int a4, int a5)
{
  int v5; // r6
  int v8; // r2
  int v9; // r11
  unsigned int v10; // r4
  int v11; // r2
  int result; // r0
  int v15; // r0
  int v16; // r8
  int v17; // r0
  int v18; // r8
  int v19; // r2
  int *v20; // r10
  int v21; // r2
  _BOOL4 v22; // r4
  int *v23; // [sp+8h] [bp-Ch]
  int v24; // [sp+Ch] [bp-8h]

  v5 = a5;
  if ( !a4 )
  {
    sub_D0048(16, 103, 100, "crypto/ec/ecp_oct.c", 280);
    return 0;
  }
  v8 = *a3;
  v9 = v8 & 1;
  v10 = v8 & 0xFFFFFFFE;
  if ( (v8 & 0xF8) != 0 )
  {
    v11 = 289;
LABEL_9:
    sub_D0048(16, 103, 102, "crypto/ec/ecp_oct.c", v11);
    return 0;
  }
  if ( (v8 & 0xFFFFFFFA) != 0 )
    goto LABEL_11;
  if ( (v8 & 1) != 0 )
  {
    v11 = 293;
    goto LABEL_9;
  }
  if ( v10 )
  {
LABEL_11:
    v15 = sub_B85BC(*(_DWORD **)(a1 + 40));
    v16 = v15 + 14;
    v17 = v15 + 7;
    if ( v17 < 0 )
      v17 = v16;
    v18 = v17 >> 3;
    if ( v10 == 2 )
      v19 = v18 + 1;
    else
      v19 = 2 * v18;
    if ( v10 != 2 )
      ++v19;
    if ( v19 != a4 )
    {
      v11 = 312;
      goto LABEL_9;
    }
    if ( a5 )
    {
      v24 = 0;
    }
    else
    {
      result = sub_130B08(v17);
      v5 = result;
      if ( !result )
        return result;
      v24 = result;
    }
    sub_130BC0(v5);
    v23 = (int *)sub_130CCC(v5);
    v20 = (int *)sub_130CCC(v5);
    if ( v20 && sub_B8AEC(a3 + 1, v18, v23) )
    {
      if ( sub_B82F8(v23, *(int **)(a1 + 40)) < 0 )
      {
        if ( v10 == 2 )
        {
          v22 = sub_C8788((_DWORD *)a1, a2) != 0;
          goto LABEL_27;
        }
        if ( !sub_B8AEC(&a3[v18 + 1], v18, v20) )
          goto LABEL_26;
        if ( sub_B82F8(v20, *(int **)(a1 + 40)) >= 0 )
        {
          v21 = 342;
        }
        else
        {
          if ( v10 != 6 || v9 == sub_B870C((int)v20) )
          {
            v22 = sub_C6E54((_DWORD *)a1, a2) != 0;
            goto LABEL_27;
          }
          v21 = 347;
        }
      }
      else
      {
        v21 = 331;
      }
      sub_D0048(16, 103, 102, "crypto/ec/ecp_oct.c", v21);
    }
LABEL_26:
    v22 = 0;
LABEL_27:
    sub_130C74(v5);
    sub_130B5C(v24);
    return v22;
  }
  if ( a4 != 1 )
  {
    v11 = 299;
    goto LABEL_9;
  }
  return sub_C6A30(a1, a2);
}
