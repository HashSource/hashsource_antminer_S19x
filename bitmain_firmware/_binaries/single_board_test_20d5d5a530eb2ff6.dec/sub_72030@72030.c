void __fastcall sub_72030(unsigned int a1)
{
  int v2; // r6
  char s[2048]; // [sp+8h] [bp-800h] BYREF

  if ( a1 > 0xF )
  {
    snprintf(s, 0x800u, "%s: Bad pic param, input chain is %d\n", "close_pic", a1);
    nullsub_8();
  }
  else
  {
    v2 = 2 * a1;
    if ( dword_71ED68[2 * a1] || dword_71ED68[v2 + 1] )
    {
      pthread_mutex_lock(&stru_65E42C);
      sub_76698(dword_71ED68[2 * a1]);
      dword_71ED68[v2 + 1] = 0;
      pthread_mutex_unlock(&stru_65E42C);
    }
  }
}
