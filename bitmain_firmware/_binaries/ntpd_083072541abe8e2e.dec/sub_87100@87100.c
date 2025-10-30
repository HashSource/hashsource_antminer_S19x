int __fastcall sub_87100(unsigned __int8 *a1, unsigned __int8 *a2)
{
  int v2; // r2
  int v3; // t1
  int v4; // r3
  int v5; // t1
  int v6; // r3

  do
  {
    while ( 1 )
    {
      v3 = *a1++;
      v2 = v3;
      v5 = *a2++;
      v4 = v5;
      if ( v2 == v5 )
        break;
      v6 = *((unsigned __int8 *)&dword_B8164 + v2 + 8) - *((unsigned __int8 *)&dword_B8164 + v4 + 8);
      if ( v6 || !v2 )
        return v6;
    }
  }
  while ( v2 );
  return 0;
}
