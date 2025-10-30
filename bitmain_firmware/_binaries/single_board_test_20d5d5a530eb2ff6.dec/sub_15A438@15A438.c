bool __fastcall sub_15A438(_DWORD *a1, int a2, unsigned int a3, char *a4)
{
  int *v8; // r4
  int v9; // r5
  int v11; // r11
  void *v12; // r10
  void **v13; // r0
  int v14; // r3
  _DWORD *v15; // r0
  int v16; // r1
  int v17; // r8
  unsigned int v18; // r5
  int v19; // r0
  void *v20; // r7
  int v21; // r3
  int v22; // r2
  char *v23; // r5
  char *v24; // r5
  int v25; // r7
  int (__fastcall *v26)(int); // r3
  int v27; // r7
  char *v28; // r6
  _DWORD *v29; // r0
  void *v30; // [sp+10h] [bp-84h] BYREF
  int v31; // [sp+14h] [bp-80h] BYREF
  int v32; // [sp+18h] [bp-7Ch] BYREF
  int v33; // [sp+1Ch] [bp-78h] BYREF
  _BYTE dest[112]; // [sp+20h] [bp-74h] BYREF

  if ( dword_21FEE0 < 0 )
  {
    v11 = sub_DBC60(0xAu, 0, 0, 0, 0, (int)&loc_15A3F0 + 1);
    if ( v11 == -1 )
    {
      sub_D0048(38, 181, 144, (int)"crypto/engine/eng_dyn.c", 210);
LABEL_64:
      v9 = 0;
      sub_D0048(38, 180, 112, (int)"crypto/engine/eng_dyn.c", 295);
      return v9;
    }
    sub_10C554((pthread_rwlock_t *)global_engine_lock);
    if ( dword_21FEE0 < 0 )
      dword_21FEE0 = v11;
    sub_10C564((pthread_rwlock_t *)global_engine_lock);
  }
  v8 = (int *)sub_CE128((int)a1);
  if ( v8 )
    goto LABEL_3;
  v12 = sub_E0740((void *)0x2C);
  if ( !v12 )
  {
    sub_D0048(38, 183, 65, (int)"crypto/engine/eng_dyn.c", 160);
    goto LABEL_64;
  }
  v13 = sub_10BFCC();
  *((_DWORD *)v12 + 10) = v13;
  if ( !v13 )
  {
    sub_D0048(38, 183, 65, (int)"crypto/engine/eng_dyn.c", 165);
    CRYPTO_free(v12);
    goto LABEL_64;
  }
  *((_DWORD *)v12 + 9) = 1;
  *((_DWORD *)v12 + 7) = "v_check";
  *((_DWORD *)v12 + 8) = "bind_engine";
  sub_10C554((pthread_rwlock_t *)global_engine_lock);
  v14 = sub_CE128((int)a1);
  if ( v14 )
  {
    v8 = (int *)v14;
    sub_10C564((pthread_rwlock_t *)global_engine_lock);
    sub_10BDB4(*((void ***)v12 + 10));
    CRYPTO_free(v12);
    goto LABEL_3;
  }
  if ( !sub_CE120((int)a1) )
  {
    sub_10C564((pthread_rwlock_t *)global_engine_lock);
    sub_10BDB4(*((void ***)v12 + 10));
    CRYPTO_free(v12);
    goto LABEL_64;
  }
  v8 = (int *)v12;
  sub_10C564((pthread_rwlock_t *)global_engine_lock);
  CRYPTO_free(0);
LABEL_3:
  if ( *v8 )
  {
    v9 = 0;
    sub_D0048(38, 180, 100, (int)"crypto/engine/eng_dyn.c", 301);
  }
  else
  {
    switch ( a2 )
    {
      case 200:
        if ( a4 && *a4 )
        {
          CRYPTO_free((void *)v8[3]);
          v24 = sub_E9E3C(a4);
          v8[3] = (int)v24;
          return v24 != 0;
        }
        else
        {
          v9 = 0;
          CRYPTO_free((void *)v8[3]);
          v8[3] = 0;
        }
        return v9;
      case 201:
        v21 = a3;
        v9 = 1;
        if ( a3 )
          v21 = 1;
        v8[4] = v21;
        return v9;
      case 202:
        if ( a4 && *a4 )
        {
          CRYPTO_free((void *)v8[5]);
          v23 = sub_E9E3C(a4);
          v8[5] = (int)v23;
          return v23 != 0;
        }
        else
        {
          v9 = 0;
          CRYPTO_free((void *)v8[5]);
          v8[5] = 0;
        }
        return v9;
      case 203:
        if ( a3 > 2 )
        {
          v22 = 330;
          goto LABEL_36;
        }
        v8[6] = a3;
        return 1;
      case 204:
        if ( a3 > 2 )
        {
          v22 = 339;
          goto LABEL_36;
        }
        v8[9] = a3;
        return 1;
      case 205:
        if ( a4 && *a4 )
        {
          v28 = sub_E9E3C(a4);
          if ( v28 )
          {
            v9 = sub_10BD3C((int *)v8[10], (int)v28);
            if ( v9 )
              return 1;
            CRYPTO_free(v28);
            sub_D0048(38, 180, 65, (int)"crypto/engine/eng_dyn.c", 358);
          }
          else
          {
            v9 = 0;
            sub_D0048(38, 180, 65, (int)"crypto/engine/eng_dyn.c", 353);
          }
        }
        else
        {
          v22 = 347;
LABEL_36:
          sub_D0048(38, 180, 143, (int)"crypto/engine/eng_dyn.c", v22);
          return 0;
        }
        return v9;
      case 206:
        v15 = sub_C1844();
        v9 = (int)v15;
        *v8 = (int)v15;
        if ( !v15 )
          return v9;
        v16 = v8[3];
        if ( !v16 )
        {
          v9 = v8[5];
          if ( !v9 )
            return v9;
          sub_C19C4(v15, 2, 2);
          v16 = sub_C1D04((_DWORD *)*v8, v8[5]);
          v8[3] = v16;
        }
        if ( v8[9] == 2 )
          goto LABEL_18;
        if ( sub_C1AF4((_DWORD *)*v8, v16, 0, 0) )
        {
LABEL_47:
          v25 = sub_C1958(*v8, v8[8]);
          v8[2] = v25;
          if ( !v25 )
          {
            v9 = 0;
            sub_C1788((_DWORD *)*v8);
            *v8 = 0;
            sub_D0048(38, 182, 104, (int)"crypto/engine/eng_dyn.c", 447);
            return v9;
          }
          v9 = v8[4];
          if ( !v9 )
          {
            v26 = (int (__fastcall *)(int))sub_C1958(*v8, v8[7]);
            v8[1] = (int)v26;
            if ( !v26
              || (unsigned int)v26(196608) < 0x30000
              || (sub_D1260(), v27 = sub_C1958(*v8, (int)"EVP_PKEY_get_base_id"), sub_D128C(), v27) )
            {
              v29 = (_DWORD *)*v8;
              v8[2] = 0;
              v8[1] = 0;
              sub_C1788(v29);
              *v8 = 0;
              sub_D0048(38, 182, 145, (int)"crypto/engine/eng_dyn.c", 474);
              return v9;
            }
          }
          memcpy(dest, a1, sizeof(dest));
          v30 = sub_CE1D8();
          sub_E0714(&v31, &v32, &v33);
          sub_CDF34(a1);
          if ( !sub_CE1E4(a1, v8[2], 1) || !((int (__fastcall *)(_DWORD *, int, void **))v8[2])(a1, v8[5], &v30) )
          {
            v9 = 0;
            sub_CE2BC((int)a1, 1);
            v8[2] = 0;
            v8[1] = 0;
            sub_C1788((_DWORD *)*v8);
            *v8 = 0;
            sub_D0048(38, 182, 109, (int)"crypto/engine/eng_dyn.c", 507);
            memcpy(a1, dest, 0x70u);
            return v9;
          }
          if ( v8[6] > 0 )
          {
            v9 = sub_CE59C((int)a1);
            if ( !v9 )
            {
              if ( v8[6] > 1 )
              {
                sub_D0048(38, 182, 103, (int)"crypto/engine/eng_dyn.c", 524);
                return v9;
              }
              sub_D00F0();
            }
          }
          return 1;
        }
        if ( v8[9] )
        {
LABEL_18:
          v17 = sub_10C010(v8[10]);
          if ( v17 > 0 )
          {
            v18 = 0;
            do
            {
              sub_10C01C((_DWORD *)v8[10], v18++);
              v19 = sub_C1CBC((_DWORD *)*v8, v8[3]);
              v20 = (void *)v19;
              if ( !v19 )
                break;
              if ( sub_C1AF4((_DWORD *)*v8, v19, 0, 0) )
              {
                CRYPTO_free(v20);
                goto LABEL_47;
              }
              CRYPTO_free(v20);
            }
            while ( v17 != v18 );
          }
        }
        v9 = 0;
        sub_D0048(38, 182, 132, (int)"crypto/engine/eng_dyn.c", 434);
        sub_C1788((_DWORD *)*v8);
        *v8 = 0;
        break;
      default:
        v9 = 0;
        sub_D0048(38, 180, 119, (int)"crypto/engine/eng_dyn.c", 366);
        return v9;
    }
  }
  return v9;
}
