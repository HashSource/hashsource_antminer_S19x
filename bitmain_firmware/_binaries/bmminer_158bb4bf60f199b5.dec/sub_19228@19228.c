int __fastcall sub_19228(int a1, char a2)
{
  int v3; // r3
  char v4[2056]; // [sp-808h] [bp-808h] BYREF

  if ( dword_A05EC && *(_BYTE *)(dword_A05EC + 96) && (v3 = *(_DWORD *)(dword_A05EC + 4 * a1)) != 0 )
  {
    *(_BYTE *)(v3 + 129) = a2;
    return 0;
  }
  else
  {
    if ( (unsigned int)dword_9E31C > 3 )
    {
      snprintf(v4, 0x800u, "Can't set miner bin, configuration is not loaded, chain = %d.\n", a1);
      sub_47AB4(3, v4, 0);
    }
    return -1;
  }
}
