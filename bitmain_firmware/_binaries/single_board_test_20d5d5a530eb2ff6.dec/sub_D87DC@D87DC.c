int __fastcall sub_D87DC(_DWORD *a1, int a2)
{
  if ( (*(_DWORD *)(*a1 + 16) & 0x200) != 0 )
    return sub_D83D4((int)a1);
  else
    return sub_F49BC(a2, a1[22]) > 0;
}
