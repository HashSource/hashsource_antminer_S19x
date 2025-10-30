int __fastcall sub_10EF9C(int a1)
{
  int v1; // r3
  int (*v2)(void); // r3

  v1 = *(_DWORD *)(a1 + 8);
  if ( !v1 )
    return 0;
  v2 = *(int (**)(void))(v1 + 16);
  if ( v2 )
    return v2();
  else
    return 1;
}
