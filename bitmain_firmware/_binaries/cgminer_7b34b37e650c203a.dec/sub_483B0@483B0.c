int __fastcall sub_483B0(_DWORD *a1, int a2)
{
  _BOOL4 v2; // r3

  if ( !a1 )
    return 0;
  v2 = a2 == 0;
  if ( *a1 )
    v2 = 1;
  if ( v2 )
    return 0;
  else
    return sub_45D64((int)(a1 + 2), a2);
}
