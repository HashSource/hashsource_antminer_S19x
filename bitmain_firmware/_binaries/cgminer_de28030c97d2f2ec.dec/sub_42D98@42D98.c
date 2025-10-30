int __fastcall sub_42D98(char a1)
{
  int v1; // r3
  int v2; // r3
  int v3; // r3
  int v4; // r3
  char v7[2048]; // [sp+8h] [bp-82Ch] BYREF
  __time_t v8[2]; // [sp+808h] [bp-2Ch] BYREF
  struct timespec abstime; // [sp+810h] [bp-24h] BYREF
  int v10; // [sp+818h] [bp-1Ch]
  _DWORD *v11; // [sp+81Ch] [bp-18h]
  int v12; // [sp+820h] [bp-14h]
  int v14; // [sp+828h] [bp-Ch]
  _DWORD *v15; // [sp+82Ch] [bp-8h]

  v15 = 0;
  sub_2E354((pthread_mutex_t *)dword_87FE4, "cgminer.c", "hash_pop", 8261);
  if ( !dword_87E98 || !*(_DWORD *)(*(_DWORD *)(dword_87E98 + 344) + 12) )
  {
    byte_87FB2 = 1;
    if ( a1 != 1 )
      goto LABEL_54;
    do
    {
      sub_22308(v8);
      abstime.tv_sec = v8[0] + 10;
      abstime.tv_nsec = 1000 * v8[1];
      pthread_cond_signal(&stru_92030);
      if ( pthread_cond_timedwait((pthread_cond_t *)(dword_94128 + 40), (pthread_mutex_t *)dword_87FE4, &abstime) )
      {
        if ( byte_87FC1 != 1 )
        {
          byte_87FC1 = 1;
          if ( byte_91F58 || byte_87769 || dword_8697C > 3 )
          {
            strcpy(v7, "Waiting for work to be available from pools.");
            sub_1E4EC(4, v7, 0);
          }
        }
      }
    }
    while ( !dword_87E98 || !*(_DWORD *)(*(_DWORD *)(dword_87E98 + 344) + 12) );
  }
  if ( byte_87FC1 )
  {
    if ( byte_91F58 || byte_87769 || dword_8697C > 3 )
    {
      strcpy(v7, "Work available from pools, resuming.");
      sub_1E4EC(4, v7, 0);
    }
    byte_87FC1 = 0;
  }
  if ( dword_87E98 )
    v1 = *(_DWORD *)(*(_DWORD *)(dword_87E98 + 344) + 12);
  else
    v1 = 0;
  v12 = v1;
  if ( v1 <= dword_88088 )
  {
    v15 = (_DWORD *)dword_87E98;
  }
  else
  {
    v15 = (_DWORD *)dword_87E98;
    if ( dword_87E98 )
      v2 = *(_DWORD *)(dword_87E98 + 352);
    else
      v2 = 0;
    v14 = v2;
    while ( v15 && (unsigned __int8)sub_3A124((int)v15) == 1 )
    {
      v15 = (_DWORD *)v14;
      if ( v14 )
        v3 = *(_DWORD *)(v14 + 352);
      else
        v3 = 0;
      v14 = v3;
    }
  }
  if ( v15[87] || v15[88] )
  {
    v11 = v15 + 86;
    if ( (_DWORD *)(*(_DWORD *)(*(_DWORD *)(dword_87E98 + 344) + 16) - *(_DWORD *)(*(_DWORD *)(dword_87E98 + 344) + 20)) == v15 )
      *(_DWORD *)(*(_DWORD *)(dword_87E98 + 344) + 16) = v15[87] + *(_DWORD *)(*(_DWORD *)(dword_87E98 + 344) + 20);
    if ( v15[87] )
      *(_DWORD *)(v15[87] + *(_DWORD *)(*(_DWORD *)(dword_87E98 + 344) + 20) + 8) = v15[88];
    else
      dword_87E98 = v15[88];
    if ( v11[2] )
      *(_DWORD *)(v11[2] + *(_DWORD *)(*(_DWORD *)(dword_87E98 + 344) + 20) + 4) = v11[1];
    v10 = (*(_DWORD *)(*(_DWORD *)(dword_87E98 + 344) + 4) - 1) & v11[7];
    v4 = **(_DWORD **)(dword_87E98 + 344) + 12 * v10;
    --*(_DWORD *)(v4 + 4);
    if ( *(_DWORD **)(**(_DWORD **)(dword_87E98 + 344) + 12 * v10) == v11 )
      *(_DWORD *)(**(_DWORD **)(dword_87E98 + 344) + 12 * v10) = v11[4];
    if ( v11[3] )
      *(_DWORD *)(v11[3] + 16) = v11[4];
    if ( v11[4] )
      *(_DWORD *)(v11[4] + 12) = v11[3];
    --*(_DWORD *)(*(_DWORD *)(dword_87E98 + 344) + 12);
  }
  else
  {
    free(**(void ***)(dword_87E98 + 344));
    free(*(void **)(dword_87E98 + 344));
    dword_87E98 = 0;
  }
  if ( sub_3A124((int)v15) )
    --dword_88088;
  pthread_cond_signal(&stru_92030);
  pthread_cond_signal((pthread_cond_t *)(dword_94128 + 40));
  dword_95248 = time(0);
LABEL_54:
  sub_2E484((pthread_mutex_t *)dword_87FE4, "cgminer.c", "hash_pop", 8333);
  return (int)v15;
}
