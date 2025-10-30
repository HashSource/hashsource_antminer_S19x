int sub_18504()
{
  int result; // r0
  char v1[2052]; // [sp+0h] [bp-804h] BYREF

  if ( dword_B0F14 )
  {
    if ( (unsigned int)off_AFC24 > 3 )
    {
      strcpy(v1, "uninit_temp_info");
      result = sub_3AF5C(3, v1, 0, *(_DWORD *)"info");
      dword_B0F14 = 0;
      if ( (unsigned int)off_AFC24 > 3 )
      {
        strcpy(v1, "do not read temp anymore...");
        return sub_3AF5C(3, v1, 0, *(_DWORD *)"temp anymore...");
      }
    }
    else
    {
      dword_B0F14 = 0;
    }
  }
  return result;
}
