int sub_32214()
{
  int i; // r4
  int result; // r0

  for ( i = peer_list; i; i = *(_DWORD *)i )
  {
    while ( (*(_BYTE *)(i + 72) & 0x1E) != 0 )
    {
      i = *(_DWORD *)i;
      if ( !i )
        return result;
    }
    result = sub_367D8(i, "STEP");
  }
  return result;
}
