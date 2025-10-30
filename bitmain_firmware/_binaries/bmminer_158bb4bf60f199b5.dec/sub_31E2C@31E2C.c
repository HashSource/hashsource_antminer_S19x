void *sub_31E2C()
{
  int v0; // r4
  void *result; // r0
  char v2; // r5
  unsigned int v3[512]; // [sp+28h] [bp+0h] BYREF

  if ( (unsigned int)dword_9E31C > 4 )
  {
    strcpy((char *)v3, "[DEBUG] Send 1-midstate work.\n");
    sub_47AB4(4, v3, 0);
  }
  v0 = 0;
  result = memset(v3, 0, 0x34u);
  LOBYTE(v3[0]) = 1;
  do
  {
    while ( *(_DWORD *)(dword_A0D68 + 4 * v0 + 4) != 1 )
    {
      if ( ++v0 == 16 )
        return result;
    }
    while ( (sub_6FF04(result) & (1 << v0)) == 0 )
      result = (void *)sub_4A804(1);
    v2 = v0++ | 0x80;
    BYTE1(v3[0]) = v2;
    sub_1AF48(v3[0], v3[1], v3[2], v3[3], v3[4], v3[5], v3[6], v3[7], v3[8]);
    result = (void *)sub_4A804(10);
  }
  while ( v0 != 16 );
  return result;
}
