void __fastcall sub_1B298(int a1, int a2)
{
  int i; // r4

  for ( i = 0; i != 16; ++i )
  {
    if ( *(_DWORD *)(dword_A0D68 + 4 * i + 4) == 1 )
    {
      sub_752FC((unsigned __int8)i);
      if ( a2 )
        sub_75644((unsigned __int8)i);
      else
        sub_7569C((unsigned __int8)i);
    }
  }
}
