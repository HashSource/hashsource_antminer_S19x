int __fastcall sub_18B6C(int a1)
{
  char v2[2056]; // [sp-808h] [bp-808h] BYREF

  if ( dword_A05EC && *(_BYTE *)(dword_A05EC + 96) )
    return *(unsigned __int8 *)(*(_DWORD *)(dword_A05EC + 4 * a1) + 29);
  if ( (unsigned int)dword_9E31C > 3 )
  {
    snprintf(v2, 0x800u, "No board bin, chain = %d.\n", a1);
    sub_47AB4(3, v2, 0);
  }
  return 255;
}
