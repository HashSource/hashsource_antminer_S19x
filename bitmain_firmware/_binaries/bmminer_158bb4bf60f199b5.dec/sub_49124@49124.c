int __fastcall sub_49124(_DWORD *a1, unsigned int a2)
{
  _DWORD *v4; // r0

  if ( !a1 || *a1 != 1 )
    return 0;
  if ( sub_6E1A8() >= a2 )
  {
    v4 = (_DWORD *)sub_6E1C4(a1, a2);
    if ( v4 )
    {
      if ( *v4 == 2 )
        return sub_6E350();
    }
  }
  return 0;
}
