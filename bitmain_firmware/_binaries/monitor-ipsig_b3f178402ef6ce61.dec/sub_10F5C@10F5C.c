int __fastcall sub_10F5C(int a1)
{
  int v2; // r4
  int v3; // r3
  char v5[68]; // [sp+0h] [bp-44h] BYREF

  v2 = 3;
  memset(v5, 0, 0x40u);
  do
  {
    if ( a1 )
    {
      sprintf(v5, "echo %d > /sys/class/gpio/gpio%d/value", 1, 435);
      system(v5);
      usleep(0xC350u);
      v3 = 435;
    }
    else
    {
      sprintf(v5, "echo %d > /sys/class/gpio/gpio%d/value", 1, 434);
      system(v5);
      usleep(0xC350u);
      v3 = 434;
    }
    sprintf(v5, "echo %d > /sys/class/gpio/gpio%d/value", 0, v3);
    system(v5);
    usleep(0xC350u);
    --v2;
  }
  while ( v2 );
  return 0;
}
