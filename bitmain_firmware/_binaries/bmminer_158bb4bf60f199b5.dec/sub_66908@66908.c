int __fastcall sub_66908(int a1, int a2)
{
  int v4; // r3

  if ( !dword_1B0E74 && sub_665B0() )
    return -1;
  if ( dword_1B0E5C )
    v4 = dword_9EE84[a1];
  else
    v4 = dword_9EE84[a1 + 186];
  *(_DWORD *)(dword_1B0E68 + 4 * v4) = a2;
  return 0;
}
