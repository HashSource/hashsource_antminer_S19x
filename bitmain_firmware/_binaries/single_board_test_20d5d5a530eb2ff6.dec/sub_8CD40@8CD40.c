int __fastcall sub_8CD40(int a1)
{
  int v1; // r3
  unsigned __int8 v2; // r3

  v1 = *(_DWORD *)(a1 + 1140);
  if ( v1 && (v2 = *(_BYTE *)(v1 + 492) - 1, v2 <= 3u) )
    return 512 << v2;
  else
    return *(_DWORD *)(a1 + 1292);
}
