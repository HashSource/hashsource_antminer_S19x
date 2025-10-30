int __fastcall sub_55A64(int a1, int a2)
{
  int v3; // r4
  int *v4; // r5
  int v5; // r1
  int v6; // r3
  bool v7; // zf
  int v9; // r3
  int v10; // [sp+4h] [bp-8h]

  v3 = *(_DWORD *)(a2 + 84);
  v4 = *(int **)v3;
  v5 = **(_DWORD **)v3;
  v6 = _stack_chk_guard;
  v7 = v5 == 0;
  if ( v5 )
    *v4 = --v5;
  v10 = v6;
  if ( v7 )
  {
    sub_55298(a2, v5);
    sub_39C88(a2, 1);
  }
  v9 = *(_DWORD *)(v3 + 776);
  v4[2] = 1;
  *(_DWORD *)(v3 + 776) = v9 + 1;
  return v10;
}
