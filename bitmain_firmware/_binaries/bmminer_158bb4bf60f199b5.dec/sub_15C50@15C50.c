int sub_15C50()
{
  int result; // r0
  int v1; // r5
  pthread_mutex_t *v2; // r2
  _BYTE *v3; // lr
  int v4; // t1
  char *v5; // r9
  char *v6; // r3
  char i; // r1
  char v8; // t1
  pthread_mutex_t *v9; // r3
  int v10; // r1

  sub_1493C(&stru_2440BC);
  sub_148B4(&rwlock);
  dword_9FF04 = 0;
  dword_9FF08 = 0;
  dword_9FF0C = 0;
  memset(&unk_9F80C, 0, 0x6C0u);
  memset(&unk_9FF10, 0, 0x6C0u);
  result = sub_14040();
  v1 = dword_A0D68;
  dword_9FF0C = 0;
  v2 = (pthread_mutex_t *)&unk_9F80C;
  dword_9FF04 = -8257663;
  dword_9FF08 = 16711935;
  v3 = (_BYTE *)(dword_A0D68 + 1112);
  do
  {
    v4 = *(_DWORD *)(v1 + 4);
    v1 += 4;
    if ( v4 == 1 )
    {
      v5 = (char *)&unk_77D51;
      v6 = (char *)v2;
      for ( i = 17; ; i = v8 )
      {
        v6[12] = i;
        v6 += 24;
        result = (unsigned __int8)(3 * i);
        *(v6 - 10) = 0;
        *v6 = i;
        *(v6 - 11) = result;
        v6[1] = result;
        v6[2] = 1;
        if ( v5 == "get_temp_stats" )
          break;
        v8 = *v5++;
      }
      v9 = v2;
      v10 = 0;
      LOWORD(v2->__lock) = -127;
      *((_WORD *)&v2->__align + 2) = 255;
      *((_WORD *)&v2->__align + 4) = 0;
      *(_WORD *)&v2->__size[2] = -127;
      *((_WORD *)&v2->__align + 3) = 255;
      *((_WORD *)&v2->__align + 5) = 0;
      do
      {
        ++v10;
        *((_WORD *)&v9->__align + 8) = 255;
        v9->__size[15] = 1;
        *((_WORD *)&v9[1].__align + 2) = 255;
        ++v9;
        v9->__size[3] = 1;
      }
      while ( v10 != 4 );
      *v3 = 4;
    }
    v2 = (pthread_mutex_t *)((char *)v2 + 108);
    ++v3;
  }
  while ( v2 != &mutex );
  return result;
}
