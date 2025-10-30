int __fastcall sub_1E1C80(int a1)
{
  int v2; // r0
  int v4; // r0

  v2 = dword_488C90;
  if ( !dword_488C90 )
  {
    v4 = sub_16F654(0);
    v2 = ((int (__fastcall *)(int))loc_16666C)(v4);
  }
  if ( (unsigned int)(v2 - 1) > 0x3E )
    return a1;
  else
    return a1 & ((1 << v2) - 1);
}
