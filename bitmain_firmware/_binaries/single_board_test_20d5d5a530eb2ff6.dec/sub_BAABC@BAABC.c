int __fastcall sub_BAABC(int a1, int a2, int a3)
{
  int v3; // r8
  int v5; // r4
  _DWORD *v7; // r7
  int v8; // r0
  bool v9; // zf
  int *v10; // r9
  int v12; // [sp+0h] [bp-80h] BYREF

  v3 = *(_DWORD *)(a2 + 4);
  if ( v3 > 0 )
  {
    v5 = a2;
    sub_130BC0(a3);
    if ( v5 == a1 )
      v7 = (_DWORD *)sub_130CCC(a3);
    else
      v7 = (_DWORD *)a1;
    v8 = sub_130CCC(a3);
    v9 = v8 == 0;
    if ( v8 )
      v9 = v7 == 0;
    v10 = (int *)v8;
    if ( !v9 && sub_B89D8((int)v7, 2 * v3) )
    {
      if ( v3 == 4 )
      {
        sub_130534(*v7, *(_DWORD *)v5);
        goto LABEL_17;
      }
      if ( v3 == 8 )
      {
        sub_130208(*v7, *(_DWORD *)v5);
        goto LABEL_17;
      }
      if ( v3 <= 15 )
      {
        sub_BA824((_DWORD *)*v7, *(int **)v5, v3, (int)&v12);
LABEL_17:
        v7[1] = 2 * v3;
        if ( v7 == (_DWORD *)a1 )
          v5 = 1;
        v7[3] = 0;
        if ( v7 != (_DWORD *)a1 )
          v5 = sub_B89E4(a1, (int)v7) != 0;
        goto LABEL_10;
      }
      if ( v3 == 1 << (sub_B8208(v3) - 1) )
      {
        if ( sub_B89D8((int)v10, 4 * v3) )
        {
          sub_BA9B4((_DWORD *)*v7, *(int **)v5, v3, *v10);
          goto LABEL_17;
        }
      }
      else if ( sub_B89D8((int)v10, 2 * v3) )
      {
        sub_BA824((_DWORD *)*v7, *(int **)v5, v3, *v10);
        goto LABEL_17;
      }
    }
    v5 = 0;
LABEL_10:
    sub_130C74(a3);
    return v5;
  }
  *(_DWORD *)(a1 + 4) = 0;
  *(_DWORD *)(a1 + 12) = 0;
  return 1;
}
