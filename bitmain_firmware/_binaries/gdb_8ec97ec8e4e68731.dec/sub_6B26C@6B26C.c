char *__fastcall sub_6B26C(int a1, int a2, int a3, int a4, int *a5, unsigned __int8 a6)
{
  char *result; // r0
  int *v10; // r5
  int *v11; // r7
  int v12; // r4
  int v13; // t1
  _BYTE *v14; // r3
  int v15; // r3
  int v16; // r9
  int v17; // r11
  int v18; // r2
  char *v19; // r1
  unsigned int v20; // r6
  size_t v21; // r0
  char *v22; // r11
  bool v23; // zf
  int v24; // r2
  _BOOL4 v25; // r1
  char *v26; // r6
  int v27; // r9
  const char *v28; // r4
  size_t v29; // r0
  unsigned int v30; // r9
  int v31; // r11
  int v32; // r6
  unsigned int v33; // r3
  int v34; // r3
  int v35; // r2
  int v36; // r3
  size_t v37; // r0
  char *v38; // r2
  size_t v39; // r0
  size_t v40; // r0
  int v41; // r1
  char v42; // r3
  int v43; // [sp+10h] [bp-2Ch]
  int v44; // [sp+14h] [bp-28h]
  char *v45; // [sp+18h] [bp-24h]
  char *v47; // [sp+28h] [bp-14h]
  int v48; // [sp+2Ch] [bp-10h]
  char *v49; // [sp+34h] [bp-8h]
  char *v50; // [sp+34h] [bp-8h]

  v43 = sub_1B7250(a2);
  v44 = *(_DWORD *)(*(_DWORD *)(a2 + 36) + 124);
  result = (char *)((int (*)(void))loc_16A6AC)();
  v47 = result;
  if ( a4 > 0 )
  {
    v10 = a5;
    v45 = "";
    v11 = &a5[a4];
    while ( 1 )
    {
      v13 = *v10++;
      v12 = v13;
      v14 = *(_BYTE **)(v13 + 4);
      if ( !v14 || !*v14 )
        goto LABEL_34;
      result = (char *)(*(int (**)(void))(*(_DWORD *)(*(_DWORD *)(a2 + 36) + 4) + 288))();
      if ( result )
      {
        result = (char *)((int (__fastcall *)(int))loc_16CB74)(v43);
        if ( !result )
          goto LABEL_34;
        result = (char *)((int (__fastcall *)(int, int, int))loc_16CBC0)(v43, a2, v12);
        if ( v10 == v11 )
          return result;
      }
      else
      {
        if ( a3 != 1 )
          goto LABEL_7;
        if ( *(char ***)(v12 + 16) == &off_4708A8 && (*(_DWORD *)(v12 + 12) & 8) != 0 )
        {
          v30 = *(_DWORD *)(v12 + 8);
          if ( !v30 )
            goto LABEL_34;
          v31 = *(_DWORD *)(a2 + 36);
          v32 = *(_DWORD *)(v31 + 100);
          if ( !v32 )
            goto LABEL_34;
          while ( 1 )
          {
            if ( (*(_DWORD *)(v32 + 20) & 1) != 0 )
            {
              v33 = *(_DWORD *)(v32 + 28);
              if ( v33 <= v30 && v33 + *(_DWORD *)(v32 + 36) > v30 )
                break;
            }
            v32 = *(_DWORD *)(v32 + 12);
            if ( !v32 )
              goto LABEL_34;
          }
          if ( strncmp(*(const char **)v32, ".plt", 4u) )
          {
            result = (char *)sub_2AD7AC(v31, ".plt");
            if ( result )
              goto LABEL_34;
          }
          v37 = strlen(*(const char **)(v12 + 4));
          result = (char *)sub_6A570(a1, *(char **)(v12 + 4), v37, a6, v30, 7u, v32, a2);
          v38 = result;
          if ( !result )
            goto LABEL_34;
          *((_DWORD *)result + 7) = v45;
          if ( !v47 )
            goto LABEL_34;
LABEL_88:
          result = (char *)((int (__fastcall *)(int, int, char *))loc_16A6F8)(v43, v12, v38);
          goto LABEL_34;
        }
        if ( v44 )
        {
          if ( v10 == v11 )
            return result;
        }
        else
        {
LABEL_7:
          v15 = *(_DWORD *)(v12 + 12);
          if ( (v15 & 0x4000) != 0 )
          {
            v28 = *(const char **)(v12 + 4);
            v29 = strlen(v28);
            result = (char *)sub_C1930(v28, v29 + 1, *(_DWORD *)(*(_DWORD *)(a2 + 40) + 44));
            v45 = result;
            if ( v10 == v11 )
              return result;
          }
          else
          {
            v16 = *(_DWORD *)(v12 + 12) & 0x100;
            if ( (v15 & 0x100) != 0 || (v15 & 0x800083) == 0 )
              goto LABEL_34;
            v17 = *(_DWORD *)(v12 + 16);
            result = (char *)&off_470950;
            v48 = *(_DWORD *)(v12 + 8) + *(_DWORD *)(v17 + 28);
            if ( (char **)v17 == &off_470950 )
            {
              v19 = *(char **)(v12 + 4);
              if ( a3 == 2 )
              {
                v39 = strlen(*(const char **)(v12 + 4));
                v20 = 6;
                result = (char *)sub_6A570(a1, *(char **)(v12 + 4), v39, a6, v48, 6u, (int)&off_470950, a2);
                v22 = result;
                if ( !result )
                  goto LABEL_34;
                goto LABEL_24;
              }
              v34 = *(_DWORD *)(v12 + 40);
              switch ( v34 )
              {
                case -255:
                  v20 = 1;
                  goto LABEL_82;
                case -254:
                  v20 = 4;
                  goto LABEL_82;
                case -256:
                  v20 = 5;
LABEL_82:
                  if ( *v19 == 46 )
                    goto LABEL_34;
                  v40 = strlen(*(const char **)(v12 + 4));
                  result = (char *)sub_6A570(a1, *(char **)(v12 + 4), v40, a6, v48, v20, (int)&off_470950, a2);
                  v22 = result;
                  if ( !result )
                    goto LABEL_34;
                  v16 = 0;
LABEL_23:
                  v24 = *(_DWORD *)(v12 + 28);
                  v22[32] |= 0x80u;
                  *((_DWORD *)v22 + 6) = v24;
LABEL_24:
                  *((_DWORD *)v22 + 7) = v45;
                  if ( v47 )
                    ((void (__fastcall *)(int, int, char *))loc_16A6F8)(v43, v12, v22);
                  v50 = *(char **)(v12 + 4);
                  result = strchr(v50, 64);
                  if ( result )
                  {
                    v25 = result[1] == 64;
                    if ( v50 >= result )
                      v25 = 0;
                    if ( v25 )
                      result = (char *)sub_6A570(a1, v50, result - v50, 1, v48, v20, *(_DWORD *)(v12 + 16), a2);
                  }
                  if ( !v16 )
                    goto LABEL_34;
                  v26 = *(char **)(v12 + 4);
                  result = (char *)strlen(v26);
                  if ( (unsigned int)result <= 4 )
                    goto LABEL_34;
                  v27 = (int)(result - 4);
                  result = (char *)strcmp(&result[(_DWORD)v26 - 4], "@plt");
                  if ( result )
                    goto LABEL_34;
                  result = (char *)sub_6A570(a1, v26, v27, 1, v48, 7u, *(_DWORD *)(v12 + 16), a2);
                  v38 = result;
                  if ( !result )
                    goto LABEL_34;
                  result = v45;
                  v41 = *((_DWORD *)v22 + 6);
                  v42 = v38[32] | 0x90;
                  *((_DWORD *)v38 + 7) = v45;
                  *((_DWORD *)v38 + 6) = v41;
                  v38[32] = v42;
                  if ( !v47 )
                    goto LABEL_34;
                  goto LABEL_88;
              }
              v20 = 6;
            }
            else
            {
              v18 = *(_DWORD *)(v17 + 20);
              if ( (v18 & 0x10) != 0 )
              {
                v19 = *(char **)(v12 + 4);
                if ( (v15 & 0x800082) != 0 )
                {
                  if ( (v15 & 0x400000) != 0 )
                    v20 = 2;
                  else
                    v20 = 1;
                }
                else
                {
                  v35 = (unsigned __int8)*v19;
                  if ( v35 == 46 )
                  {
                    if ( v19[1] == 76 && (v15 & 0x200000) == 0 )
                      goto LABEL_34;
                  }
                  else
                  {
                    if ( v35 == 36 )
                      v36 = *(_DWORD *)(v12 + 12) & 1;
                    else
                      v36 = 0;
                    if ( v36 && v19[1] == 76 )
                      goto LABEL_34;
                  }
                  v20 = 8;
                }
              }
              else
              {
                if ( (v18 & 1) == 0 )
                  goto LABEL_34;
                v19 = *(char **)(v12 + 4);
                if ( (v15 & 0x800082) != 0 )
                {
                  if ( (v18 & 2) != 0 )
                    v20 = 4;
                  else
                    v20 = 5;
                }
                else
                {
                  v20 = *(_DWORD *)(v12 + 12) & 1;
                  if ( (v15 & 1) != 0 )
                  {
                    if ( (v18 & 2) != 0 )
                      v20 = 9;
                    else
                      v20 = 10;
                  }
                }
              }
            }
            v49 = v19;
            v21 = strlen(v19);
            result = (char *)sub_6A570(a1, v49, v21, a6, v48, v20, v17, a2);
            v22 = result;
            if ( result )
            {
              v23 = a3 == 2;
              if ( a3 == 2 )
                v23 = v20 == 1;
              v16 = v23;
              if ( a3 != 2 )
                goto LABEL_23;
              goto LABEL_24;
            }
LABEL_34:
            if ( v10 == v11 )
              return result;
          }
        }
      }
    }
  }
  return result;
}
