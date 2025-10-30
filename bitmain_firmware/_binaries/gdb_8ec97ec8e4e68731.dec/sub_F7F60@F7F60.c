void __fastcall sub_F7F60(int a1, _DWORD *a2)
{
  int v2; // r3
  bool v3; // zf
  int v4; // r3

  v2 = *(_DWORD *)(a1 + 4);
  if ( v2 == *(_DWORD *)(a1 + 8) )
  {
    sub_F7E00(a1, *(void ***)(a1 + 4), a2);
  }
  else
  {
    v3 = v2 == 0;
    v4 = v2 + 4;
    if ( !v3 )
      *(_DWORD *)(v4 - 4) = *a2;
    *(_DWORD *)(a1 + 4) = v4;
  }
}
