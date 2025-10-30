char *__fastcall sub_4BC9C(int a1)
{
  ssize_t v1; // r0
  char v3[4096]; // [sp+0h] [bp-1000h] BYREF

  sub_93170(v3, 4096, "/proc/%d/exe", a1);
  v1 = readlink(v3, byte_4726D8, 0xFFFu);
  if ( v1 <= 0 )
    strcpy(byte_4726D8, v3);
  else
    byte_4726D8[v1] = 0;
  return byte_4726D8;
}
