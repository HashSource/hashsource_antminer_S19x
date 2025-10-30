int __fastcall sub_140EB8(int a1, void *a2, size_t n, int a4, int a5)
{
  int v8; // r4
  int v9; // r0
  int v10; // r4

  v8 = *(_DWORD *)(a1 + 8);
  v9 = *(_DWORD *)(*(_DWORD *)(a1 + 20) + 20);
  v10 = *(_DWORD *)(v8 + 24);
  if ( !v9 || sub_D8C78(v9) == a5 )
    return sub_C090C(0, a4, a5, a2, n, v10);
  else
    return 0;
}
