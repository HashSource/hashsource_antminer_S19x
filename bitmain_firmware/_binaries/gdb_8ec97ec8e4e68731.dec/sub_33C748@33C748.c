int __fastcall sub_33C748(_DWORD *a1, int a2, unsigned int a3)
{
  int v3; // r3
  unsigned int v4; // r3
  unsigned int v5; // r3
  bool v6; // zf

  v3 = a1[1];
  if ( !v3 )
    return -1;
  v4 = v3 - 1;
  if ( a3 >= v4 )
    a3 = v4;
  v5 = a3 - 1;
  if ( a3 == -1 )
    return a3;
  if ( *(unsigned __int8 *)(*a1 + a3) != a2 )
  {
    do
    {
      v6 = v5 == -1;
      a3 = v5--;
    }
    while ( !v6 && *(unsigned __int8 *)(*a1 + a3) != a2 );
  }
  return a3;
}
