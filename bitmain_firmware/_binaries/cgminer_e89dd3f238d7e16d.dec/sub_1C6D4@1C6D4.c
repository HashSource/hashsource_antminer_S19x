int __fastcall sub_1C6D4(int a1, const char *a2, const char *a3, int a4)
{
  int v6; // [sp+14h] [bp-8h]

  v6 = sub_1C5C8(a1, a2, a3, a4);
  if ( v6 )
    memset(*(void **)(v6 + 12), 0, *(_DWORD *)(a1 + 20));
  return v6;
}
