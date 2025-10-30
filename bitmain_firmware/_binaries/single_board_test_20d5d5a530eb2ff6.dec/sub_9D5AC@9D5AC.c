int __fastcall sub_9D5AC(_DWORD *a1)
{
  int v1; // r3
  int result; // r0
  int v4; // r3
  int v5; // r2
  bool v6; // cc
  int v7; // r5
  int v8; // [sp+0h] [bp-Ch] BYREF
  int v9; // [sp+4h] [bp-8h] BYREF

  v1 = a1[31];
  if ( *(_DWORD *)(v1 + 384) && *(_DWORD *)(v1 + 516) )
    return 0;
  result = sub_9CFC8((int)a1, &v8, &v9, 0);
  if ( !result )
  {
    v4 = v9;
    v5 = *(_DWORD *)(a1[1] + 100);
    v6 = v9 <= 771;
    *a1 = v9;
    v7 = !v6;
    if ( (v7 & ((*(_DWORD *)(v5 + 48) ^ 8u) >> 3)) != 0 )
      v4 = 771;
    a1[321] = v4;
  }
  return result;
}
