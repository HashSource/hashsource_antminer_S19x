int __fastcall sub_2019CC(int a1)
{
  int v1; // r0
  int v2; // r6
  int v3; // r3
  _DWORD *i; // r4

  v1 = sub_16F654(a1);
  v2 = *(_DWORD *)((int (__fastcall *)(int, int))loc_16EC88)(v1, dword_4893A0);
  sub_CFE10();
  v3 = dword_487D2C;
  for ( i = *(_DWORD **)(dword_487D2C + 48); i; i = *(_DWORD **)(dword_487D2C + 48) )
  {
    *(_DWORD *)(v3 + 48) = *i;
    sub_1B95D0((int)i);
    ((void (__fastcall *)(_DWORD *))loc_94B40)(i);
    sub_200A30(i);
    v3 = dword_487D2C;
  }
  return (*(int (**)(void))(v2 + 12))();
}
