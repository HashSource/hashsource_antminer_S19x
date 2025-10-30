int __fastcall sub_19CA0(int a1)
{
  int v2; // r5

  sub_734CC();
  usleep(0x493E0u);
  v2 = sub_19BB4();
  if ( v2 )
  {
    sub_31794(12, 0);
    sub_226C0(8, "power set failed!");
  }
  dword_A0618 = a1;
  byte_A0614 = 1;
  return v2;
}
