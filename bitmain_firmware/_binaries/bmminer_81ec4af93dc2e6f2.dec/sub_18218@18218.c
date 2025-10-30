int sub_18218()
{
  int i; // r5
  int j; // r4
  int v3; // r0

  for ( i = 0; i != 4; ++i )
  {
    if ( sub_266F0(i) )
    {
      for ( j = 0; ; ++j )
      {
        v3 = sub_17674();
        if ( v3 <= j )
          break;
        if ( sub_265C0(v3) )
        {
          sub_7730C((unsigned __int8)i, (unsigned __int8)(*(_DWORD *)(dword_B0EDC + 4 * j) * dword_B0ED8));
          usleep(0x2710u);
        }
      }
    }
  }
  return 0;
}
