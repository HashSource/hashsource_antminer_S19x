int sub_58BE0()
{
  int v0; // r3
  _DWORD *v1; // r4
  char v3[2048]; // [sp+0h] [bp-800h] BYREF

  v0 = ++dword_1AF144;
  if ( dword_1AF144 > dword_242F4C )
  {
    sub_58548();
    v0 = dword_1AF144;
  }
  v1 = *(_DWORD **)(dword_244048 + 4 * (v0 + 0x3FFFFFFF));
  if ( byte_1AECC5 && (byte_244080 || byte_1AECC4 || dword_9E320 > 6) )
  {
    snprintf(v3, 0x800u, "Enable extranonce subscribe on %d", *v1);
    sub_47AB4(7, v3, 0);
  }
  sub_6428C(v1 + 145);
  return 0;
}
