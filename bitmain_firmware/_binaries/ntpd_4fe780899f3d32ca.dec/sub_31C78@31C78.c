int __fastcall sub_31C78(int a1)
{
  int i; // r3

  ++assocpeer_calls;
  for ( i = assoc_hash[a1 & 0x7F]; i; i = *(_DWORD *)(i + 8) )
  {
    if ( *(unsigned __int16 *)(i + 60) == a1 )
      break;
  }
  return i;
}
