int __fastcall sub_59E6C(int a1)
{
  int v2; // r9
  _DWORD *v3; // r6
  int v4; // lr
  int v5; // r7
  int v6; // r11
  int v7; // r0
  int v8; // r12
  int *v9; // r2
  int v10; // r0
  int v11; // r1
  int v12; // t1
  int v13; // r3
  int v14; // r0
  int v15; // r5
  int v17; // r3
  int v18; // r2
  int *v19; // r0
  int v20; // r3
  int v21; // r12
  int *v22; // r0
  int *v23; // r0
  int v24; // r3
  int v25; // r12
  char s[2052]; // [sp+10h] [bp-804h] BYREF

  if ( pthread_mutex_lock(&stru_2440BC) )
  {
    v20 = *_errno_location();
    v21 = 5238;
LABEL_55:
    snprintf(s, 0x800u, "WTF MUTEX ERROR ON LOCK! errno=%d in %s %s():%d", v20, "cgminer.c", "switch_pools", v21);
    goto LABEL_56;
  }
  v2 = pthread_rwlock_wrlock(&rwlock);
  if ( v2 )
  {
    v22 = _errno_location();
    snprintf(s, 0x800u, "WTF WRLOCK ERROR ON LOCK! errno=%d in %s %s():%d", *v22, "cgminer.c", "switch_pools", 5238);
    goto LABEL_56;
  }
  v3 = (_DWORD *)dword_1AF12C;
  v4 = dword_1AEEB8;
  v5 = *(_DWORD *)dword_1AF12C;
  if ( a1 )
  {
    v6 = *(_DWORD *)(a1 + 4);
    if ( v6 )
    {
      v7 = dword_242F4C;
      if ( dword_242F4C > 0 )
      {
        v8 = dword_244048;
        v9 = (int *)dword_244048;
        v10 = dword_244048 + 4 * dword_242F4C;
        while ( 1 )
        {
          v12 = *v9++;
          v11 = v12;
          v13 = *(_DWORD *)(v12 + 4);
          if ( v13 < v6 )
            *(_DWORD *)(v11 + 4) = v13 + 1;
          if ( (int *)v10 == v9 )
          {
            *(_DWORD *)(a1 + 4) = 0;
            switch ( v4 )
            {
              case 0:
              case 3:
              case 4:
                goto LABEL_15;
              case 1:
              case 2:
                goto LABEL_38;
              default:
                goto LABEL_53;
            }
          }
          v6 = *(_DWORD *)(a1 + 4);
        }
      }
      *(_DWORD *)(a1 + 4) = 0;
      switch ( v4 )
      {
        case 0:
        case 3:
        case 4:
          goto LABEL_14;
        case 1:
        case 2:
          goto LABEL_37;
        default:
          goto LABEL_24;
      }
    }
    switch ( dword_1AEEB8 )
    {
      case 0:
      case 3:
      case 4:
        goto LABEL_13;
      case 1:
      case 2:
LABEL_37:
        v8 = dword_244048;
LABEL_38:
        if ( *(_BYTE *)(a1 + 97) )
          goto LABEL_41;
        v15 = *(_DWORD *)(v8 + 4 * *(_DWORD *)a1);
        break;
      default:
        goto LABEL_24;
    }
  }
  else
  {
    switch ( dword_1AEEB8 )
    {
      case 0:
      case 3:
      case 4:
LABEL_13:
        v7 = dword_242F4C;
LABEL_14:
        if ( v7 <= 0 )
          goto LABEL_24;
        do
        {
LABEL_15:
          v14 = sub_51EEC(v2);
          if ( !*(_BYTE *)(v14 + 97)
            && *(_DWORD *)(v14 + 100) == 1
            && (!*(_BYTE *)(v14 + 640) || *(_BYTE *)(v14 + 641) && *(_BYTE *)(v14 + 643)) )
          {
            v15 = *(_DWORD *)(dword_244048 + 4 * *(_DWORD *)v14);
            goto LABEL_25;
          }
          ++v2;
        }
        while ( dword_242F4C > v2 );
        v15 = *(_DWORD *)(dword_244048 + 4 * v5);
        break;
      case 1:
      case 2:
        v8 = dword_244048;
LABEL_41:
        if ( dword_242F4C <= 1 )
        {
LABEL_53:
          v15 = *(_DWORD *)(v8 + 4 * v5);
        }
        else
        {
          v17 = v5;
          v18 = 1;
          while ( 1 )
          {
            if ( ++v17 >= dword_242F4C )
            {
              v19 = (int *)v8;
              v17 = 0;
            }
            else
            {
              v19 = (int *)(v8 + 4 * v17);
            }
            v15 = *v19;
            if ( !*(_BYTE *)(*v19 + 97)
              && *(_DWORD *)(v15 + 100) == 1
              && (!*(_BYTE *)(v15 + 640) || *(_BYTE *)(v15 + 641) && *(_BYTE *)(v15 + 643)) )
            {
              break;
            }
            if ( ++v18 == dword_242F4C )
              goto LABEL_53;
          }
        }
        break;
      default:
LABEL_24:
        v15 = *(_DWORD *)(dword_244048 + 4 * v5);
        break;
    }
  }
LABEL_25:
  dword_1AF12C = v15;
  if ( pthread_rwlock_unlock(&rwlock) )
  {
    v23 = _errno_location();
    snprintf(s, 0x800u, "WTF RWLOCK ERROR ON UNLOCK! errno=%d in %s %s():%d", *v23, "cgminer.c", "switch_pools", 5319);
    goto LABEL_56;
  }
  if ( pthread_mutex_unlock(&stru_2440BC) )
  {
    v24 = *_errno_location();
    v25 = 5319;
LABEL_60:
    snprintf(s, 0x800u, "WTF MUTEX ERROR ON UNLOCK! errno=%d in %s %s():%d", v24, "cgminer.c", "switch_pools", v25);
LABEL_56:
    sub_47AB4(3, s, 1);
    sub_54CCC(1, 1);
  }
  off_9E444();
  if ( v3 != (_DWORD *)v15 && (unsigned int)(dword_1AEEB8 - 3) > 1 )
  {
    if ( byte_244080 || byte_1AECC4 || dword_9E320 > 3 )
    {
      snprintf(s, 0x800u, "Switching to pool %d %s", *(_DWORD *)v15, *(const char **)(v15 + 164));
      sub_47AB4(4, s, 0);
    }
    sub_59B44(v3);
  }
  if ( pthread_mutex_lock(&stru_1AF1B8) )
  {
    v20 = *_errno_location();
    v21 = 5327;
    goto LABEL_55;
  }
  pthread_cond_broadcast(&cond);
  if ( pthread_mutex_unlock(&stru_1AF1B8) )
  {
    v24 = *_errno_location();
    v25 = 5329;
    goto LABEL_60;
  }
  return off_9E444();
}
