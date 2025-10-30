int __fastcall sub_CBD18(_DWORD *a1, int a2, int a3, int a4)
{
  int v7; // r9
  int (__fastcall *v8)(_DWORD *, int, _DWORD, int); // r10
  int v9; // r11
  int v10; // r0
  int v11; // r8
  int *v12; // r10
  int v13; // r5
  int v15; // r0
  int *v17; // [sp+10h] [bp-14h]
  int (__fastcall *v18)(_DWORD *, int, int, int, int); // [sp+14h] [bp-10h]
  int v19; // [sp+18h] [bp-Ch]
  int v20; // [sp+1Ch] [bp-8h]

  if ( sub_C6CD4(a1, (_DWORD *)a2) )
    return sub_C6CD4(a1, (_DWORD *)a3) == 0;
  if ( sub_C6CD4(a1, (_DWORD *)a3) )
    return 1;
  if ( !*(_DWORD *)(a2 + 20) || !*(_DWORD *)(a3 + 20) )
  {
    v7 = 0;
    v8 = *(int (__fastcall **)(_DWORD *, int, _DWORD, int))(*a1 + 140);
    v18 = *(int (__fastcall **)(_DWORD *, int, int, int, int))(*a1 + 136);
    if ( !a4 )
    {
      v15 = sub_130B08(0);
      a4 = v15;
      if ( !v15 )
        return -1;
      v7 = v15;
    }
    sub_130BC0(a4);
    v19 = sub_130CCC(a4);
    v20 = sub_130CCC(a4);
    v9 = sub_130CCC(a4);
    v10 = sub_130CCC(a4);
    v11 = v10;
    if ( !v10 )
      goto LABEL_21;
    if ( *(_DWORD *)(a3 + 20) )
    {
      v17 = *(int **)(a2 + 8);
    }
    else
    {
      if ( !v8(a1, v10, *(_DWORD *)(a3 + 16), a4) || !v18(a1, v19, *(_DWORD *)(a2 + 8), v11, a4) )
        goto LABEL_21;
      v17 = (int *)v19;
    }
    if ( *(_DWORD *)(a2 + 20) )
    {
      v12 = *(int **)(a3 + 8);
    }
    else
    {
      if ( !v8(a1, v9, *(_DWORD *)(a2 + 16), a4) )
        goto LABEL_21;
      v12 = (int *)v20;
      if ( !v18(a1, v20, *(_DWORD *)(a3 + 8), v9, a4) )
        goto LABEL_21;
    }
    if ( sub_B8354(v17, v12) )
    {
      v13 = 1;
      goto LABEL_22;
    }
    if ( *(_DWORD *)(a3 + 20) )
    {
      v17 = *(int **)(a2 + 12);
    }
    else if ( !v18(a1, v11, v11, *(_DWORD *)(a3 + 16), a4) || !v18(a1, v19, *(_DWORD *)(a2 + 12), v11, a4) )
    {
      goto LABEL_21;
    }
    if ( *(_DWORD *)(a2 + 20) )
    {
      v12 = *(int **)(a3 + 12);
LABEL_15:
      v13 = sub_B8354(v17, v12) != 0;
LABEL_22:
      sub_130C74(a4);
      sub_130B5C(v7);
      return v13;
    }
    if ( v18(a1, v9, v9, *(_DWORD *)(a2 + 16), a4) && v18(a1, v20, *(_DWORD *)(a3 + 12), v9, a4) )
      goto LABEL_15;
LABEL_21:
    v13 = -1;
    goto LABEL_22;
  }
  if ( sub_B8354(*(int **)(a2 + 8), *(int **)(a3 + 8)) )
    return 1;
  return sub_B8354(*(int **)(a2 + 12), *(int **)(a3 + 12)) != 0;
}
