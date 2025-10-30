bool __fastcall sub_40C28(char **a1)
{
  char v4[4]; // [sp+10h] [bp-804h] BYREF

  if ( byte_90DC0 || byte_865D1 || dword_857E4 > 5 )
  {
    snprintf(v4, 0x800u, "Testing pool %d stratum %s", *a1, a1[144]);
    sub_1DB6C(6, v4, 0);
  }
  return (unsigned __int8)sub_21EF8(a1[144], a1 + 150, a1 + 146) == 1 && (unsigned __int8)sub_29594(a1) == 1;
}
