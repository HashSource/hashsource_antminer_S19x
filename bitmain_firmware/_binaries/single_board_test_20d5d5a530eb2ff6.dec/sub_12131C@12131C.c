int __fastcall sub_12131C(int a1, int a2, _DWORD *a3)
{
  int v3; // r4
  int v5; // r0
  int result; // r0
  bool v7; // cc
  unsigned int v8; // r1
  int v9; // [sp+4h] [bp-4h] BYREF

  v3 = 0;
  v9 = 0;
  while ( 1 )
  {
    v7 = v3 < sub_10C010((int)a3);
    v8 = v3++;
    if ( !v7 )
      break;
    v5 = sub_10C01C(a3, v8);
    result = sub_1212D8(&v9, *(_DWORD *)(v5 + 4), *(char **)(v5 + 8), -1);
    if ( !result )
      return result;
  }
  return v9;
}
