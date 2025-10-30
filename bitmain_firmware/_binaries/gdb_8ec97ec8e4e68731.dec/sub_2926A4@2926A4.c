int __fastcall sub_2926A4(int a1, int a2, int a3)
{
  _DWORD *v3; // r3

  v3 = (_DWORD *)dword_48B6E0;
  if ( !dword_48B6E0 )
    return 1;
  if ( a1 != *(_DWORD *)(dword_48B6E0 + 16) )
  {
    do
    {
      v3 = (_DWORD *)*v3;
      if ( !v3 )
        return 1;
    }
    while ( v3[4] != a1 );
  }
  v3[1] = a2;
  v3[2] = a3;
  return 0;
}
