int sub_32B50()
{
  int v0; // r3
  _DWORD *v1; // r4
  char v3[2048]; // [sp+0h] [bp-800h] BYREF

  v0 = ++dword_69078;
  if ( dword_69078 > dword_733CC )
  {
    sub_324B8();
    v0 = dword_69078;
  }
  v1 = *(_DWORD **)(dword_744C8 + 4 * (v0 + 0x3FFFFFFF));
  if ( byte_68BD5 && (byte_74500 || byte_68BD4 || dword_67DB4 > 6) )
  {
    snprintf(v3, 0x800u, "Enable extranonce subscribe on %d", *v1);
    sub_20F58(7, v3, 0);
  }
  sub_40068(v1 + 145);
  return 0;
}
