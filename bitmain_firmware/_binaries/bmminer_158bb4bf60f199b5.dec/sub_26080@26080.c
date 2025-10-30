int __fastcall sub_26080(const char *a1, int a2)
{
  char v4[2048]; // [sp+0h] [bp-800h] BYREF

  if ( a2 != 32 && (byte_244080 || byte_1AECC4 || dword_9E320 > 2) )
  {
    snprintf(v4, 0x800u, "invald hash size %d\n", a2);
    sub_47AB4(3, v4, 0);
  }
  byte_A0D90 = sub_25E54(a1);
  return 0;
}
