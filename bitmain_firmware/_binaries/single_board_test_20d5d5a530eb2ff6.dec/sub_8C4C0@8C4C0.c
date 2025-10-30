int __fastcall sub_8C4C0(int a1, _DWORD *a2)
{
  int v2; // r3

  v2 = *(_DWORD *)(a1 + 1480);
  if ( !v2 )
    return 0;
  if ( a2 )
  {
    *a2 = v2 + 44;
    v2 = *(_DWORD *)(a1 + 1480);
  }
  return *(_DWORD *)(v2 + 40);
}
