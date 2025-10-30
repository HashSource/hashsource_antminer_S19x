int __fastcall sub_787F0(unsigned int a1)
{
  char *v1; // r8
  char *v3; // r4
  int i; // r7
  char *v5; // r5
  char *v7; // r0

  if ( a1 > 3 )
    return -1;
  v1 = (char *)&unk_65EA50;
  v3 = (char *)&unk_65F250;
  for ( i = 0; i != 4; ++i )
  {
    v5 = v3 + 0x20000;
    if ( a1 == i )
    {
      do
      {
        v7 = v3;
        v3 += 512;
        memcpy(v7, &unk_21C880, 0x200u);
      }
      while ( v3 != v5 );
      memcpy(v1, &unk_21C880, 0x200u);
    }
    v1 += 512;
    v3 = v5;
  }
  return 0;
}
