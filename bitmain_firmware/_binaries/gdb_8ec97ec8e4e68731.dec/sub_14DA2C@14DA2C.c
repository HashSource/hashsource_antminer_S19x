int __fastcall sub_14DA2C(int *a1, _DWORD *a2, int a3, int a4)
{
  int *v7; // r12
  int v8; // r0
  int v9; // r4
  int v11; // r0

  v7 = &a1[4 * *a2];
  if ( (v7[4] & 0xFFFFFFFD) != 0x28 )
  {
    v11 = sub_14C9EC(a4, a1, a2, a3);
    if ( a3 != 1 )
      return sub_2647C8(a4, v11);
    return sub_14DA0C((int)a1);
  }
  *a2 += 4;
  if ( v7[4] != 42 )
  {
    v8 = sub_14D5E0(a3, v7[8], v7[12]);
    if ( a3 != 1 )
      goto LABEL_5;
    return sub_14DA0C((int)a1);
  }
  if ( a3 == 2 )
    return sub_260DBC(a4);
  v8 = sub_14D68C(a3, v7[8], v7[12]);
  if ( a3 == 1 )
    return sub_14DA0C((int)a1);
LABEL_5:
  v9 = sub_2647C8(a4, v8);
  if ( *(_DWORD *)nullsub_31(v9) == 1 )
  {
    if ( sub_26BF4C(v9) )
      ((void (__fastcall *)(int))loc_26E00C)(v9);
    *(_DWORD *)nullsub_31(v9) = 0;
  }
  return v9;
}
