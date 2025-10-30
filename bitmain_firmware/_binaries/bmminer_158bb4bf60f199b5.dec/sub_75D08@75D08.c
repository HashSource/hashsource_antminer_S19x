int __fastcall sub_75D08(unsigned int a1)
{
  char *v1; // r9
  int i; // r7
  char *v5; // r4
  void *v6; // r0

  if ( a1 > 3 )
    return -1;
  v1 = (char *)&unk_1B14EC + 512 * a1;
  for ( i = 0; i != 4; ++i )
  {
    if ( a1 == i )
    {
      v5 = (char *)&unk_1B1D04 + 0x20000 * a1;
      do
      {
        v6 = v5;
        v5 += 512;
        memcpy(v6, &unk_9F5C4, 0x200u);
      }
      while ( v5 != (char *)&unk_1D1D04 + 0x20000 * a1 );
      memcpy(v1, &unk_9F5C4, 0x200u);
    }
  }
  return 0;
}
