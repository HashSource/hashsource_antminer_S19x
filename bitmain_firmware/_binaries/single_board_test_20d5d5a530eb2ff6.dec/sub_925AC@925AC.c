int __fastcall sub_925AC(unsigned __int16 **a1, _DWORD *a2)
{
  int v4; // r4
  unsigned int v5; // r5
  unsigned __int16 *v6; // r0

  if ( a2[1] )
  {
    v4 = *a2 + 36;
    v5 = 0;
    do
    {
      ++v5;
      v6 = sub_92300(a1, *(_DWORD *)(v4 - 32), *(unsigned __int16 *)(v4 - 36), 0);
      if ( v6 )
        *((_DWORD *)v6 + 3) = *(_DWORD *)(v4 - 24);
      v4 += 36;
    }
    while ( a2[1] > v5 );
  }
  return 1;
}
