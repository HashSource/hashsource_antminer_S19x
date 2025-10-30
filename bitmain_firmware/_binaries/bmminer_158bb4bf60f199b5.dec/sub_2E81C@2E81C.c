int __fastcall sub_2E81C(int a1, unsigned int a2, unsigned int a3, int a4)
{
  int result; // r0
  int v9; // r0
  _DWORD v10[2]; // [sp+Ch] [bp-814h] BYREF
  _BYTE v11[12]; // [sp+14h] [bp-80Ch] BYREF
  char s[2048]; // [sp+20h] [bp-800h] BYREF

  if ( (unsigned int)dword_9E31C > 3 )
  {
    snprintf(s, 0x800u, "Dump asic register start. chain = %d, asic = %d, reg = 0x%x\n", a1, a2, a3);
    sub_47AB4(3, s, 0);
  }
  result = sub_2DA50(a1, a2, 0);
  if ( result )
  {
    v9 = pthread_mutex_lock(&stru_A0DB0);
    v10[0] = 0;
    v10[1] = 0;
    sub_2E9B8(v9);
    sub_2D7C8((int)v11, a2, a3, a4);
    sub_2A29C(s, v11, 9u);
    sub_70808(s, a1);
    sub_2A2D8(a1, a2, a3);
    sub_2A324(a1, a2, a3, (int)v10);
    sub_2BBB8(a3, (int)v10);
    result = pthread_mutex_unlock(&stru_A0DB0);
    if ( (unsigned int)dword_9E31C > 3 )
    {
      strcpy(s, "Dump asic register done.\n");
      return sub_47AB4(3, s, 0);
    }
  }
  else if ( (unsigned int)dword_9E31C > 3 )
  {
    strcpy(s, "register is invalid.\n");
    return sub_47AB4(3, s, 0);
  }
  return result;
}
