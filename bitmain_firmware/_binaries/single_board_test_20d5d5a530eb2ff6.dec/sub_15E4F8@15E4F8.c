int __fastcall sub_15E4F8(_DWORD *a1)
{
  unsigned int v1; // r5
  int v3; // r6
  int v5; // r3
  int v6; // r3

  v1 = *(_DWORD *)(*a1 + 36);
  if ( v1 > 0xA8 )
    return 0;
  v3 = a1[3];
  memset((void *)v3, 0, 0xC8u);
  v5 = *a1;
  *(_DWORD *)(v3 + 200) = v1;
  *(_DWORD *)(v3 + 208) = 0;
  v6 = *(_DWORD *)(v5 + 8);
  *(_BYTE *)(v3 + 380) = 31;
  *(_DWORD *)(v3 + 204) = v6;
  return 1;
}
