int __fastcall sub_2A89AC(int a1)
{
  int v1; // r3

  v1 = *(_DWORD *)(a1 + 12);
  if ( v1 )
    return (*(int (**)(void))(v1 + 20))();
  else
    return 0;
}
