int sub_47560()
{
  int v0; // r4
  int result; // r0
  unsigned int s[512]; // [sp+28h] [bp-800h] BYREF

  if ( (unsigned int)off_AFC24 > 4 )
  {
    strcpy((char *)s, "[DEBUG] Send 1-midstate work.\n");
    sub_3AF5C(4, (const char *)s, 0, *(int *)".\n");
  }
  v0 = 0;
  memset(s, 0, 0x34u);
  LOBYTE(s[0]) = 1;
  do
  {
    result = sub_266F0(v0);
    if ( result )
    {
      while ( (sub_5BDB8(result) & (1 << v0)) == 0 )
        result = sub_3D9D4();
      BYTE1(s[0]) = v0 | 0x80;
      sub_27AA4(s[0], s[1], s[2], s[3], s[4], s[5], s[6], s[7], s[8]);
      result = sub_3D9D4();
    }
    ++v0;
  }
  while ( v0 != 4 );
  return result;
}
