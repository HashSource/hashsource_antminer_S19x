int __fastcall sub_6688C(int a1, _DWORD *a2)
{
  int v4; // r3

  if ( !dword_1B0E74 && sub_665B0() )
    return -1;
  if ( dword_1B0E5C )
    v4 = dword_9EE84[a1];
  else
    v4 = dword_9EE84[a1 + 186];
  *a2 = *(_DWORD *)(dword_1B0E68 + 4 * v4);
  return 0;
}
