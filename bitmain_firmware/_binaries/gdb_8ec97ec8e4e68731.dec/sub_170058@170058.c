int __fastcall sub_170058(int a1)
{
  int v1; // r3
  int v3; // r0

  v1 = *(_DWORD *)(a1 + 24);
  if ( (*(_BYTE *)(v1 + 2) & 0x10) != 0 )
    sub_1B7250(*(_DWORD *)(v1 + 16));
  v3 = ((int (*)(void))loc_16EA14)();
  return sub_347418(*(_DWORD *)(a1 + 20), v3);
}
