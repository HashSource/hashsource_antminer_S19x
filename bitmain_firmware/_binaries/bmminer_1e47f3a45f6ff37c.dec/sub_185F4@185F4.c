int sub_185F4()
{
  int i; // r5
  int j; // r4
  int v2; // r0

  for ( i = 0; i != 4; ++i )
  {
    if ( sub_26C0C(i) )
    {
      for ( j = 0; ; ++j )
      {
        v2 = sub_179C4();
        if ( j >= v2 )
          break;
        if ( sub_26AC4(v2) )
        {
          sub_7A758((unsigned __int8)i, (unsigned __int8)(*(_DWORD *)(dword_B3C4C + 4 * j) * dword_B3C48));
          usleep(0x2710u);
        }
      }
    }
  }
  return 0;
}
