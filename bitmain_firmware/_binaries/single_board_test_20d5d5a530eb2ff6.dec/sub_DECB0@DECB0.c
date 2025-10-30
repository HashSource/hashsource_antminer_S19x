int __fastcall sub_DECB0(int a1, char *s1, char *a3)
{
  char *v3; // r10
  int v6; // r3
  __int64 v7; // r4
  __int64 v8; // r0
  __int64 v9; // r8
  __int64 v10; // r0
  bool v11; // zf
  int v12; // t1
  unsigned int v13; // r12
  unsigned __int64 v14; // r6
  int v16; // r4
  unsigned __int64 v17; // r4
  __int64 v18; // r0
  __int64 v19; // r6
  __int64 v20; // r0
  bool v21; // zf
  int v22; // t1
  unsigned int v23; // r7
  unsigned __int64 v24; // r8
  int v25; // r2
  int v26; // r0
  int v27; // r1
  __int64 v28; // r4
  __int64 v29; // r0
  __int64 v30; // r6
  __int64 v31; // r0
  bool v32; // zf
  int v33; // t1
  unsigned int v34; // r7
  unsigned __int64 v35; // r8
  __int64 v36; // r4
  __int64 v37; // r0
  __int64 v38; // r6
  __int64 v39; // r0
  bool v40; // zf
  int v41; // t1
  unsigned int v42; // r7
  unsigned __int64 v43; // r8
  int v44; // [sp+Ch] [bp-8h]

  v3 = a3;
  if ( !a3 )
  {
    v44 = 0;
    sub_D0048(52, 104, 102, (int)"crypto/kdf/scrypt.c", 183);
    return v44;
  }
  if ( !strcmp(s1, "pass") )
    return sub_DB850(a1, 4104, v3);
  if ( !strcmp(s1, "hexpass") )
  {
    v25 = (int)v3;
    v26 = a1;
    v27 = 4104;
  }
  else
  {
    if ( !strcmp(s1, "salt") )
      return sub_DB850(a1, 4105, v3);
    if ( strcmp(s1, "hexsalt") )
    {
      v6 = (unsigned __int8)*s1;
      if ( v6 == 78 )
      {
        if ( !s1[1] )
        {
          v16 = (unsigned __int8)*v3;
          if ( *v3 )
          {
            LODWORD(v17) = v16 - 48;
            if ( (unsigned __int8)v17 <= 9u )
            {
              v17 = (int)v17;
              while ( 1 )
              {
                v22 = (unsigned __int8)*++v3;
                v23 = (unsigned __int8)(v22 - 48);
                v24 = v22 - 48;
                if ( !v22 )
                  break;
                if ( v23 <= 9 )
                {
                  LODWORD(v18) = 10 * v17;
                  HIDWORD(v18) = ((5 * v17) >> 32) + ((5 * v17 + (unsigned int)(5 * v17)) >> 32);
                  v19 = v18 + v24;
                  if ( v18 + v24 >= v24 )
                  {
                    v20 = sub_189928(v18, HIDWORD(v18), 10, 0);
                    v21 = HIDWORD(v20) == HIDWORD(v17);
                    HIDWORD(v17) = HIDWORD(v19);
                    if ( v21 )
                      v21 = (_DWORD)v20 == (_DWORD)v17;
                    LODWORD(v17) = v19;
                    if ( v21 )
                      continue;
                  }
                }
                goto LABEL_38;
              }
              if ( v17 >= 2 && ((v17 - 1) & v17) == 0 )
              {
                v44 = 1;
                *(_QWORD *)(*(_DWORD *)(a1 + 20) + 16) = v17;
                return v44;
              }
              return 0;
            }
LABEL_38:
            sub_D0048(52, 105, 108, (int)"crypto/kdf/scrypt.c", 173);
            return 0;
          }
          return v16;
        }
      }
      else
      {
        if ( v6 == 114 )
        {
          if ( s1[1] )
            goto LABEL_9;
          v16 = (unsigned __int8)*v3;
          if ( *v3 )
          {
            LODWORD(v28) = v16 - 48;
            if ( (unsigned __int8)v28 <= 9u )
            {
              v28 = (int)v28;
              while ( 1 )
              {
                v33 = (unsigned __int8)*++v3;
                v34 = (unsigned __int8)(v33 - 48);
                v35 = v33 - 48;
                if ( !v33 )
                  break;
                if ( v34 <= 9 )
                {
                  LODWORD(v29) = 10 * v28;
                  HIDWORD(v29) = ((unsigned __int64)(5 * v28) >> 32)
                               + ((5 * v28 + (unsigned __int64)(unsigned int)(5 * v28)) >> 32);
                  v30 = v29 + v35;
                  if ( v29 + v35 >= v35 )
                  {
                    v31 = sub_189928(v29, HIDWORD(v29), 10, 0);
                    v32 = HIDWORD(v31) == HIDWORD(v28);
                    HIDWORD(v28) = HIDWORD(v30);
                    if ( v32 )
                      v32 = (_DWORD)v31 == (_DWORD)v28;
                    LODWORD(v28) = v30;
                    if ( v32 )
                      continue;
                  }
                }
                goto LABEL_38;
              }
              if ( v28 )
              {
                v44 = 1;
                *(_QWORD *)(*(_DWORD *)(a1 + 20) + 24) = v28;
                return v44;
              }
              return 0;
            }
            goto LABEL_38;
          }
          return v16;
        }
        if ( v6 == 112 && !s1[1] )
        {
          if ( !*v3 )
            return 0;
          LODWORD(v36) = (unsigned __int8)*v3 - 48;
          if ( (unsigned __int8)v36 <= 9u )
          {
            v36 = (int)v36;
            while ( 1 )
            {
              v41 = (unsigned __int8)*++v3;
              v42 = (unsigned __int8)(v41 - 48);
              v43 = v41 - 48;
              if ( !v41 )
                break;
              if ( v42 <= 9 )
              {
                LODWORD(v37) = 10 * v36;
                HIDWORD(v37) = ((unsigned __int64)(5 * v36) >> 32)
                             + ((5 * v36 + (unsigned __int64)(unsigned int)(5 * v36)) >> 32);
                v38 = v37 + v43;
                if ( v37 + v43 >= v43 )
                {
                  v39 = sub_189928(v37, HIDWORD(v37), 10, 0);
                  v40 = HIDWORD(v39) == HIDWORD(v36);
                  HIDWORD(v36) = HIDWORD(v38);
                  if ( v40 )
                    v40 = (_DWORD)v39 == (_DWORD)v36;
                  LODWORD(v36) = v38;
                  if ( v40 )
                    continue;
                }
              }
              goto LABEL_38;
            }
            if ( v36 )
            {
              v44 = 1;
              *(_QWORD *)(*(_DWORD *)(a1 + 20) + 32) = v36;
              return v44;
            }
            return 0;
          }
          goto LABEL_38;
        }
      }
LABEL_9:
      v44 = strcmp(s1, "maxmem_bytes");
      if ( v44 )
      {
        sub_D0048(52, 104, 103, (int)"crypto/kdf/scrypt.c", 212);
        return -2;
      }
      else if ( *v3 )
      {
        LODWORD(v7) = (unsigned __int8)*v3 - 48;
        if ( (unsigned __int8)v7 <= 9u )
        {
          v7 = (int)v7;
          while ( 1 )
          {
            v12 = (unsigned __int8)*++v3;
            v13 = (unsigned __int8)(v12 - 48);
            v14 = v12 - 48;
            if ( !v12 )
              break;
            if ( v13 <= 9 )
            {
              LODWORD(v8) = 10 * v7;
              HIDWORD(v8) = ((unsigned __int64)(5 * v7) >> 32)
                          + ((5 * v7 + (unsigned __int64)(unsigned int)(5 * v7)) >> 32);
              v9 = v8 + v14;
              if ( v8 + v14 >= v14 )
              {
                v10 = sub_189928(v8, HIDWORD(v8), 10, 0);
                v11 = HIDWORD(v10) == HIDWORD(v7);
                HIDWORD(v7) = HIDWORD(v9);
                if ( v11 )
                  v11 = (_DWORD)v10 == (_DWORD)v7;
                LODWORD(v7) = v9;
                if ( v11 )
                  continue;
              }
            }
            goto LABEL_38;
          }
          if ( v7 )
          {
            v44 = 1;
            *(_QWORD *)(*(_DWORD *)(a1 + 20) + 40) = v7;
          }
          return v44;
        }
        goto LABEL_38;
      }
      return v44;
    }
    v25 = (int)v3;
    v26 = a1;
    v27 = 4105;
  }
  return sub_DB880(v26, v27, v25);
}
