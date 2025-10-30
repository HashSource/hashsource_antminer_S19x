int __fastcall sub_B83F0(_DWORD *a1, int a2)
{
  if ( a2 < 0 || a2 >> 6 >= a1[1] )
    return 0;
  else
    return (*(_DWORD *)(*a1 + 4 * (a2 >> 6)) >> (a2 & 0x3F)) & 1;
}
