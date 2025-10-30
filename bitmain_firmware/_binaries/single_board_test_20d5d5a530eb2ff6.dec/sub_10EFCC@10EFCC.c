int __fastcall sub_10EFCC(int a1)
{
  int v1; // r4
  int (*v2)(void); // r4

  v1 = *(_DWORD *)(a1 + 8);
  if ( v1 && (v2 = *(int (**)(void))(v1 + 24)) != 0 && !*(_DWORD *)(a1 + 4) )
    return v2();
  else
    return 0;
}
