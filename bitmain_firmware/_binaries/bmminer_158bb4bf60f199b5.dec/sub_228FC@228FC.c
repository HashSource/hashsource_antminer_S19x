int sub_228FC()
{
  int v0; // r0
  char v2[2048]; // [sp+0h] [bp-800h] BYREF

  v0 = sub_16940();
  dword_241D20 = v0;
  if ( (unsigned int)dword_9E31C > 3 )
  {
    snprintf(v2, 0x800u, "Bring up temperature is %d\n", v0);
    sub_47AB4(3, v2, 0);
    v0 = dword_241D20;
  }
  if ( v0 >= -5 )
    return 0;
  sub_31794(9, 255);
  sub_226C0(0xFu, "Environment temperature is too low!");
  return -1;
}
