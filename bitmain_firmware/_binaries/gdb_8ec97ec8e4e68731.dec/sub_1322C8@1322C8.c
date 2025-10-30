int __fastcall sub_1322C8(int a1)
{
  int v1; // r3
  int v3; // [sp-38h] [bp-38h] BYREF

  v1 = *(_DWORD *)(a1 + 16);
  if ( v1 )
    return *(unsigned __int8 *)(v1 + 14);
  else
    return *((unsigned __int8 *)sub_122CC0(&v3, a1) + 6);
}
