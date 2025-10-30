int __fastcall sub_224BC(_DWORD *a1, unsigned int a2)
{
  _DWORD *v4; // r0

  if ( !a1 || *a1 != 1 )
    return 0;
  if ( sub_48468() >= a2 )
  {
    v4 = (_DWORD *)sub_48484(a1, a2);
    if ( v4 )
    {
      if ( *v4 == 2 )
        return sub_48630();
    }
  }
  return 0;
}
