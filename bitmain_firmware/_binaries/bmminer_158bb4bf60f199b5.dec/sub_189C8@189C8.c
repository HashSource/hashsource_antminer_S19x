int __fastcall sub_189C8(int a1)
{
  char v2[2056]; // [sp-808h] [bp-808h] BYREF

  if ( dword_A05EC && *(_BYTE *)(dword_A05EC + 96) )
    return *(unsigned __int16 *)(*(_DWORD *)(dword_A05EC + 4 * a1) + 24);
  if ( (unsigned int)dword_9E31C > 3 )
  {
    snprintf(v2, 0x800u, "No pcb version, chain = %d.\n", a1);
    sub_47AB4(3, v2, 0);
  }
  return 0xFFFF;
}
