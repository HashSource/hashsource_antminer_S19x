int __fastcall sub_61778(int a1)
{
  int v2; // [sp+8h] [bp-Ch]
  unsigned int i; // [sp+Ch] [bp-8h]

  v2 = 0;
  for ( i = 0; i <= 3; ++i )
    v2 = (v2 << 8) | *(unsigned __int8 *)(a1 + i);
  return v2;
}
