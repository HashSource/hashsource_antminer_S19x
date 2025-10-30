int __fastcall sub_821D4(pthread_mutex_t *a1, const char *a2, int a3, int a4, unsigned int a5, int a6)
{
  int *v7; // r0
  _BYTE v13[44]; // [sp+18h] [bp-64h] BYREF
  int v14; // [sp+44h] [bp-38h]
  int v15; // [sp+74h] [bp-8h]

  v15 = 0;
  if ( a2 )
  {
    if ( sub_81F34(a1) )
    {
      sub_89984(1, "src/rotater.c", 539, "zlog_rotater_trylock fail, maybe lock by other process or threads");
      return 0;
    }
    else
    {
      if ( sub_8CCCC(a2, v13) )
      {
        v15 = -1;
        v7 = _errno_location();
        sub_89984(2, "src/rotater.c", 545, "stat [%s] fail, errno[%d]", a2, *v7);
      }
      else if ( v14 + a3 > a5 )
      {
        v15 = sub_81DC4(a1, (int)a2, a4, a6);
        if ( v15 )
        {
          sub_89984(2, "src/rotater.c", 560, "zlog_rotater_lsmv [%s] fail, return", a2);
          v15 = -1;
        }
      }
      else
      {
        v15 = 0;
      }
      if ( sub_820DC(a1) )
        sub_89984(2, "src/rotater.c", 569, "zlog_rotater_unlock fail");
      return v15;
    }
  }
  else
  {
    sub_89984(2, "src/rotater.c", 536, "base_path is null or 0");
    return -1;
  }
}
