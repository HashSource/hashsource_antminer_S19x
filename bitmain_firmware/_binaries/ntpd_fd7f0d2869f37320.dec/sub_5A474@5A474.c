int __fastcall sub_5A474(int a1, int a2)
{
  _DWORD *v2; // r4
  int v3; // r5
  int v4; // r3
  int v5; // r2
  int v7; // [sp+4h] [bp-4h]

  v2 = *(_DWORD **)(a2 + 84);
  v3 = *v2;
  v4 = *(_DWORD *)(*v2 + 32);
  v5 = _stack_chk_guard;
  if ( v4 )
    *(_DWORD *)(v3 + 32) = v4 - 1;
  v7 = v5;
  if ( !v4 )
    sub_39C88(a2, 1);
  ++v2[194];
  *(_BYTE *)(v3 + 30) = 1;
  return v7;
}
