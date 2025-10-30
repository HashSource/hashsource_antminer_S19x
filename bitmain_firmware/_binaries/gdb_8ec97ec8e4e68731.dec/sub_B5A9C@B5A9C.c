int __fastcall sub_B5A9C(int a1, int a2, int a3, int *a4, _DWORD *a5)
{
  int v5; // r4
  int result; // r0
  int v8; // [sp+4h] [bp-4h] BYREF

  v5 = a1;
  if ( a1 )
  {
    v8 = sub_26DAF4(*(_DWORD *)(*(_DWORD *)(a2 + 24) + 12), *(_DWORD *)(a2 + 24), a3, a3 >> 31);
    v5 = sub_A92F8(v5, 1, (int)&v8);
    result = sub_26BC70(v5);
  }
  else
  {
    result = *(_DWORD *)(a2 + 20);
  }
  if ( a4 )
    *a4 = v5;
  if ( a5 )
    *a5 = result;
  return result;
}
