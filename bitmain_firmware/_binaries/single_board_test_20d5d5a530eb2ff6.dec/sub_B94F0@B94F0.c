int __fastcall sub_B94F0(int a1, int **a2, int a3)
{
  int v7; // r7
  int v8; // r0
  int v9; // r3
  int v10; // r3
  int v11; // r3
  bool v12; // cc
  int *v13; // r3
  int v14; // r3
  int v15; // r7
  int v16; // r4
  _DWORD v17[2]; // [sp+Ch] [bp-1Ch] BYREF
  _DWORD v18[5]; // [sp+14h] [bp-14h] BYREF

  if ( sub_B85B0((int)a2) )
    return 0;
  sub_130BC0(a3);
  v7 = sub_130CCC(a3);
  if ( !v7 || !sub_B89E4(a1 + 24, (int)a2) )
    goto LABEL_29;
  if ( sub_B87C0((int)a2, 4) )
    sub_B87B8(a1 + 24, 4);
  *(_DWORD *)(a1 + 36) = 0;
  sub_B8210(v18);
  v18[3] = 0;
  v18[0] = v17;
  v18[2] = 2;
  if ( sub_B87C0((int)a2, 4) )
    sub_B87B8((int)v18, 4);
  v8 = sub_B85BC(a2);
  v9 = v8 + 126;
  if ( v8 + 63 >= 0 )
    v9 = v8 + 63;
  *(_DWORD *)a1 = v9 & 0xFFFFFFC0;
  sub_B8930((int **)(a1 + 4), 0);
  if ( !sub_B8A68((int *)(a1 + 4), 64) )
    goto LABEL_29;
  v10 = **a2;
  v17[1] = 0;
  v17[0] = v10;
  v18[1] = v10 != 0;
  if ( sub_B86D8((int)v18) )
  {
    sub_B8930((int **)v7, 0);
  }
  else if ( !sub_1330EC(v7, a1 + 4, v18, a3) )
  {
    goto LABEL_29;
  }
  if ( sub_BA5F8(v7, v7, 64) )
  {
    if ( sub_B85B0(v7) )
    {
      if ( !sub_B8930((int **)v7, -1) )
        goto LABEL_29;
    }
    else if ( !sub_BACA0(v7, 1) )
    {
      goto LABEL_29;
    }
    if ( sub_131220(v7, 0, v7, v18, a3) )
    {
      v11 = *(_DWORD *)(v7 + 4);
      v12 = v11 <= 0;
      if ( v11 <= 0 )
        v13 = 0;
      else
        v13 = *(int **)v7;
      if ( !v12 )
        v13 = (int *)*v13;
      *(_DWORD *)(a1 + 68) = 0;
      *(_DWORD *)(a1 + 64) = v13;
      sub_B8930((int **)(a1 + 4), 0);
      if ( sub_B8A68((int *)(a1 + 4), 2 * *(_DWORD *)a1) )
      {
        if ( sub_131220(0, a1 + 4, a1 + 4, a1 + 24, a3) )
        {
          v14 = *(_DWORD *)(a1 + 8);
          v15 = *(_DWORD *)(a1 + 28);
          if ( v14 < v15 )
            memset((void *)(*(_DWORD *)(a1 + 4) + 4 * v14), 0, 4 * (v15 - v14));
          *(_DWORD *)(a1 + 8) = v15;
          v16 = 1;
          goto LABEL_30;
        }
      }
    }
  }
LABEL_29:
  v16 = 0;
LABEL_30:
  sub_130C74(a3);
  return v16;
}
