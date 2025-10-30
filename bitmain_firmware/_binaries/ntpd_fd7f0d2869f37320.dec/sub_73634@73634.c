int __fastcall sub_73634(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, unsigned __int8 *a9, int *a10)
{
  int result; // r0
  int v13; // r2
  _DWORD *v14; // r9
  int v15; // r6
  _DWORD *v16; // r10
  _BOOL4 v17; // r3
  _BOOL4 v18; // r12
  bool v19; // zf
  int v20; // r4
  int v21; // r3
  int v22; // r2
  int v23; // r8
  unsigned int v24; // r3
  int v25; // r8
  int v26; // r5
  int v27; // r0
  int v28; // r11
  int v29; // r0
  char *v30; // r3
  char *v31; // lr
  char *v32; // r12
  const char *v33; // r5
  char *v34; // r1
  const char *v35; // r2
  const char *v36; // r8
  char *v37; // r11
  int v38; // r0
  int v39; // r4
  int v40; // r2
  int v41; // r1
  void *v42; // r0
  int v43; // r0
  const char *v44; // r3
  const char *v45; // lr
  const char *v46; // r2
  const char *v47; // r4
  const char *v48; // r12
  const char *v49; // r1
  const char *v50; // r5
  const char *v51; // r11
  const char *v52; // r8
  int v53; // r3
  _BYTE *v54; // lr
  int v55; // r0
  int v56; // lr
  __int64 v57; // r0
  int v58; // r0
  int v59; // r3
  const char *v60; // r5
  const char *v61; // r0
  int v62; // r0
  const char *v63; // r5
  const char *v64; // r0
  size_t v65; // r8
  char *v66; // r0
  char *v67; // r5
  int v68; // r3
  const char *v69; // r0
  bool v70; // zf
  unsigned __int8 *v73; // [sp+34h] [bp-170h]
  char *s; // [sp+38h] [bp-16Ch]
  char *sa; // [sp+38h] [bp-16Ch]
  char *sb; // [sp+38h] [bp-16Ch]
  int v77; // [sp+3Ch] [bp-168h]
  int v78; // [sp+3Ch] [bp-168h]
  pthread_mutex_t *mutex; // [sp+54h] [bp-150h]
  int v80; // [sp+60h] [bp-144h]
  int v81; // [sp+60h] [bp-144h]
  _BYTE v82[8]; // [sp+68h] [bp-13Ch] BYREF
  _BYTE v83[48]; // [sp+70h] [bp-134h] BYREF
  __int64 v84; // [sp+A0h] [bp-104h]
  _BYTE v85[16]; // [sp+D8h] [bp-CCh] BYREF
  int v86; // [sp+E8h] [bp-BCh]
  __int64 v87; // [sp+108h] [bp-9Ch]
  _BYTE v88[24]; // [sp+144h] [bp-60h] BYREF
  _BYTE v89[64]; // [sp+15Ch] [bp-48h] BYREF

  v19 = a1 == 0;
  result = 2092;
  v73 = a9;
  if ( !v19 && *(_DWORD *)a1 != 1281586296 )
    sub_6FC54(
      (int)"./../lib/isc/log.c",
      1424,
      0,
      "lctx == ((void *)0) || (((lctx) != ((void *)0)) && (((const isc__magic_t *)(lctx))->magic == ((('L') << 24 | ('c')"
      " << 16 | ('t') << 8 | ('x')))))");
  if ( !a2 )
    sub_6FC54((int)"./../lib/isc/log.c", 1425, 0, "category != ((void *)0)");
  if ( !a3 )
    sub_6FC54((int)"./../lib/isc/log.c", 1426, 0, "module != ((void *)0)");
  if ( !a4 )
    sub_6FC54((int)"./../lib/isc/log.c", 1427, 0, "level != 0");
  if ( !a9 )
    sub_6FC54((int)"./../lib/isc/log.c", 1428, 0, "format != ((void *)0)");
  if ( a1 )
  {
    if ( *(_DWORD *)(a2 + 4) >= *(_DWORD *)(a1 + 12) )
      sub_6FC54((int)"./../lib/isc/log.c", 1438, 0, "category->id < lctx->category_count");
    if ( *(_DWORD *)(a3 + 4) >= *(_DWORD *)(a1 + 20) )
      sub_6FC54((int)"./../lib/isc/log.c", 1439, 0, "module->id < lctx->module_count");
    result = sub_7359C(a1, a4);
    if ( result )
    {
      if ( a6 )
        v73 = (unsigned __int8 *)sub_7487C(a6, a7, a8, a9);
      mutex = (pthread_mutex_t *)(a1 + 28);
      v89[0] = 0;
      v88[0] = 0;
      if ( pthread_mutex_lock((pthread_mutex_t *)(a1 + 28)) )
        sub_705AC("./../lib/isc/log.c", 1452, "((pthread_mutex_lock(((&lctx->lock))) == 0) ? 0 : 34) == 0");
      v13 = 0;
      v14 = *(_DWORD **)(a1 + 52);
      v15 = a1;
      *(_BYTE *)(a1 + 56) = 0;
      v16 = *(_DWORD **)(v14[4] + 8 * *(_DWORD *)(a2 + 4));
      v17 = v16 == 0;
      while ( 1 )
      {
        while ( 1 )
        {
          if ( (v17 & (v13 ^ 1)) != 0 )
          {
            v16 = *(_DWORD **)v14[4];
            if ( !v16 )
              v16 = &unk_108270;
          }
          v19 = a3 == *v16;
          if ( a3 != *v16 )
            v19 = *v16 == 0;
          if ( v19 )
            break;
          v16 = (_DWORD *)v16[3];
          v18 = v13;
LABEL_15:
          v17 = v16 == 0;
          if ( v17 && v18 )
            goto LABEL_26;
        }
        v20 = v16[1];
        v16 = (_DWORD *)v16[3];
        v21 = *(_DWORD *)(v20 + 12);
        if ( (v21 & 0x1000) == 0 || *(_DWORD *)(v15 + 24) )
          break;
        v13 = 1;
        v17 = v16 == 0;
        if ( !v16 )
        {
LABEL_26:
          result = pthread_mutex_unlock(mutex);
          if ( result )
            sub_705AC("./../lib/isc/log.c", 1766, "((pthread_mutex_unlock(((&lctx->lock))) == 0) ? 0 : 34) == 0");
          return result;
        }
      }
      v22 = *(_DWORD *)(v20 + 8);
      if ( v22 )
      {
        if ( a4 > v22 )
          goto LABEL_44;
      }
      else if ( a4 > *(_DWORD *)(v15 + 24) )
      {
        goto LABEL_44;
      }
      if ( (v21 & 1) != 0 && !v89[0] )
      {
        if ( sub_77034(v85) )
          sub_705AC("./../lib/isc/log.c", 1515, "isc_time_now((&isctime)) == 0");
        sub_77A60(v85, v89, 64);
        v21 = *(_DWORD *)(v20 + 12);
      }
      if ( (v21 & 2) != 0 && !v88[0] )
      {
        if ( a4 < -5 )
        {
          v69 = (const char *)sub_7487C(isc_msgcat, 10, 802, "level");
          sub_6D00C((int)v88, 0x18u, "%s %d: ", v69, a4);
        }
        else if ( a4 <= 0 )
        {
          sub_6D00C((int)v88, 0x18u, "%s: ", (const char *)*(&off_B61E8 - a4));
        }
        else
        {
          sub_6D00C((int)v88, 0x18u, "%s %d: ", "debug", a4);
        }
      }
      v23 = *(unsigned __int8 *)(v15 + 56);
      if ( !*(_BYTE *)(v15 + 56) )
      {
        sb = (char *)(v15 + 56);
        sub_6C654(v15 + 56, 0x2000u, v73, a10);
        if ( a5 )
        {
          sub_76CF0(v85, v14[6], v23);
          if ( sub_77034(v82) )
            sub_705AC("./../lib/isc/log.c", 1562, "isc_time_now((&oldest)) == 0");
          if ( !sub_77610(v82, v85, v82) && *(_DWORD *)(v15 + 8248) )
          {
            v78 = v20;
            v39 = *(_DWORD *)(v15 + 8248);
            while ( 1 )
            {
              if ( sub_773E0(v39 + 4, v82) >= 0 )
              {
                if ( !strcmp(sb, *(const char **)v39) )
                {
                  result = pthread_mutex_unlock(mutex);
                  if ( result )
                    sub_705AC(
                      "./../lib/isc/log.c",
                      1614,
                      "((pthread_mutex_unlock(((&lctx->lock))) == 0) ? 0 : 34) == 0");
                  return result;
                }
                v39 = *(_DWORD *)(v39 + 16);
              }
              else
              {
                v40 = *(_DWORD *)(v39 + 16);
                if ( v40 )
                {
                  *(_DWORD *)(v40 + 12) = *(_DWORD *)(v39 + 12);
                  v41 = *(_DWORD *)(v39 + 12);
                }
                else
                {
                  if ( *(_DWORD *)(v15 + 8252) != v39 )
                    sub_6FC54((int)"./../lib/isc/log.c", 1592, 2, "(lctx->messages).tail == (message)");
                  v41 = *(_DWORD *)(v39 + 12);
                  *(_DWORD *)(v15 + 8252) = v41;
                }
                if ( v41 )
                {
                  *(_DWORD *)(v41 + 16) = v40;
                }
                else
                {
                  if ( *(_DWORD *)(v15 + 8248) != v39 )
                    sub_6FC54((int)"./../lib/isc/log.c", 1592, 2, "(lctx->messages).head == (message)");
                  *(_DWORD *)(v15 + 8248) = v40;
                }
                v42 = (void *)v39;
                v39 = v40;
                free(v42);
              }
              if ( !v39 )
              {
                v20 = v78;
                break;
              }
            }
          }
          v65 = strlen(sb);
          v66 = (char *)sub_64B04(0, v65 + 21, 0, 0);
          v67 = v66;
          if ( v66 )
          {
            *(_DWORD *)v66 = v66 + 20;
            sub_6E4B4(v66 + 20, (unsigned __int8 *)sb, v65 + 1);
            if ( sub_77034(v67 + 4) )
              sub_705AC("./../lib/isc/log.c", 1637, "isc_time_now((&new->time)) == 0");
            v68 = *(_DWORD *)(v15 + 8252);
            if ( v68 )
              *(_DWORD *)(v68 + 16) = v67;
            else
              *(_DWORD *)(v15 + 8248) = v67;
            *((_DWORD *)v67 + 3) = v68;
            *((_DWORD *)v67 + 4) = 0;
            *(_DWORD *)(v15 + 8252) = v67;
          }
        }
      }
      v24 = *(_DWORD *)(v20 + 12);
      v25 = v24 & 0x10;
      v26 = v24 & 1;
      if ( (v24 & 0x10) != 0 )
        v25 = v14[8] != 0;
      v27 = *(_DWORD *)(v20 + 4);
      v28 = (v24 >> 3) & 1;
      s = (char *)((v24 >> 2) & 1);
      v77 = (v24 >> 1) & 1;
      if ( v27 != 3 )
      {
        if ( v27 == 4 )
        {
          v29 = *(_DWORD *)(v20 + 16);
          goto LABEL_49;
        }
        if ( v27 == 2 )
        {
          if ( a4 <= 0 )
          {
            if ( a4 >= -5 )
              v27 = *(_DWORD *)&asc_9DFD4[-4 * a4];
          }
          else
          {
            v27 = 7;
          }
          v43 = v27 | *(_DWORD *)(v20 + 16);
          if ( (v24 & 1) != 0 )
          {
            v44 = v89;
            v45 = " ";
            if ( v25 )
              goto LABEL_82;
LABEL_113:
            v46 = byte_99528;
            v47 = byte_99528;
            if ( !s )
              goto LABEL_114;
LABEL_83:
            v48 = *(const char **)a2;
            v49 = ": ";
            if ( v28 )
              goto LABEL_84;
LABEL_115:
            v50 = byte_99528;
            v51 = byte_99528;
          }
          else
          {
            v44 = byte_99528;
            v45 = byte_99528;
            if ( !v25 )
              goto LABEL_113;
LABEL_82:
            v46 = (const char *)v14[8];
            v47 = ": ";
            if ( s )
              goto LABEL_83;
LABEL_114:
            v48 = byte_99528;
            v49 = byte_99528;
            if ( !v28 )
              goto LABEL_115;
LABEL_84:
            v50 = *(const char **)a3;
            v51 = ": ";
          }
          if ( v77 )
            v52 = v88;
          else
            v52 = byte_99528;
          _syslog_chk(
            v43,
            1,
            "%s%s%s%s%s%s%s%s%s%s",
            v44,
            v45,
            v46,
            v47,
            v48,
            v49,
            v50,
            v51,
            v52,
            (const char *)(v15 + 56));
          v18 = 1;
          v13 = 1;
          goto LABEL_15;
        }
LABEL_44:
        v18 = 1;
        v13 = 1;
        goto LABEL_15;
      }
      if ( *(_DWORD *)(v20 + 40) )
      {
        if ( *(_DWORD *)(v20 + 24) == -2
          && (!_xstat64(3, *(_DWORD *)(v20 + 20), v83) || *_errno_location() != 2)
          && v84 >= *(_QWORD *)(v20 + 32) )
        {
          goto LABEL_44;
        }
        fclose(*(FILE **)(v20 + 16));
        v53 = *(_DWORD *)(v20 + 4);
        *(_DWORD *)(v20 + 16) = 0;
        *(_DWORD *)(v20 + 40) = 0;
        if ( v53 != 3 )
          sub_6FC54((int)"./../lib/isc/log.c", 1326, 0, "channel->type == 3");
      }
      else
      {
        v29 = *(_DWORD *)(v20 + 16);
        if ( v29 )
          goto LABEL_49;
      }
      v54 = *(_BYTE **)(v20 + 20);
      if ( !v54 || !*v54 )
        sub_6FC54((int)"./../lib/isc/log.c", 1331, 0, "path != ((void *)0) && *path != '\\0'");
      v80 = *(_DWORD *)(v20 + 20);
      v55 = _xstat64(3, v80, v85);
      v56 = v80;
      if ( !v55 )
      {
        v57 = *(_QWORD *)(v20 + 32);
        v18 = (v86 & 0xF000) == 0x8000;
        if ( v57 )
        {
          if ( v57 >= 1 && v87 >= v57 && (v86 & 0xF000) == 0x8000 )
          {
            if ( *(_DWORD *)(v20 + 24) == -2 )
            {
LABEL_154:
              v13 = 1;
              goto LABEL_15;
            }
LABEL_98:
            v58 = sub_717AC(v20);
            v56 = v80;
            v81 = v58;
            if ( v58 )
            {
              v59 = *(_DWORD *)(v20 + 12);
              if ( (v59 & 0x8000) == 0 )
              {
                v60 = *(const char **)(v20 + 20);
                v61 = (const char *)sub_764E0(v58);
                _syslog_chk(3, 1, "isc_log_open: roll_log '%s' failed: %s", v60, v61);
                v59 = *(_DWORD *)(v20 + 12) | 0x8000;
                *(_DWORD *)(v20 + 12) = v59;
              }
              if ( v81 == 58 )
                goto LABEL_44;
              v62 = v81;
              goto LABEL_104;
            }
          }
        }
        else if ( *(_DWORD *)(v20 + 24) != -2 && (v86 & 0xF000) == 0x8000 )
        {
          goto LABEL_98;
        }
      }
      v62 = sub_76698(v56, &off_9AF30, v20 + 16);
      v18 = v62;
      if ( v62 )
        v18 = 1;
      v70 = v62 == 58;
      if ( v62 != 58 )
        v70 = v62 == 0;
      if ( !v70 )
      {
        v59 = *(_DWORD *)(v20 + 12);
LABEL_104:
        if ( (v59 & 0x8000) == 0 )
        {
          v63 = *(const char **)(v20 + 20);
          v64 = (const char *)sub_764E0(v62);
          _syslog_chk(3, 1, "isc_log_open '%s' failed: %s", v63, v64);
          *(_DWORD *)(v20 + 12) |= 0x8000u;
        }
        goto LABEL_44;
      }
      if ( v18 )
        goto LABEL_154;
      v29 = *(_DWORD *)(v20 + 16);
      *(_DWORD *)(v20 + 12) &= ~0x8000u;
LABEL_49:
      if ( v26 )
      {
        v30 = v89;
        v31 = " ";
        if ( v25 )
          goto LABEL_51;
      }
      else
      {
        v30 = byte_99528;
        v31 = byte_99528;
        if ( v25 )
        {
LABEL_51:
          v32 = (char *)v14[8];
          v33 = ": ";
          if ( s )
            goto LABEL_52;
          goto LABEL_108;
        }
      }
      v32 = byte_99528;
      v33 = byte_99528;
      if ( s )
      {
LABEL_52:
        v34 = *(char **)a2;
        v35 = ": ";
        if ( v28 )
        {
LABEL_53:
          sa = *(char **)a3;
          v36 = ": ";
LABEL_54:
          if ( v77 )
            v37 = v88;
          else
            v37 = byte_99528;
          _fprintf_chk(v29, 1, "%s%s%s%s%s%s%s%s%s%s\n", v30, v31, v32, v33, v34, v35, sa, v36, v37, v15 + 56);
          fflush(*(FILE **)(v20 + 16));
          if ( *(__int64 *)(v20 + 32) >= 1 )
          {
            if ( *(_DWORD *)(v20 + 4) != 3 )
              sub_6FC54((int)"./../lib/isc/log.c", 1723, 2, "channel->type == 3");
            v38 = fileno(*(FILE **)(v20 + 16));
            if ( _fxstat64(3, v38, v83) >= 0 && *(_QWORD *)(v20 + 32) < v84 )
            {
              v18 = 1;
              *(_DWORD *)(v20 + 40) = 1;
              v13 = 1;
              goto LABEL_15;
            }
          }
          goto LABEL_44;
        }
LABEL_109:
        v36 = byte_99528;
        sa = byte_99528;
        goto LABEL_54;
      }
LABEL_108:
      v35 = byte_99528;
      v34 = byte_99528;
      if ( v28 )
        goto LABEL_53;
      goto LABEL_109;
    }
  }
  return result;
}
