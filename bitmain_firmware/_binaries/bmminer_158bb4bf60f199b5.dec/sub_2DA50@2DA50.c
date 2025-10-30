int __fastcall sub_2DA50(int a1, unsigned int a2, unsigned int a3)
{
  char v4[2052]; // [sp+0h] [bp-804h] BYREF

  if ( a1 <= 15 && *(_DWORD *)(dword_A0D68 + 4 * a1 + 4) )
  {
    if ( a2 > 0x4D )
    {
      if ( (unsigned int)dword_9E31C <= 3 )
        return 0;
      snprintf(v4, 0x800u, "Invalid ASIC ID: %d\n", a2);
    }
    else
    {
      if ( a3 <= 0x5F )
        return 1;
      if ( (unsigned int)dword_9E31C <= 3 )
        return 0;
      snprintf(v4, 0x800u, "Invalid core ID: %d\n", a3);
    }
LABEL_12:
    sub_47AB4(3, v4, 0);
    return 0;
  }
  if ( (unsigned int)dword_9E31C > 3 )
  {
    snprintf(v4, 0x800u, "Invalid chain ID: %d\n", a1);
    goto LABEL_12;
  }
  return 0;
}
