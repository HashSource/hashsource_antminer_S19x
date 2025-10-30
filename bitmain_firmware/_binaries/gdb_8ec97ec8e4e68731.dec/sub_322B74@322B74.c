int __fastcall sub_322B74(unsigned int a1)
{
  if ( a1 > 0xC0 )
    return 0;
  else
    return *(_DWORD *)&aTpc[4 * a1 + 1584];
}
