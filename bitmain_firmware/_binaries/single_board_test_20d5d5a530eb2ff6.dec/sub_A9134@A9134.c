int __fastcall sub_A9134(int a1)
{
  int v2; // r3
  int result; // r0

  BIO_vfree_0(*(_DWORD *)(*(_DWORD *)(a1 + 124) + 212));
  v2 = *(_DWORD *)(a1 + 124);
  *(_DWORD *)(v2 + 212) = 0;
  result = sub_D1504(*(_DWORD *)(v2 + 216));
  *(_DWORD *)(*(_DWORD *)(a1 + 124) + 216) = 0;
  return result;
}
