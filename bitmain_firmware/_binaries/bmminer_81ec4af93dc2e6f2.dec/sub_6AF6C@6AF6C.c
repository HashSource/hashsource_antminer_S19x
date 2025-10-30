int sub_6AF6C()
{
  unsigned int v1; // r3
  unsigned int v3; // [sp+0h] [bp-Ch] BYREF
  unsigned int v4; // [sp+4h] [bp-8h]

  v3 = 0;
  v4 = 0;
  do
  {
    sub_52E24(12, &v3);
    if ( v3 >> 31 == 1 )
      return 1;
    usleep(0x1388u);
    v1 = v4++;
  }
  while ( v1 < 0x258 );
  return 0;
}
