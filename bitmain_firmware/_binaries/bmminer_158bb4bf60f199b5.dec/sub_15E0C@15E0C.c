int sub_15E0C()
{
  int i; // r4
  char *v1; // r6
  int j; // r5
  int v3; // r1

  for ( i = 0; i != 16; ++i )
  {
    while ( *(_DWORD *)(dword_A0D68 + 4 * i + 4) != 1 )
    {
      if ( ++i == 16 )
        return 0;
    }
    v1 = (char *)&unk_9F80C + 108 * i;
    for ( j = 0; j != 4; ++j )
    {
      v3 = (unsigned __int8)v1[13];
      v1 += 24;
      sub_1A954((unsigned __int8)i, v3, 0, 1);
    }
  }
  return 0;
}
