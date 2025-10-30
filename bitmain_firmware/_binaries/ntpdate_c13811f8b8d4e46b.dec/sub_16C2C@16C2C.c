int __fastcall sub_16C2C(int a1, int a2)
{
  pthread_mutex_t *v3; // r6
  _DWORD *i; // r4
  FILE *v6; // r0
  int result; // r0

  if ( !a1 || *(_DWORD *)a1 != 1281586296 )
    sub_1073C();
  v3 = (pthread_mutex_t *)(a1 + 28);
  if ( pthread_mutex_lock((pthread_mutex_t *)(a1 + 28)) )
    sub_150D0("./../lib/isc/log.c", 959, "((pthread_mutex_lock(((&lctx->lock))) == 0) ? 0 : 34) == 0");
  *(_DWORD *)(a1 + 24) = a2;
  if ( !a2 )
  {
    for ( i = *(_DWORD **)(*(_DWORD *)(a1 + 52) + 8); i; i = (_DWORD *)i[13] )
    {
      while ( 1 )
      {
        if ( i[1] == 3 && (i[3] & 0x1000) != 0 )
        {
          v6 = (FILE *)i[4];
          if ( v6 )
            break;
        }
        i = (_DWORD *)i[13];
        if ( !i )
          goto LABEL_12;
      }
      fclose(v6);
      i[4] = 0;
    }
  }
LABEL_12:
  result = pthread_mutex_unlock(v3);
  if ( result )
    sub_150D0("./../lib/isc/log.c", 975, "((pthread_mutex_unlock(((&lctx->lock))) == 0) ? 0 : 34) == 0");
  return result;
}
