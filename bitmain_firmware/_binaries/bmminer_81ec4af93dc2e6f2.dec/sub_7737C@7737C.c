int __fastcall sub_7737C(unsigned int a1)
{
  int i; // r7
  char *v4; // r4
  void *v5; // r0

  if ( a1 > 3 )
    return -1;
  for ( i = 0; i != 4; ++i )
  {
    if ( a1 == i )
    {
      v4 = (char *)&unk_532344 + 0x20000 * a1;
      do
      {
        v5 = v4;
        v4 += 512;
        memcpy(v5, &unk_B0C48, 0x200u);
      }
      while ( v4 != (char *)&unk_552344 + 0x20000 * a1 );
      memcpy((char *)&unk_531B2C + 512 * i, &unk_B0C48, 0x200u);
    }
  }
  return 0;
}
