bool __fastcall sub_EEF9C(int a1, int a2)
{
  int v2; // r5
  char v6[84]; // [sp+18h] [bp-54h] BYREF

  v2 = *(_DWORD *)(a2 + 12);
  if ( !v2 )
    return 0;
  if ( !*(_DWORD *)(v2 + 64) )
    return 0;
  sub_B5560(v6, 0x50u, "%s PARAMETERS", *(const char **)(v2 + 12));
  return sub_EDD48(*(int (__fastcall **)(int, char **))(*(_DWORD *)(a2 + 12) + 64), v6, a1, a2, 0, 0, 0, 0, 0);
}
