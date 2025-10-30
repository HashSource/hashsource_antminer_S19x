int __fastcall sub_D9B28(int a1)
{
  int v1; // r3
  int (*v2)(void); // r3

  if ( a1 && (v1 = *(_DWORD *)(a1 + 12)) != 0 && (v2 = *(int (**)(void))(v1 + 68)) != 0 )
    return v2();
  else
    return 0;
}
