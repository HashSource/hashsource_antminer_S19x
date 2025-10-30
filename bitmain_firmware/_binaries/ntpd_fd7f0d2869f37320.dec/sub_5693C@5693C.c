int __fastcall sub_5693C(int a1, int a2)
{
  _DWORD *v3; // r4
  int v4; // r5
  int v5; // r1
  int v7; // r3
  int v8; // [sp+4h] [bp-4h]

  v3 = *(_DWORD **)(a2 + 84);
  v4 = *v3;
  v5 = *(_DWORD *)(*v3 + 52);
  if ( v5 )
    sub_39C88(a2, v5);
  v7 = v3[194];
  *(_DWORD *)(v4 + 52) = 0;
  v3[194] = v7 + 1;
  return v8;
}
