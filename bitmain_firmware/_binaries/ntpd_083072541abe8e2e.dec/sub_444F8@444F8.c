int __fastcall sub_444F8(int a1, int a2)
{
  int v2; // r3
  int v3; // r1
  int v4; // r3
  int v5; // r5
  int v7; // r2
  int v8; // r4

  v2 = 5 * a2;
  v3 = a2 + 1;
  v4 = a1 + 4 * v2;
  v5 = *(_DWORD *)(a1 + 4);
  v7 = *(_DWORD *)(v4 + 8);
  v8 = *(_DWORD *)(v4 + 20);
  if ( v7 == 1 )
  {
    v8 *= 2;
  }
  else if ( v7 != 2 )
  {
    goto LABEL_3;
  }
  for ( ; v8; --v8 )
  {
    if ( v3 >= 0 && v5 > v3 )
      v3 = sub_444F8(a1);
  }
LABEL_3:
  if ( v3 >= 0 && v5 >= v3 )
    return v3;
  return v5;
}
