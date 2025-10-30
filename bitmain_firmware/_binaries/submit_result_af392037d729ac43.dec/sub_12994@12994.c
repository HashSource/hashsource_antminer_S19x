int __fastcall sub_12994(int a1, int a2, int a3, int a4)
{
  int result; // r0

  *(_DWORD *)a1 = a2;
  *(_DWORD *)(a1 + 4) = a4;
  *(_DWORD *)(a1 + 24) = 1;
  *(_BYTE *)(a1 + 8) = 0;
  *(_DWORD *)(a1 + 16) = 0;
  *(_DWORD *)(a1 + 20) = 0;
  *(_DWORD *)(a1 + 28) = 0;
  *(_DWORD *)(a1 + 36) = 0;
  result = sub_138B8(a1 + 40);
  if ( result )
    return -1;
  *(_DWORD *)(a1 + 52) = a3;
  *(_DWORD *)(a1 + 60) = -1;
  return result;
}
