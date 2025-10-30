int __fastcall sub_6DA38(int a1)
{
  if ( (a1 & 0x80) == 0 )
    return 1;
  if ( (a1 ^ 0x80u) <= 0x41 )
    return 0;
  if ( (unsigned __int8)(a1 + 62) <= 0x1Du )
    return 2;
  if ( (unsigned __int8)(a1 + 32) <= 0xFu )
    return 3;
  if ( (unsigned __int8)(a1 + 16) <= 4u )
    return 4;
  return 0;
}
