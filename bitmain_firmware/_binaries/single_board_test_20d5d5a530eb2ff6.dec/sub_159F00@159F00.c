size_t __fastcall sub_159F00(_DWORD *a1, int a2, unsigned int a3, char *a4, int a5)
{
  int v9; // r10
  int (__fastcall *v10)(_DWORD *, int, unsigned int, char *, int); // r6
  size_t result; // r0
  bool v12; // zf
  unsigned int *v13; // r6
  unsigned int v14; // r2
  unsigned int v15; // r3
  bool v16; // cc
  int v17; // r3
  int v18; // r1
  int v19; // r4
  bool v20; // cc
  int v21; // r4
  unsigned int *v22; // r1
  const char *v23; // r1
  char *v24; // r0
  _DWORD *v25; // r3
  const char *v26; // r0
  int v27; // r4
  int v28; // r5
  int v29; // r3

  if ( a1 )
  {
    sub_10C554((pthread_rwlock_t *)global_engine_lock);
    __dmb(0xBu);
    v9 = a1[20];
    __dmb(0xBu);
    sub_10C564((pthread_rwlock_t *)global_engine_lock);
    v10 = (int (__fastcall *)(_DWORD *, int, unsigned int, char *, int))a1[14];
    if ( v9 <= 0 )
    {
      sub_D0048(38, 142, 130, (int)"crypto/engine/eng_ctrl.c", 137);
      return 0;
    }
    else if ( a2 == 10 )
    {
      result = a1[14];
      if ( v10 )
        return 1;
    }
    else if ( a2 < 10 || a2 > 18 )
    {
      if ( v10 )
        return v10(a1, a2, a3, a4, a5);
      sub_D0048(38, 142, 120, (int)"crypto/engine/eng_ctrl.c", 171);
      return 0;
    }
    else if ( v10 )
    {
      result = a1[19] & 2;
      if ( result )
        return v10(a1, a2, a3, a4, a5);
      if ( a2 == 11 )
      {
        v25 = (_DWORD *)a1[18];
        if ( v25 && *v25 && v25[1] )
          return *v25;
      }
      else
      {
        v12 = a2 == 17;
        if ( a2 != 17 )
          v12 = (a2 & 0xFFFFFFFD) == 13;
        if ( !v12 || a4 )
        {
          v13 = (unsigned int *)a1[18];
          if ( a2 == 13 )
          {
            if ( v13 && *v13 && (v26 = (const char *)v13[1], v27 = a1[18], v28 = 0, v26) )
            {
              while ( strcmp(v26, a4) )
              {
                v29 = *(_DWORD *)(v27 + 16);
                ++v28;
                v27 += 16;
                if ( v29 )
                {
                  v26 = *(const char **)(v27 + 4);
                  if ( v26 )
                    continue;
                }
                goto LABEL_62;
              }
              return v13[4 * v28];
            }
            else
            {
LABEL_62:
              sub_D0048(38, 172, 137, (int)"crypto/engine/eng_ctrl.c", 87);
              return -1;
            }
          }
          else
          {
            if ( !v13 )
              goto LABEL_34;
            v14 = *v13;
            if ( *v13 )
            {
              v15 = v13[1];
              v16 = v15 != 0;
              if ( v15 )
                v16 = a3 > v14;
              if ( v16 )
              {
                v17 = a1[18];
                v18 = 0;
                do
                {
                  v14 = *(_DWORD *)(v17 + 16);
                  v21 = v17;
                  ++v18;
                  v17 += 16;
                  if ( !v14 )
                    break;
                  v19 = *(_DWORD *)(v21 + 20);
                  v20 = v19 != 0;
                  if ( v19 )
                    v20 = a3 > v14;
                }
                while ( v20 );
              }
              else
              {
                v18 = 0;
              }
            }
            else
            {
              v18 = 0;
            }
            if ( a3 == v14 )
            {
              v22 = &v13[4 * v18];
              switch ( a2 )
              {
                case 12:
                  if ( v22[4] )
                  {
                    if ( v22[5] )
                      return v22[4];
                  }
                  return result;
                case 14:
                  v24 = (char *)v22[1];
                  goto LABEL_40;
                case 15:
                  v23 = (const char *)v22[1];
                  goto LABEL_39;
                case 16:
                  v24 = (char *)v22[2];
                  if ( !v24 )
                    v24 = &byte_1A4198;
                  goto LABEL_40;
                case 17:
                  v23 = (const char *)v22[2];
                  if ( !v23 )
                    v23 = &byte_1A4198;
LABEL_39:
                  v24 = strcpy(a4, v23);
LABEL_40:
                  result = j_strlen(v24);
                  break;
                case 18:
                  result = v22[3];
                  break;
              }
            }
            else
            {
LABEL_34:
              sub_D0048(38, 172, 138, (int)"crypto/engine/eng_ctrl.c", 98);
              return -1;
            }
          }
        }
        else
        {
          sub_D0048(38, 172, 67, (int)"crypto/engine/eng_ctrl.c", 79);
          return -1;
        }
      }
    }
    else
    {
      sub_D0048(38, 142, 120, (int)"crypto/engine/eng_ctrl.c", 158);
      return -1;
    }
  }
  else
  {
    sub_D0048(38, 142, 67, (int)"crypto/engine/eng_ctrl.c", 129);
    return 0;
  }
  return result;
}
