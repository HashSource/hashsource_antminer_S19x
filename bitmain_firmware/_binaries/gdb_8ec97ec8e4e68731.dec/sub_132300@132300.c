int __fastcall sub_132300(int a1)
{
  int v1; // r3
  int v3; // [sp-38h] [bp-38h] BYREF

  v1 = *(_DWORD *)(a1 + 16);
  if ( v1 )
    return *(_DWORD *)(v1 + 20);
  else
    return *((_DWORD *)sub_122CC0(&v3, a1) + 3);
}
