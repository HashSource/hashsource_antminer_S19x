int __fastcall sub_324064(int a1, int a2, unsigned int a3)
{
  int *v4; // r5
  int result; // r0
  int (*v6)(void); // r3
  int v7; // r3

  v4 = sub_323E68(a1, a2, a3, 0);
  result = *v4;
  if ( *v4 )
  {
    v6 = *(int (**)(void))(a1 + 8);
    if ( v6 )
      result = v6();
    v7 = *(_DWORD *)(a1 + 24);
    *v4 = 1;
    *(_DWORD *)(a1 + 24) = v7 + 1;
  }
  return result;
}
