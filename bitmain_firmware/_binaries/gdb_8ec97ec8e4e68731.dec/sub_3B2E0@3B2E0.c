int __fastcall sub_3B2E0(int a1, int a2, int a3)
{
  int v3; // r4
  int v6; // r0

  v3 = a3;
  if ( !a3 )
    return 0;
  do
  {
    while ( 1 )
    {
      sub_258BD4();
      v6 = (*(int (__fastcall **)(int, int, int))(*(_DWORD *)(a1 + 12) + 80))(a1, a2, v3);
      if ( v6 < 0 )
        break;
      v3 -= v6;
      a2 += v6;
      if ( !v3 )
        return 0;
    }
  }
  while ( *_errno_location() == 4 );
  return 1;
}
