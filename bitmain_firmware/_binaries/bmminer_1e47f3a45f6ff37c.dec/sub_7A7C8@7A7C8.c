int __fastcall sub_7A7C8(unsigned int a1)
{
  char *v1; // r7
  char *v2; // r4
  int i; // r6
  char *v5; // r5
  char *v7; // r0

  if ( a1 > 3 )
    return -1;
  v1 = (char *)&unk_5369E8;
  v2 = (char *)&unk_5371E8;
  for ( i = 0; i != 4; ++i )
  {
    v5 = v2 + 0x20000;
    if ( a1 == i )
    {
      do
      {
        v7 = v2;
        v2 += 512;
        memcpy(v7, &unk_B39B4, 0x200u);
      }
      while ( v2 != v5 );
      memcpy(v1, &unk_B39B4, 0x200u);
    }
    v1 += 512;
    v2 = v5;
  }
  return 0;
}
