int sub_26C354()
{
  int v0; // r3
  int v1; // r4
  int result; // r0

  v0 = dword_48AA00;
  if ( dword_48AA00 )
  {
    do
    {
      v1 = *(_DWORD *)(v0 + 88);
      *(_BYTE *)(v0 + 4) |= 0x10u;
      result = ((int (__fastcall *)(int))loc_26C200)(v0);
      v0 = v1;
    }
    while ( v1 );
  }
  dword_48AA00 = 0;
  return result;
}
