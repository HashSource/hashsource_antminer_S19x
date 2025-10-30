int __fastcall sub_E9F98(char a1)
{
  unsigned int v1; // r0

  v1 = (unsigned __int8)(a1 - 48);
  if ( v1 > 0x36 )
    return -1;
  else
    return byte_1B65E4[v1];
}
