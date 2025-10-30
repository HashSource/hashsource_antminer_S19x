int sub_30994()
{
  char v1[8]; // [sp+Ch] [bp-808h] BYREF
  _DWORD *v2; // [sp+80Ch] [bp-8h]

  if ( ++dword_880A4 > dword_92028 )
    sub_2F5CC();
  v2 = *(_DWORD **)(dword_920CC + 4 * (dword_880A4 + 0x3FFFFFFF));
  if ( byte_87768 && (byte_91F58 || byte_87769 || dword_8697C > 6) )
  {
    snprintf(v1, 0x800u, "Enable extranonce subscribe on %d", *v2);
    sub_1E4EC(7, v1, 0);
  }
  sub_55008(v2 + 145);
  return 0;
}
