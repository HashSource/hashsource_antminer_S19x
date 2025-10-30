int __fastcall sub_10C28(int a1, _DWORD *a2, int a3)
{
  _BOOL4 v3; // lr

  if ( !a2 )
    return 25;
  v3 = a3 == 0;
  if ( *a2 )
    v3 = 1;
  if ( !v3 )
    return 23;
  else
    return 25;
}
