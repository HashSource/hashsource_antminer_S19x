int __fastcall sub_A3C08(_DWORD *a1)
{
  _DWORD *v1; // r5
  int v2; // r1
  _DWORD *v3; // r4
  int v4; // r1
  _BOOL4 v5; // r0
  int result; // r0
  int v7; // r1
  int v8; // [sp+0h] [bp-8h] BYREF
  int v9; // [sp+4h] [bp-4h]

  v1 = a1;
  v2 = a1[1];
  v3 = a1 - 2;
  v8 = *a1;
  v9 = v2;
  while ( 1 )
  {
    v5 = sub_A3BBC((int)&v8, (int)v3);
    v3 -= 2;
    if ( !v5 )
      break;
    v1 = v3 + 2;
    v4 = v3[3];
    v3[4] = v3[2];
    v3[5] = v4;
  }
  result = v8;
  v7 = v9;
  *v1 = v8;
  v1[1] = v7;
  return result;
}
