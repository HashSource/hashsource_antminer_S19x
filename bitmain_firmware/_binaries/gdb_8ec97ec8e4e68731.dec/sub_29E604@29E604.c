int __fastcall sub_29E604(int a1, int a2, int *a3)
{
  int v3; // r1
  int v4; // r3
  int result; // r0

  v3 = *(_DWORD *)(a1 + 4 * a2);
  v4 = *(_BYTE *)(v3 + 36) & 7;
  if ( v4 != 2 )
    return 0;
  result = *(_BYTE *)(v3 + 38) & 3;
  if ( result == 1 )
    *a3 = 1;
  else
    v4 = 0;
  if ( result != 1 )
  {
    result = 1;
    *a3 = v4;
  }
  return result;
}
