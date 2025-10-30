int __fastcall sub_5B9F4(unsigned int a1)
{
  int v2; // [sp+4h] [bp-8h]

  if ( a1 < 0x20000 )
    v2 = a1;
  else
    v2 = 0x1FFFF;
  return sub_5B9BC(v2 | 0x80000000);
}
