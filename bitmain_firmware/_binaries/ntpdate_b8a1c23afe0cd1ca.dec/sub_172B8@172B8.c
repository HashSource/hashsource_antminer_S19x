int __fastcall sub_172B8(int a1, int a2, int a3, int a4, int a5, _DWORD *a6, int a7, int a8, int a9, int *a10)
{
  int result; // r0
  int v12; // r11
  int v13; // r0
  _DWORD *v14; // r3
  _BOOL4 v15; // r2
  int v16; // r7
  unsigned int v17; // r11
  int v18; // r6
  int v19; // r8
  int v20; // r0
  int v21; // r7
  int v22; // r9
  int v23; // r11
  int v24; // r0
  int v25; // r1
  _DWORD *v26; // r5
  bool v27; // zf
  int v28; // r4
  int v29; // r3
  int v30; // r2
  int v31; // r3
  _BYTE *v32; // lr
  int v33; // r0
  int v34; // r3
  int v35; // lr
  __int64 v36; // r0
  int v37; // r12
  int v38; // r0
  int v39; // r3
  const char *v40; // r0
  const char *v41; // r0
  const char *v42; // r3
  const char *v43; // r8
  const char *v44; // r2
  const char *v45; // r6
  const char *v46; // r12
  const char *v47; // r1
  const char *v48; // r7
  const char *v49; // r9
  const char *v50; // r11
  int v51; // r0
  int v52; // r9
  size_t v53; // r8
  char *v54; // r0
  char *v55; // r7
  int v56; // r3
  int v57; // r0
  const char *v58; // r3
  const char *v59; // lr
  const char *v60; // r2
  const char *v61; // r4
  const char *v62; // r12
  const char *v63; // r6
  const char *v64; // r1
  const char *v65; // r8
  const char *v66; // r9
  const char *v67; // r0
  int v68; // r3
  int v69; // r2
  void *v70; // r0
  int v71; // r0
  bool v72; // zf
  int v75; // [sp+30h] [bp-16Ch]
  unsigned __int8 *v77; // [sp+3Ch] [bp-160h]
  pthread_mutex_t *mutex; // [sp+54h] [bp-148h]
  int v79; // [sp+58h] [bp-144h]
  int v80; // [sp+58h] [bp-144h]
  const char *v81; // [sp+5Ch] [bp-140h]
  const char *v82; // [sp+5Ch] [bp-140h]
  _BYTE v83[8]; // [sp+60h] [bp-13Ch] BYREF
  _BYTE v84[48]; // [sp+68h] [bp-134h] BYREF
  __int64 v85; // [sp+98h] [bp-104h]
  _BYTE v86[16]; // [sp+D0h] [bp-CCh] BYREF
  int v87; // [sp+E0h] [bp-BCh]
  __int64 v88; // [sp+100h] [bp-9Ch]
  _BYTE v89[24]; // [sp+13Ch] [bp-60h] BYREF
  _BYTE v90[64]; // [sp+154h] [bp-48h] BYREF

  v27 = a1 == 0;
  result = 768;
  v77 = (unsigned __int8 *)a9;
  if ( !v27 && *(_DWORD *)a1 != 1281586296 )
    sub_1073C();
  if ( !a2 )
    sub_1073C();
  if ( !a3 )
    sub_1073C();
  if ( !a4 )
    sub_1073C();
  if ( !a9 )
    sub_1073C();
  if ( a1 )
  {
    if ( *(_DWORD *)(a2 + 4) >= *(_DWORD *)(a1 + 12) )
      sub_1073C();
    if ( *(_DWORD *)(a3 + 4) >= *(_DWORD *)(a1 + 20) )
      sub_1073C();
    result = sub_17228(a1, a4);
    if ( result )
    {
      if ( a6 )
        v77 = (unsigned __int8 *)sub_1103C(a6, a7, a8, a9);
      mutex = (pthread_mutex_t *)(a1 + 28);
      v90[0] = 0;
      v89[0] = 0;
      if ( pthread_mutex_lock((pthread_mutex_t *)(a1 + 28)) )
        sub_150D0("./../lib/isc/log.c", 1452, "((pthread_mutex_lock(((&lctx->lock))) == 0) ? 0 : 34) == 0");
      v12 = *(_DWORD *)(a1 + 52);
      v13 = 0;
      *(_BYTE *)(a1 + 56) = 0;
      v75 = v12;
      v14 = *(_DWORD **)(*(_DWORD *)(v12 + 16) + 8 * *(_DWORD *)(a2 + 4));
      v15 = v14 == 0;
      while ( 1 )
      {
        if ( (v15 & (v13 ^ 1)) != 0 )
        {
          v14 = **(_DWORD ***)(v75 + 16);
          if ( !v14 )
            v14 = &unk_33374;
        }
        v26 = (_DWORD *)v14[3];
        v27 = *v14 == a3;
        if ( *v14 != a3 )
          v27 = *v14 == 0;
        if ( !v27 )
        {
          v25 = v13;
          goto LABEL_32;
        }
        v28 = v14[1];
        v29 = *(_DWORD *)(v28 + 12);
        if ( (v29 & 0x1000) != 0 && !*(_DWORD *)(a1 + 24) )
          goto LABEL_31;
        v30 = *(_DWORD *)(v28 + 8);
        if ( v30 )
        {
          if ( v30 < a4 )
            goto LABEL_31;
        }
        else if ( *(_DWORD *)(a1 + 24) < a4 )
        {
          goto LABEL_31;
        }
        if ( (v29 & 1) != 0 && !v90[0] )
        {
          if ( sub_18FAC(v86) )
            sub_150D0("./../lib/isc/log.c", 1515, "isc_time_now((&isctime)) == 0");
          sub_199BC(v86, v90, 64);
          v29 = *(_DWORD *)(v28 + 12);
        }
        if ( (v29 & 2) != 0 && !v89[0] )
        {
          if ( a4 < -5 )
          {
            v67 = (const char *)sub_1103C((_DWORD *)isc_msgcat, 10, 802, (int)"level");
            sub_F5F4((int)v89, 0x18u, "%s %d: ", v67, a4);
          }
          else if ( a4 <= 0 )
          {
            sub_F5F4((int)v89, 0x18u, "%s: ", (const char *)*(&off_30B08 - a4));
          }
          else
          {
            sub_F5F4((int)v89, 0x18u, "%s %d: ", "debug", a4);
          }
        }
        v16 = *(unsigned __int8 *)(a1 + 56);
        if ( !*(_BYTE *)(a1 + 56) )
        {
          sub_EC98(a1 + 56, 0x2000u, v77, a10);
          if ( a5 )
          {
            sub_18C70(v86, *(_DWORD *)(v75 + 24), v16);
            if ( sub_18FAC(v83) )
              sub_150D0("./../lib/isc/log.c", 1562, "isc_time_now((&oldest)) == 0");
            if ( !sub_1956C(v83, v86, v83) )
            {
              v52 = *(_DWORD *)(a1 + 8248);
              while ( v52 )
              {
                while ( sub_1933C(v52 + 4, v83) >= 0 )
                {
                  if ( !strcmp((const char *)(a1 + 56), *(const char **)v52) )
                  {
                    result = pthread_mutex_unlock(mutex);
                    if ( result )
                      sub_150D0(
                        "./../lib/isc/log.c",
                        1614,
                        "((pthread_mutex_unlock(((&lctx->lock))) == 0) ? 0 : 34) == 0");
                    return result;
                  }
                  v52 = *(_DWORD *)(v52 + 16);
                  if ( !v52 )
                    goto LABEL_86;
                }
                v68 = *(_DWORD *)(v52 + 16);
                if ( v68 )
                {
                  *(_DWORD *)(v68 + 12) = *(_DWORD *)(v52 + 12);
                  v69 = *(_DWORD *)(v52 + 12);
                }
                else
                {
                  if ( *(_DWORD *)(a1 + 8252) != v52 )
                    sub_1073C();
                  v69 = *(_DWORD *)(v52 + 12);
                  *(_DWORD *)(a1 + 8252) = v69;
                }
                if ( v69 )
                {
                  *(_DWORD *)(v69 + 16) = v68;
                }
                else
                {
                  if ( *(_DWORD *)(a1 + 8248) != v52 )
                    sub_1073C();
                  *(_DWORD *)(a1 + 8248) = v68;
                }
                v70 = (void *)v52;
                v52 = v68;
                free(v70);
              }
            }
LABEL_86:
            v53 = strlen((const char *)(a1 + 56));
            v54 = (char *)sub_967C(0, v53 + 21, 0, 0);
            v55 = v54;
            if ( v54 )
            {
              *(_DWORD *)v54 = v54 + 20;
              sub_103C4(v54 + 20, (unsigned __int8 *)(a1 + 56), v53 + 1);
              if ( sub_18FAC(v55 + 4) )
                sub_150D0("./../lib/isc/log.c", 1637, "isc_time_now((&new->time)) == 0");
              v56 = *(_DWORD *)(a1 + 8252);
              if ( v56 )
                *(_DWORD *)(v56 + 16) = v55;
              else
                *(_DWORD *)(a1 + 8248) = v55;
              *((_DWORD *)v55 + 3) = v56;
              *((_DWORD *)v55 + 4) = 0;
              *(_DWORD *)(a1 + 8252) = v55;
            }
          }
        }
        v17 = *(_DWORD *)(v28 + 12);
        v18 = v17 & 0x10;
        v19 = v17 & 1;
        if ( (v17 & 0x10) != 0 )
          v18 = *(_DWORD *)(v75 + 32) != 0;
        v20 = *(_DWORD *)(v28 + 4);
        v21 = (v17 >> 2) & 1;
        v22 = (v17 >> 3) & 1;
        v23 = (v17 >> 1) & 1;
        if ( v20 != 3 )
        {
          if ( v20 == 4 )
          {
            v24 = *(_DWORD *)(v28 + 16);
            goto LABEL_64;
          }
          if ( v20 == 2 )
          {
            if ( a4 <= 0 )
            {
              if ( a4 >= -5 )
                v20 = *(_DWORD *)&asc_1E750[-4 * a4];
            }
            else
            {
              v20 = 7;
            }
            v57 = v20 | *(_DWORD *)(v28 + 16);
            if ( v19 )
            {
              v58 = v90;
              v59 = " ";
            }
            else
            {
              v58 = "";
              v59 = "";
            }
            if ( v18 )
            {
              v60 = *(const char **)(v75 + 32);
              v61 = ": ";
            }
            else
            {
              v60 = "";
              v61 = "";
            }
            if ( v21 )
            {
              v62 = *(const char **)a2;
              v63 = ": ";
            }
            else
            {
              v62 = "";
              v63 = "";
            }
            if ( v22 )
            {
              v64 = *(const char **)a3;
              v65 = ": ";
            }
            else
            {
              v64 = "";
              v65 = "";
            }
            if ( v23 )
              v66 = v89;
            else
              v66 = "";
            _syslog_chk(
              v57,
              1,
              "%s%s%s%s%s%s%s%s%s%s",
              v58,
              v59,
              v60,
              v61,
              v62,
              v63,
              v64,
              v65,
              v66,
              (const char *)(a1 + 56));
            v25 = 1;
            v13 = 1;
            goto LABEL_32;
          }
          goto LABEL_31;
        }
        if ( *(_DWORD *)(v28 + 40) )
        {
          if ( *(_DWORD *)(v28 + 24) == -2
            && (!_xstat64(3, *(_DWORD *)(v28 + 20), v84) || *_errno_location() != 2)
            && v85 >= *(_QWORD *)(v28 + 32) )
          {
            goto LABEL_31;
          }
          fclose(*(FILE **)(v28 + 16));
          v31 = *(_DWORD *)(v28 + 4);
          *(_DWORD *)(v28 + 16) = 0;
          *(_DWORD *)(v28 + 40) = 0;
          if ( v31 != 3 )
            sub_1073C();
        }
        else
        {
          v24 = *(_DWORD *)(v28 + 16);
          if ( v24 )
            goto LABEL_64;
        }
        v32 = *(_BYTE **)(v28 + 20);
        if ( !v32 || !*v32 )
          sub_1073C();
        v79 = *(_DWORD *)(v28 + 20);
        v33 = _xstat64(3, v79, v86);
        v35 = v79;
        if ( !v33 )
        {
          v36 = *(_QWORD *)(v28 + 32);
          v34 = v36 | HIDWORD(v36);
          v37 = v87 & 0xF000;
          if ( v36 )
          {
            v34 = (unsigned __int64)(v36 - 1) >> 32;
            if ( v36 < 1 )
              goto LABEL_144;
            v34 = (unsigned __int64)(v88 - v36) >> 32;
            if ( v88 < v36 || v37 != 0x8000 )
              goto LABEL_144;
            if ( *(_DWORD *)(v28 + 24) == -2 )
              goto LABEL_31;
          }
          else if ( *(_DWORD *)(v28 + 24) == -2 || v37 != 0x8000 )
          {
            goto LABEL_144;
          }
          v38 = sub_15438(v28);
          v34 = v38;
          v35 = v79;
          v80 = v38;
          if ( v38 )
          {
            v39 = *(_DWORD *)(v28 + 12);
            if ( (v39 & 0x8000) == 0 )
            {
              v81 = *(const char **)(v28 + 20);
              v40 = (const char *)sub_18698(v38);
              _syslog_chk(3, 1, "isc_log_open: roll_log '%s' failed: %s", v81, v40);
              v39 = *(_DWORD *)(v28 + 12) | 0x8000;
              *(_DWORD *)(v28 + 12) = v39;
            }
            if ( v80 == 58 || (v39 & 0x8000) != 0 )
              goto LABEL_31;
LABEL_61:
            v82 = *(const char **)(v28 + 20);
            v41 = (const char *)sub_18698(v80);
            _syslog_chk(3, 1, "isc_log_open '%s' failed: %s", v82, v41);
            *(_DWORD *)(v28 + 12) |= 0x8000u;
            goto LABEL_62;
          }
        }
LABEL_144:
        v71 = sub_1884C(v35, "a", v28 + 16, v34);
        v72 = v71 == 0;
        if ( v71 )
          v72 = v71 == 58;
        v80 = v71;
        if ( !v72 && (*(_DWORD *)(v28 + 12) & 0x8000) == 0 )
          goto LABEL_61;
LABEL_62:
        if ( !v80 )
        {
          v24 = *(_DWORD *)(v28 + 16);
          *(_DWORD *)(v28 + 12) &= ~0x8000u;
LABEL_64:
          if ( v19 )
          {
            v42 = v90;
            v43 = " ";
          }
          else
          {
            v42 = "";
            v43 = "";
          }
          if ( v18 )
          {
            v44 = *(const char **)(v75 + 32);
            v45 = ": ";
            if ( v21 )
              goto LABEL_68;
LABEL_108:
            v46 = "";
            v47 = "";
            if ( !v22 )
              goto LABEL_109;
LABEL_69:
            v48 = *(const char **)a3;
            v49 = ": ";
          }
          else
          {
            v44 = "";
            v45 = "";
            if ( !v21 )
              goto LABEL_108;
LABEL_68:
            v46 = *(const char **)a2;
            v47 = ": ";
            if ( v22 )
              goto LABEL_69;
LABEL_109:
            v49 = "";
            v48 = "";
          }
          if ( v23 )
            v50 = v89;
          else
            v50 = "";
          _fprintf_chk(
            v24,
            1,
            "%s%s%s%s%s%s%s%s%s%s\n",
            v42,
            v43,
            v44,
            v45,
            v46,
            v47,
            v48,
            v49,
            v50,
            (const char *)(a1 + 56));
          fflush(*(FILE **)(v28 + 16));
          if ( *(__int64 *)(v28 + 32) >= 1 )
          {
            if ( *(_DWORD *)(v28 + 4) != 3 )
              sub_1073C();
            v51 = fileno(*(FILE **)(v28 + 16));
            if ( _fxstat64(3, v51, v84) >= 0 && *(_QWORD *)(v28 + 32) < v85 )
            {
              v25 = 1;
              *(_DWORD *)(v28 + 40) = 1;
              v13 = 1;
              goto LABEL_32;
            }
          }
        }
LABEL_31:
        v25 = 1;
        v13 = 1;
LABEL_32:
        v14 = v26;
        v15 = v26 == 0;
        if ( (v15 & v25) != 0 )
        {
          result = pthread_mutex_unlock(mutex);
          if ( result )
            sub_150D0("./../lib/isc/log.c", 1766, "((pthread_mutex_unlock(((&lctx->lock))) == 0) ? 0 : 34) == 0");
          return result;
        }
      }
    }
  }
  return result;
}
