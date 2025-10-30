int sub_41A9C()
{
  char *v0; // r11
  int v1; // r4
  int v2; // r6
  int result; // r0
  char *v4; // r7
  char *v5; // r5
  unsigned int v6; // r9
  int v7; // r8
  int v8; // t1
  int v10; // r8
  char *v11; // r7
  unsigned int i; // r5
  int v13; // r1
  int v14; // r0
  int v15; // r1
  int v16; // r1
  char *v17; // [sp+4h] [bp-8h]

  v0 = (char *)&unk_B707C;
  v1 = 0;
  v2 = 0;
  memset(byte_5C1FEC, 0, sizeof(byte_5C1FEC));
  v17 = (char *)&unk_9CB888;
  memset(byte_5C0F38, 0, 0x1000u);
  memset(byte_5BFEF0, 0, sizeof(byte_5BFEF0));
  sub_409B4(byte_5C1FEC, 10);
  sub_409B4(byte_5C0F38, 30);
  sub_409B4(byte_5BFEF0, 60);
  do
  {
    result = sub_26C0C(v2);
    if ( result )
    {
      v4 = v0 - 4;
      v5 = v17;
      v6 = 0;
      v7 = sub_26A44();
      while ( v6++ < sub_26A44() )
      {
        v8 = *((_DWORD *)v4 + 1);
        v4 += 4;
        v1 += v8;
        *((_QWORD *)v5 + 1) = 0;
        v5 += 8;
      }
      if ( v7 )
        v1 = sub_8F800(v1);
      else
        v1 = 1;
      v10 = 0;
      v11 = v0;
      for ( i = 0; i < sub_26A44(); ++i )
      {
        v14 = sub_26A54();
        sub_8F7E4(i, v14);
        if ( !v15 )
        {
          v16 = v10 + i;
          ++v10;
          sub_271E8(v2, v16, 32);
        }
        v13 = v10 + i;
        sub_271E8(v2, v13, 111);
        v11 += 4;
      }
      result = sub_271E8(v2, v10 + i, 0);
    }
    ++v2;
    v0 += 1024;
    v17 += 2048;
  }
  while ( v2 != 4 );
  return result;
}
