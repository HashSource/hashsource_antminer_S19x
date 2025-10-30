int __fastcall sub_75638(_BYTE *a1)
{
  int result; // r0
  int v3; // r6
  char v4[2052]; // [sp+0h] [bp-804h] BYREF

  if ( dword_65E464 || (v3 = sub_74ABC(), v3 >= 0) )
  {
    if ( a1 )
    {
      result = 0;
      *a1 = byte_65E46C;
    }
    else
    {
      return 0;
    }
  }
  else
  {
    snprintf(v4, 0x800u, "%s: auto exec bitmain_power_open, but open power failed\n", "bitmain_power_is_calibrated");
    nullsub_8();
    return v3;
  }
  return result;
}
