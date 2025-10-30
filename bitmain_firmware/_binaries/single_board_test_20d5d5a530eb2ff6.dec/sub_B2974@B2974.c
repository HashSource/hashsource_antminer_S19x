int __fastcall sub_B2974(_DWORD *a1, int a2)
{
  int v3; // r5
  int v4; // r0
  int v5; // r0

  if ( (*(_DWORD *)(a2 + 12) & 8) != 0 )
    v3 = -1;
  else
    v3 = 5;
  v4 = sub_D8C70(a2);
  v5 = sub_EAA20(v4);
  return sub_B28F8(a1, v5, v3, 0);
}
