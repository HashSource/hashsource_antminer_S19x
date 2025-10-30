int __fastcall sub_4B2C4(int a1, int a2)
{
  int v3; // r0
  void *v5; // r7
  char v7[60]; // [sp+8h] [bp-44h] BYREF

  v3 = *(_DWORD *)(a2 + 84);
  v5 = *(void **)v3;
  if ( *(_DWORD *)(v3 + 28) != -1 )
    sub_190FC(v3 + 8);
  if ( v5 )
    free(v5);
  sub_6D00C(v7, 60, "JJY stopped. unit=%d mode=%d", a1, *(_DWORD *)(a2 + 76));
  return sub_42D0C(a2 + 16, v7);
}
