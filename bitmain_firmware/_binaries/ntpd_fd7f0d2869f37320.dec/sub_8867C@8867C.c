int __fastcall sub_8867C(unsigned __int8 *a1, unsigned __int8 *a2)
{
  int v2; // r2
  int v3; // t1
  int v4; // r3
  int v5; // t1
  int v6; // r3

  while ( 1 )
  {
    v3 = *a1++;
    v2 = v3;
    v5 = *a2++;
    v4 = v5;
    if ( v2 != v5 )
    {
      v6 = *((unsigned __int8 *)&dword_B9164 + v2 + 8) - *((unsigned __int8 *)&dword_B9164 + v4 + 8);
      if ( v6 )
        break;
    }
    if ( !v2 )
      return 0;
  }
  return v6;
}
