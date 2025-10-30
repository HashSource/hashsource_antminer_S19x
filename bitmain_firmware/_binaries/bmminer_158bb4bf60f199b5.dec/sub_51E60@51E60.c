int __fastcall sub_51E60(int a1)
{
  char v3[2048]; // [sp+0h] [bp-800h] BYREF

  if ( byte_244080 || byte_1AECC4 || dword_9E320 > 2 )
  {
    snprintf(v3, 0x800u, "WTF No pool %d found!", a1);
    sub_47AB4(3, v3, 0);
  }
  return *(_DWORD *)(dword_244048 + 4 * a1);
}
