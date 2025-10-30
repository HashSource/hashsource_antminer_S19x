int __fastcall sub_70090(int a1)
{
  int v1; // r1
  _DWORD *v3; // r0
  int v4; // r3
  int v6; // r0

  v1 = *(_DWORD *)(a1 + 20);
  v3 = **(_DWORD ***)(a1 + 12);
  if ( v1 )
  {
    v4 = sub_7085C(v3);
    *(_DWORD *)(a1 + 20) = v4;
  }
  else
  {
    v6 = sub_70830(v3, *v3);
    *(_DWORD *)(a1 + 20) = v6;
    v4 = v6;
  }
  if ( v4 )
    return *(_DWORD *)(v4 + 20);
  else
    return 0;
}
