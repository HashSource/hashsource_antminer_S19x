int __fastcall sub_19A34(int *a1, int *a2, int *a3)
{
  bool v3; // zf
  char v4; // r12
  int v5; // r12
  unsigned int v6; // r6
  unsigned int v7; // r12
  int v8; // r0
  int v9; // r3
  unsigned int v10; // r12
  int v11; // r1
  int v12; // r3
  int result; // r0

  v3 = a2 == 0;
  if ( a2 )
    v3 = a3 == 0;
  v4 = !v3;
  if ( a1 )
    v5 = v4 & 1;
  else
    v5 = 0;
  if ( !v5 )
    sub_10C38();
  v6 = a1[1];
  if ( v6 > 0x3B9AC9FF || (v7 = a2[1], v7 > 0x3B9AC9FF) )
    sub_10C38();
  v8 = *a1;
  v9 = *a2;
  if ( (v8 < 0 || v9 < 0) && (int)(((unsigned int)v9 + (unsigned __int64)(unsigned int)v8) >> 32) >= 1 )
    return 41;
  v10 = v7 + v6;
  LOWORD(v11) = -13825;
  v12 = v9 + v8;
  a3[1] = v10;
  if ( v10 > 0x3B9AC9FF )
    LOWORD(v11) = 13824;
  result = 0;
  *a3 = v12;
  if ( v10 > 0x3B9AC9FF )
  {
    HIWORD(v11) = -15259;
    *a3 = v12 + 1;
    a3[1] = v10 + v11;
  }
  return result;
}
