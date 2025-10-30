int __fastcall sub_34178(int a1)
{
  int v2; // r9
  unsigned __int8 *v3; // r6
  int v4; // lr
  int v5; // r7
  int v6; // r11
  int v7; // r12
  int v8; // r1
  int *v9; // r2
  int v10; // r12
  int v11; // r0
  int v12; // t1
  int v13; // r3
  int v14; // r0
  _DWORD *v15; // r1
  unsigned __int8 *v16; // r5
  int v18; // r10
  int v19; // r8
  int v20; // r9
  int v21; // r3
  int v22; // r3
  int v23; // r12
  int *v24; // r0
  int *v25; // r0
  int v26; // r3
  int v27; // r12
  char s[2052]; // [sp+10h] [bp-804h] BYREF

  if ( pthread_mutex_lock(&stru_7453C) )
  {
    v22 = *_errno_location();
    v23 = 5243;
LABEL_55:
    snprintf(s, 0x800u, "WTF MUTEX ERROR ON LOCK! errno=%d in %s %s():%d", v22, "cgminer.c", "switch_pools", v23);
    goto LABEL_56;
  }
  v2 = pthread_rwlock_wrlock(&rwlock);
  if ( v2 )
  {
    v24 = _errno_location();
    snprintf(s, 0x800u, "WTF WRLOCK ERROR ON LOCK! errno=%d in %s %s():%d", *v24, "cgminer.c", "switch_pools", 5243);
    goto LABEL_56;
  }
  v3 = (unsigned __int8 *)dword_69060;
  v4 = dword_68FD0;
  v5 = *(_DWORD *)dword_69060;
  if ( a1 )
  {
    v6 = *(_DWORD *)(a1 + 4);
    if ( v6 )
    {
      v7 = dword_733CC;
      if ( dword_733CC > 0 )
      {
        v8 = dword_744C8;
        v9 = (int *)dword_744C8;
        v10 = dword_744C8 + 4 * dword_733CC;
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
                goto LABEL_51;
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
          goto LABEL_22;
      }
    }
    switch ( dword_68FD0 )
    {
      case 0:
      case 3:
      case 4:
        goto LABEL_13;
      case 1:
      case 2:
LABEL_37:
        v8 = dword_744C8;
LABEL_38:
        if ( *(_BYTE *)(a1 + 97) )
          goto LABEL_41;
        v16 = *(unsigned __int8 **)(v8 + 4 * *(_DWORD *)a1);
        break;
      default:
        goto LABEL_22;
    }
  }
  else
  {
    switch ( dword_68FD0 )
    {
      case 0:
      case 3:
      case 4:
LABEL_13:
        v7 = dword_733CC;
LABEL_14:
        if ( v7 <= 0 )
          goto LABEL_22;
        do
        {
LABEL_15:
          v14 = sub_2B7BC(v2);
          if ( !*(_BYTE *)(v14 + 97) && *(_DWORD *)(v14 + 100) == 1 && !sub_2B684((unsigned __int8 *)v14) )
          {
            v16 = *(unsigned __int8 **)(dword_744C8 + 4 * *v15);
            goto LABEL_23;
          }
          ++v2;
        }
        while ( dword_733CC > v2 );
        v16 = *(unsigned __int8 **)(dword_744C8 + 4 * v5);
        break;
      case 1:
      case 2:
        v8 = dword_744C8;
LABEL_41:
        v18 = dword_733CC;
        if ( dword_733CC <= 1 )
        {
LABEL_51:
          v16 = *(unsigned __int8 **)(v8 + 4 * v5);
        }
        else
        {
          v19 = v5;
          v20 = 1;
          while ( 1 )
          {
            if ( ++v19 >= v18 )
            {
              v21 = v8;
              v19 = 0;
            }
            else
            {
              v21 = v8 + 4 * v19;
            }
            v16 = *(unsigned __int8 **)v21;
            if ( !*(_BYTE *)(*(_DWORD *)v21 + 97) && *((_DWORD *)v16 + 25) == 1 && !sub_2B684(v16) )
              break;
            if ( ++v20 == v18 )
              goto LABEL_51;
          }
        }
        break;
      default:
LABEL_22:
        v16 = *(unsigned __int8 **)(dword_744C8 + 4 * v5);
        break;
    }
  }
LABEL_23:
  dword_69060 = (int)v16;
  if ( pthread_rwlock_unlock(&rwlock) )
  {
    v25 = _errno_location();
    snprintf(s, 0x800u, "WTF RWLOCK ERROR ON UNLOCK! errno=%d in %s %s():%d", *v25, "cgminer.c", "switch_pools", 5324);
    goto LABEL_56;
  }
  if ( pthread_mutex_unlock(&stru_7453C) )
  {
    v26 = *_errno_location();
    v27 = 5324;
LABEL_60:
    snprintf(s, 0x800u, "WTF MUTEX ERROR ON UNLOCK! errno=%d in %s %s():%d", v26, "cgminer.c", "switch_pools", v27);
LABEL_56:
    sub_20F58(3, s, 1);
    sub_2E6B0(1, 1);
  }
  off_67ED8();
  if ( v3 != v16 && (unsigned int)(dword_68FD0 - 3) > 1 )
  {
    if ( (byte_74500 || byte_68BD4 || dword_67DB4 > 3)
      && ((snprintf(s, 0x800u, "Switching to pool %d %s", *(_DWORD *)v16, *((const char **)v16 + 41)),
           sub_20F58(4, s, 0),
           byte_74500)
       || byte_68BD4)
      || dword_67DB4 > 3 )
    {
      snprintf(
        s,
        0x800u,
        "last_pool->pool_no = %d, last_pool->pool->rpc_url = %s",
        *(_DWORD *)v3,
        *((const char **)v3 + 41));
      sub_20F58(4, s, 0);
    }
    sub_33AB4(v3);
  }
  if ( pthread_mutex_lock(&stru_6910C) )
  {
    v22 = *_errno_location();
    v23 = 5333;
    goto LABEL_55;
  }
  pthread_cond_broadcast(&cond);
  if ( pthread_mutex_unlock(&stru_6910C) )
  {
    v26 = *_errno_location();
    v27 = 5335;
    goto LABEL_60;
  }
  return off_67ED8();
}
