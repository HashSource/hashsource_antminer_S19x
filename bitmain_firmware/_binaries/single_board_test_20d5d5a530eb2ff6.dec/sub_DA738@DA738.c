bool __fastcall sub_DA738(int a1, int a2, int a3)
{
  int v3; // r4

  if ( a3 < 0 )
    return 0;
  v3 = *(_DWORD *)(a1 + 12);
  if ( v3 && (v3 = *(_DWORD *)(v3 + 92)) != 0 )
    return ((int (*)(void))v3)() > 0;
  else
    return v3;
}
