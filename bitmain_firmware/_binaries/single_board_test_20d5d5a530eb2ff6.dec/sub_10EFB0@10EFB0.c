int __fastcall sub_10EFB0(int a1)
{
  int v1; // r4
  int (*v2)(void); // r4

  v1 = *(_DWORD *)(a1 + 8);
  if ( !v1 )
    return -1;
  v2 = *(int (**)(void))(v1 + 20);
  if ( v2 )
    return v2();
  else
    return 1;
}
