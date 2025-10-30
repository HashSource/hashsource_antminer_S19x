int __fastcall sub_55148(const char *a1, unsigned __int8 *a2, int a3)
{
  int result; // r0
  int v4; // r3
  int v5; // [sp+4h] [bp-18h]
  unsigned int i; // [sp+10h] [bp-Ch]
  unsigned int j; // [sp+10h] [bp-Ch]
  unsigned __int8 *v8; // [sp+14h] [bp-8h]

  v5 = a3;
  v8 = a2;
  result = printf("Dumping %u %s bytes from %p:\n", a3, a1, a2);
  while ( v5 > 0 )
  {
    for ( i = 0; i <= 0xF; ++i )
    {
      if ( i >= v5 )
        printf("   ");
      else
        printf("%02x ", v8[i]);
    }
    for ( j = 0; j <= 0xF; ++j )
    {
      if ( j >= v5 )
      {
        putchar(32);
      }
      else
      {
        if ( v8[j] <= 0x1Fu || v8[j] > 0x7Eu )
          v4 = 46;
        else
          v4 = v8[j];
        putchar(v4);
      }
    }
    result = putchar(10);
    v8 += 16;
    if ( v5 <= 16 )
      break;
    v5 -= 16;
  }
  return result;
}
