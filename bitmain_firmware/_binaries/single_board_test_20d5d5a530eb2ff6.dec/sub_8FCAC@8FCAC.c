int __fastcall sub_8FCAC(_DWORD *a1)
{
  int v1; // r4
  bool v2; // zf
  int v4; // r5
  int v5; // r1
  int v6; // r2
  int v7; // r6
  _DWORD *v8; // r0
  unsigned int v9; // r4
  int v10; // r1
  int v12; // [sp+0h] [bp-Ch] BYREF
  unsigned int v13; // [sp+4h] [bp-8h] BYREF

  v1 = 0;
  v2 = *a1 == 768;
  v12 = 0;
  if ( v2 )
    return 0;
  v4 = sub_8993C((int)a1);
  v7 = sub_10C010(v4, v5, v6);
  if ( v7 <= 0 )
  {
LABEL_13:
    sub_10BDB4(v4);
    return 0;
  }
  while ( 1 )
  {
    v8 = (_DWORD *)sub_10C01C(v4, v1++);
    if ( (v8[4] & 0x84) != 0 || (v8[5] & 8) != 0 || (int)v8[8] >= 772 )
      break;
    if ( v1 == v7 )
      goto LABEL_13;
  }
  sub_10BDB4(v4);
  v9 = 0;
  sub_A278C(a1, &v12, &v13);
  if ( !v13 )
    return 0;
  while ( 1 )
  {
    v10 = *(unsigned __int16 *)(v12 + 2 * v9++);
    if ( sub_A2808(a1, v10, &loc_20004) )
      break;
    if ( v13 <= v9 )
      return 0;
  }
  return 1;
}
