int __fastcall sub_14052C(int *a1, signed int a2, const void *a3, unsigned int a4, _DWORD *a5, int *a6, _DWORD *a7)
{
  _DWORD *v12; // r11
  int v13; // r0

  if ( *(_DWORD *)(a1[11] + 40) )
    return (*(int (**)(void))(a1[11] + 40))();
  if ( a2 < 2048 )
    v12 = sub_D93D8();
  else
    v12 = sub_D93F0();
  v13 = sub_D8C78((int)v12);
  return sub_13FF6C(a1, a2, 8 * v13, v12, a3, a4, 0, a5, a6, a7);
}
