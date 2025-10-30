int sub_188E0()
{
  int v0; // r3
  int v1; // r12
  _BYTE *v2; // r2
  int v3; // t1
  int result; // r0

  v0 = dword_A0D68;
  v1 = dword_A0D68 + 64;
  v2 = (_BYTE *)(dword_A05EC + 80);
  do
  {
    while ( 1 )
    {
      v3 = *(_DWORD *)(v0 + 4);
      v0 += 4;
      if ( v3 == 1 )
        break;
      ++v2;
      if ( v0 == v1 )
        return 1;
    }
    result = (unsigned __int8)*v2;
    if ( !*v2 )
      return result;
    ++v2;
  }
  while ( v0 != v1 );
  return 1;
}
