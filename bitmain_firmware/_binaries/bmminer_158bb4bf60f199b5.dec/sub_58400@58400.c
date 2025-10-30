void __fastcall sub_58400(_DWORD *a1)
{
  char v2[2048]; // [sp+0h] [bp-800h] BYREF

  if ( byte_244080 || byte_1AECC4 || dword_9E320 > 5 )
  {
    snprintf(v2, 0x800u, "Stratum connection to pool %d resumed", *a1);
    sub_47AB4(6, v2, 0);
    sub_582C8(a1);
  }
  else
  {
    sub_582C8(a1);
  }
}
