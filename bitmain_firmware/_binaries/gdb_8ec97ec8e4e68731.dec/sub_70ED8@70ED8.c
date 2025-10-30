void sub_70ED8()
{
  int v0; // r5

  if ( dword_474948 )
  {
    if ( dword_474958 - 1 <= (unsigned int)dword_47494C )
    {
      v0 = dword_474958 + 8;
      dword_474948 = sub_93050(dword_474948, 4 * (dword_474958 + 8));
      memset((void *)(dword_474948 + 4 * dword_474958), 0, 0x20u);
      dword_474958 = v0;
    }
  }
  else
  {
    dword_474948 = sub_93028(4);
    *(_DWORD *)dword_474948 = 0;
    dword_47494C = 0;
    dword_474958 = 1;
  }
}
