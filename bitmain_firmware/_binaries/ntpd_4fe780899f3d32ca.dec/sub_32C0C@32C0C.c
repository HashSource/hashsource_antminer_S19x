int *__fastcall sub_32C0C(int a1)
{
  int *v1; // r3
  unsigned int v2; // r1

  v1 = &peer_list;
  while ( 1 )
  {
    v1 = (int *)*v1;
    if ( !v1 )
      break;
    if ( (v1[18] & 0x18) != 0 )
    {
      v2 = bswap32(*(_DWORD *)(a1 + 116));
      if ( v1[146] == bswap32(*(_DWORD *)(a1 + 112)) && v1[147] == v2 )
        break;
    }
  }
  return v1;
}
