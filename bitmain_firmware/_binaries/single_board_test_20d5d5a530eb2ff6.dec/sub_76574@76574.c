int __fastcall sub_76574(int a1)
{
  int v2; // r4
  int v3; // r0

  if ( pthread_mutex_lock(&stru_65EA18) )
  {
    nullsub_8();
    return -4;
  }
  else
  {
    if ( a1 )
    {
      v2 = sub_76908();
      if ( v2 < 0 )
      {
        v2 = -1;
        nullsub_8();
      }
      else if ( sub_7715C()
             || sub_770B0(v2, 1795, (2 * *(unsigned __int8 *)(a1 + 7)) | (16 * *(unsigned __int8 *)(a1 + 6))) )
      {
        nullsub_8();
        if ( v2 )
        {
          v3 = v2;
          v2 = -1;
          sub_7699C(v3);
        }
        else
        {
          v2 = -1;
        }
      }
    }
    else
    {
      v2 = -3;
      nullsub_8();
    }
    pthread_mutex_unlock(&stru_65EA18);
    return v2;
  }
}
