int __fastcall sub_25B59C(unsigned __int8 *a1)
{
  int v1; // r3
  int v2; // r1
  unsigned int v3; // r2
  bool v4; // zf
  int v5; // t1

  v1 = *a1;
  if ( !*a1 )
    return *a1;
  v3 = (unsigned int)a1;
  v2 = 0;
  do
  {
    v4 = v1 == 47;
    v5 = *(unsigned __int8 *)++v3;
    v1 = v5;
    if ( v4 )
      ++v2;
  }
  while ( v1 );
  if ( v3 > (unsigned int)(a1 + 1) )
  {
    if ( *(_BYTE *)(v3 - 1) == 47 )
    {
      --v2;
    }
    else if ( v3 > (unsigned int)a1 )
    {
      ++v2;
    }
  }
  else if ( v3 > (unsigned int)a1 && *(_BYTE *)(v3 - 1) != 47 )
  {
    ++v2;
  }
  return v2;
}
