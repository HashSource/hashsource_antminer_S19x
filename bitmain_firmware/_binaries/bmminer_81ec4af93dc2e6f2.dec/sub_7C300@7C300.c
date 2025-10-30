int __fastcall sub_7C300(int result, int a2)
{
  unsigned int i; // [sp+Ch] [bp-8h]

  for ( i = 0; i <= 0x1F; ++i )
    *(_BYTE *)(result + i + 1032) |= *(_BYTE *)(a2 + i + 4104);
  return result;
}
