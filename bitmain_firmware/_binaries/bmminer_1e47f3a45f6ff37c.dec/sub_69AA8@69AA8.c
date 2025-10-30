int __fastcall sub_69AA8(int a1, int a2, unsigned int a3)
{
  int v4; // [sp+10h] [bp-Ch]
  unsigned int i; // [sp+14h] [bp-8h]

  v4 = dword_5364F4 + (a1 << 6);
  for ( i = 0; i < a3; ++i )
    *(_BYTE *)(a2 + i) = *(_BYTE *)(v4 + i + 32);
  return 0;
}
