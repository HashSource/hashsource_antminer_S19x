int __fastcall sub_2E9020(int a1, int a2)
{
  int v2; // r3

  v2 = *(_DWORD *)(a2 + 28);
  if ( *(_DWORD *)(v2 + 40) == 1 )
    return *(_DWORD *)(v2 + 200);
  else
    return 0;
}
