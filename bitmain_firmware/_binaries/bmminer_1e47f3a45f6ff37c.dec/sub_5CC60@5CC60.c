int __fastcall sub_5CC60(int result)
{
  unsigned __int8 v1; // [sp+Fh] [bp-805h]
  char v2[4]; // [sp+10h] [bp-804h] BYREF

  v1 = result;
  if ( (unsigned __int8)result <= 0xFu )
  {
    if ( dword_9CD940[2 * (unsigned __int8)result] || dword_9CD940[2 * (unsigned __int8)result + 1] )
    {
      pthread_mutex_lock(&stru_536318);
      sub_6EF80(dword_9CD940[2 * v1]);
      dword_9CD940[2 * v1] = 0;
      dword_9CD940[2 * v1 + 1] = 0;
      return pthread_mutex_unlock(&stru_536318);
    }
  }
  else
  {
    snprintf(v2, 0x800u, "%s: Bad pic param, input chain is %d\n", "close_pic", (unsigned __int8)result);
    return sub_3B6AC(0, v2, 0, (int)v2);
  }
  return result;
}
