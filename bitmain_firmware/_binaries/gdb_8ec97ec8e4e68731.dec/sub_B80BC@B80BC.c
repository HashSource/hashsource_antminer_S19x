int __fastcall sub_B80BC(int a1, int a2, int a3)
{
  if ( ((int (*)(void))loc_166048)() == a3 )
    JUMPOUT(0x1660C0);
  if ( a3 == ((int (__fastcall *)(int))loc_166138)(a1) )
    JUMPOUT(0x1661B0);
  if ( a3 == ((int (__fastcall *)(int))loc_166228)(a1) )
    JUMPOUT(0x1662A0);
  if ( a3 == ((int (__fastcall *)(int))loc_166318)(a1)
    || ((int (__fastcall *)(int))loc_166390)(a1)
    && *(_DWORD *)(*(_DWORD *)((int (__fastcall *)(int))loc_166390)(a1) + 4) == a3 )
  {
    JUMPOUT(0x166390);
  }
  return 0;
}
