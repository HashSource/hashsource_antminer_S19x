int __fastcall sub_23A108(int a1, int a2)
{
  int result; // r0
  _DWORD *v5; // r0
  int v6; // r5
  int v7; // r0
  int v8; // r4

  result = sub_236260(a2, *(char **)(a1 + 4));
  if ( !result )
  {
    v5 = (_DWORD *)(*(int (__fastcall **)(_DWORD, int))(**(_DWORD **)(a1 + 32) + 12))(*(_DWORD *)(a1 + 32), a2);
    v6 = sub_1721F4(v5, *(_DWORD *)(a1 + 36));
    v7 = *(_DWORD *)(a1 + 4);
    v8 = *(_DWORD *)(v6 + 24);
    *(_DWORD *)(v8 + 8) = sub_327254(v7);
    return v6;
  }
  return result;
}
