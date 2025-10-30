int __fastcall sub_2AE014(int a1, _DWORD *a2, int a3)
{
  int result; // r0
  int v4; // r2
  int v5; // r12
  int v6; // r3

  result = *(_DWORD *)(a3 + 4);
  v4 = a2[15];
  v5 = a2[2];
  v6 = (a2[5] >> 13) & 1;
  if ( !v4 )
    v6 = 1;
  *(_DWORD *)(result + 8 * v5) = a2[14];
  *(_DWORD *)(result + 8 * v5 + 4) = v4;
  if ( v6 )
  {
    a2[15] = a2;
    a2[14] = 0;
  }
  return result;
}
