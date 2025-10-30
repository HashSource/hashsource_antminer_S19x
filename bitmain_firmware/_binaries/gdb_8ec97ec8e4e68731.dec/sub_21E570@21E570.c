int __fastcall sub_21E570(int a1, int a2, _DWORD *a3)
{
  int result; // r0
  int v5; // r3
  int v6; // [sp+4h] [bp-Ch] BYREF

  *a3 = 0;
  if ( !a1 )
    return 0;
  result = sub_21E260(a1, a2, &v6, 0);
  if ( result )
  {
    v5 = *(_DWORD *)(result + 8);
    result = 1;
    *a3 = *(_DWORD *)(v5 + 8 * v6 + 8);
  }
  return result;
}
