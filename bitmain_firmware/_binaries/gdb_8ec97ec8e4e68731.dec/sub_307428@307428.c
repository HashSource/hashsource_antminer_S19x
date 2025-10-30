int __fastcall sub_307428(int a1)
{
  _DWORD *v1; // r1
  _DWORD *v2; // r3
  int v3; // r2
  bool v4; // zf
  _DWORD *v5; // r1
  _DWORD *v6; // r2
  int result; // r0

  if ( !a1 || !*(_DWORD *)(a1 + 32) || !*(_DWORD *)(a1 + 36) )
    return -2;
  if ( sub_307334(a1) )
    return -2;
  v6 = (_DWORD *)v5[7];
  v6[11] = 0;
  v6[12] = 0;
  v6[13] = 0;
  if ( !v5 || !v5[8] || !v5[9] )
    return -2;
  result = sub_307334((int)v5);
  if ( result )
    return -2;
  v2 = (_DWORD *)v1[7];
  v3 = v2[3];
  v2[8] = 0;
  v1[5] = 0;
  v4 = v3 == 0;
  v1[2] = 0;
  if ( v3 )
    v3 &= 1u;
  v1[6] = 0;
  if ( !v4 )
    v1[12] = v3;
  v2[28] = v2 + 333;
  v2[21] = v2 + 333;
  v2[20] = v2 + 333;
  v2[1] = 16180;
  v2[2] = 0;
  v2[4] = 0;
  v2[9] = 0;
  v2[15] = 0;
  v2[16] = 0;
  v2[6] = 0x8000;
  v2[1777] = 1;
  v2[1778] = -1;
  return result;
}
