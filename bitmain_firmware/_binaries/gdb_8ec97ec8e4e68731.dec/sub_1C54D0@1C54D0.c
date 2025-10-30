int __fastcall sub_1C54D0(int a1)
{
  _DWORD *v2; // r0
  int v3; // r3
  int v4; // r2

  sub_170040(a1);
  sub_1780B4();
  v3 = v2[10];
  v4 = *(_DWORD *)(a1 + 20);
  if ( v4 != *(_DWORD *)(v3 + 20) )
  {
    v3 = v2[11];
    if ( v4 != *(_DWORD *)(v3 + 20) )
    {
      v3 = v2[12];
      if ( v4 != *(_DWORD *)(v3 + 20) )
        return a1;
    }
  }
  return v3;
}
