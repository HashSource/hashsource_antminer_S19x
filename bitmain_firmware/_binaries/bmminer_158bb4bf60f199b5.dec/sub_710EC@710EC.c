void __fastcall sub_710EC(unsigned int a1)
{
  int v2; // r6
  char s[2048]; // [sp+8h] [bp-800h] BYREF

  if ( a1 > 0xF )
  {
    snprintf(s, 0x800u, "%s: Bad pic param, input chain is %d\n", "close_pic", a1);
    sub_47AB4(0, s, 0);
  }
  else
  {
    v2 = 2 * a1;
    if ( dword_246410[2 * a1] || dword_246410[v2 + 1] )
    {
      pthread_mutex_lock(&stru_1B147C);
      sub_73804(dword_246410[2 * a1]);
      dword_246410[v2 + 1] = 0;
      pthread_mutex_unlock(&stru_1B147C);
    }
  }
}
