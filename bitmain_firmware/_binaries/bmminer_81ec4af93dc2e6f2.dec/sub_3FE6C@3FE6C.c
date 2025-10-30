int sub_3FE6C()
{
  int v0; // r6
  int v1; // r5
  int result; // r0
  _QWORD *v3; // r7
  unsigned int v4; // r4
  char *v5; // r9
  int v6; // r11
  int v7; // t1
  int v9; // r9
  unsigned int i; // r4
  int v11; // r7
  int v12; // r0
  int v13; // r1
  int v14; // r1

  v0 = 0;
  memset(byte_5BD134, 0, sizeof(byte_5BD134));
  memset(byte_5BC080, 0, 0x1000u);
  memset(byte_5BB038, 0, sizeof(byte_5BB038));
  v1 = 0;
  sub_3EE98(byte_5BD134, 10);
  sub_3EE98(byte_5BC080, 30);
  sub_3EE98(byte_5BB038, 60);
  do
  {
    result = sub_266F0(v1);
    if ( result )
    {
      v3 = (_QWORD *)((char *)&unk_9C69D8 + 2048 * v1);
      v4 = 0;
      v5 = (char *)&unk_B4304 + 1024 * v1;
      v6 = sub_26540();
      while ( sub_26540() > v4++ )
      {
        v7 = *((_DWORD *)v5 + 1);
        v5 += 4;
        *v3++ = 0;
        v0 += v7;
      }
      if ( v6 )
        v0 = sub_8C490(v0);
      else
        v0 = 1;
      v9 = 0;
      for ( i = 0; ; ++i )
      {
        v11 = v9 + i;
        if ( sub_26540() <= i )
          break;
        v12 = sub_26550();
        sub_8C474(i, v12);
        if ( !v13 )
        {
          ++v9;
          v14 = v11;
          v11 = v9 + i;
          sub_26CA0(v1, v14, 32);
        }
        sub_26CA0(v1, v11, 111);
      }
      result = sub_26CA0(v1, v9 + i, 0);
    }
    ++v1;
  }
  while ( v1 != 4 );
  return result;
}
