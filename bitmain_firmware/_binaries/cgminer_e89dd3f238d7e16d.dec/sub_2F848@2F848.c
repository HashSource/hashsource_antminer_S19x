int sub_2F848()
{
  char v1[8]; // [sp+Ch] [bp-808h] BYREF
  _DWORD *v2; // [sp+80Ch] [bp-8h]

  if ( ++dword_86F0C > dword_90E90 )
    sub_2E5D4();
  v2 = *(_DWORD **)(dword_90F34 + 4 * (dword_86F0C + 0x3FFFFFFF));
  if ( byte_865D0 && (byte_90DC0 || byte_865D1 || dword_857E4 > 6) )
  {
    snprintf(v1, 0x800u, "Enable extranonce subscribe on %d", *v2);
    sub_1DB6C(7, v1, 0);
  }
  sub_54370(v2 + 145);
  return 0;
}
