int __fastcall sub_322B58(unsigned int a1)
{
  if ( a1 > 0x90 )
    return 0;
  else
    return *(_DWORD *)&aTpc[4 * a1 + 1004];
}
