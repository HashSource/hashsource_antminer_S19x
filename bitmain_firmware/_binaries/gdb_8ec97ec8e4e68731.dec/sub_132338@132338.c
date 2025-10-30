int __fastcall sub_132338(int a1)
{
  int v1; // r3
  _DWORD *v3; // r0
  int v4; // [sp-38h] [bp-38h] BYREF

  v1 = *(_DWORD *)(a1 + 16);
  if ( v1 )
  {
    if ( *(_WORD *)(v1 + 12) == 2 )
      return *(unsigned __int8 *)(v1 + 14);
    else
      return *(_DWORD *)(v1 + 20);
  }
  else
  {
    v3 = sub_122CC0(&v4, a1);
    if ( *((_WORD *)v3 + 2) == 2 )
      return *((unsigned __int8 *)v3 + 6);
    else
      return v3[3];
  }
}
