int __fastcall sub_10F58(int a1)
{
  int v2; // r6
  int v3; // r4
  int result; // r0
  char v5[64]; // [sp+0h] [bp-40h] BYREF

  memset(v5, 0, sizeof(v5));
  v2 = 942;
  if ( !a1 )
    v2 = 941;
  v3 = 3;
  do
  {
    sprintf(v5, "echo %d > /sys/class/gpio/gpio%d/value", 1, v2);
    system(v5);
    usleep(0xC350u);
    sprintf(v5, "echo %d > /sys/class/gpio/gpio%d/value", 0, v2);
    system(v5);
    result = usleep(0xC350u);
    --v3;
  }
  while ( v3 );
  return result;
}
