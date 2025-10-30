int sub_188FC()
{
  int result; // r0
  char v1[2052]; // [sp+0h] [bp-804h] BYREF

  if ( dword_B3C88 )
  {
    if ( (unsigned int)dword_B308C > 3 )
    {
      strcpy(v1, "uninit_temp_info");
      result = sub_3B6AC(3, v1, 0, *(_DWORD *)"info");
      dword_B3C88 = 0;
      if ( (unsigned int)dword_B308C > 3 )
      {
        strcpy(v1, "do not read temp anymore...");
        return sub_3B6AC(3, v1, 0, *(_DWORD *)"temp anymore...");
      }
    }
    else
    {
      dword_B3C88 = 0;
    }
  }
  return result;
}
