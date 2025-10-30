int __fastcall sub_28AE0(_DWORD *a1, int a2)
{
  double v2; // d0
  int v4; // r0
  int v5; // r5
  int v6; // r7
  _DWORD *v7; // r4
  _DWORD *v8; // r8
  const char *v9; // r0
  const char *v10; // r7
  unsigned int v11; // r4
  _DWORD *i; // r6
  bool v13; // cf
  unsigned int v14; // r1
  int v15; // r0
  int v16; // r4
  unsigned int *v17; // r3
  unsigned int v18; // r2
  unsigned int v19; // r2
  const char *v21; // r4
  char *v22; // r0
  int v23; // r0
  int v24; // r0
  size_t v25; // r0
  int v26; // r0
  char *v27; // r0
  int v28; // r0
  double *v29; // r3
  double v30; // d9
  const char *v31; // r2
  int v32; // r3
  char *v33; // r9
  int v34; // r0
  int v35; // r0
  int v36; // r0
  int v37; // r0
  int v38; // r0
  size_t v39; // r3
  void *v40; // r0
  void *v41; // r0
  int *v42; // r0
  int *v43; // r0
  int *v44; // r0
  int *v45; // r0
  int *v46; // r0
  int v47; // [sp+0h] [bp-211Ch]
  int v48; // [sp+14h] [bp-2108h]
  _DWORD v49[23]; // [sp+1Ch] [bp-2100h] BYREF
  char v50[160]; // [sp+78h] [bp-20A4h] BYREF
  char s[8196]; // [sp+118h] [bp-2004h] BYREF

  v4 = sub_47258(a2, 0, v49);
  v5 = v4;
  if ( v4 )
  {
    v6 = sub_480FC(v4, "method");
    if ( !v6 )
      goto LABEL_14;
    v7 = (_DWORD *)sub_480FC(v5, "error");
    v8 = (_DWORD *)sub_480FC(v5, "params");
    if ( v7 && *v7 != 7 )
    {
      v21 = (const char *)sub_45074(v7, 3);
      if ( byte_74500 || byte_68BD4 || dword_67DB4 > 5 )
      {
        snprintf(s, 0x800u, "JSON-RPC method decode failed: %s", v21);
        sub_20F58(6, s, 0);
      }
      v22 = (char *)v21;
      v16 = 0;
      free(v22);
      goto LABEL_15;
    }
    v9 = (const char *)sub_48630(v6);
    v10 = v9;
    if ( !v9 )
      goto LABEL_14;
    v11 = strncasecmp(v9, "mining.multi_version", 0x14u);
    if ( !v11 )
    {
      *((_BYTE *)a1 + 644) = 1;
      if ( byte_74500 || byte_68BD4 || dword_67DB4 > 5 )
      {
        strcpy(s, "Pool support multi version");
        sub_20F58(6, s, 0);
      }
      for ( i = a1 + 163; ; ++i )
      {
        v13 = v11 >= sub_48468(v8);
        v14 = v11++;
        if ( v13 )
          break;
        v15 = sub_48484(v8, v14);
        *i = sub_4888C(v15);
      }
      goto LABEL_50;
    }
    if ( !strncasecmp(v10, "mining.notify", 0xDu) )
    {
      v16 = sub_2582C((int)a1, v8);
      if ( v16 )
      {
        *((_BYTE *)a1 + 643) = 1;
        goto LABEL_15;
      }
    }
    else
    {
      if ( strncasecmp(v10, "mining.set_version_mask", 0x17u) )
      {
        if ( !strncasecmp(v10, "mining.set_difficulty", 0x15u) )
        {
          v28 = sub_48484(v8, 0);
          sub_489C8(v28);
          if ( v2 == 0.0 )
            goto LABEL_14;
          if ( pthread_mutex_lock((pthread_mutex_t *)(a1 + 53)) )
            sub_22864("parse_diff", 2235);
          if ( pthread_rwlock_wrlock((pthread_rwlock_t *)(a1 + 59)) )
          {
            v44 = _errno_location();
            snprintf(s, 0x800u, "WTF WRLOCK ERROR ON LOCK! errno=%d in %s %s():%d", *v44, "util.c", "parse_diff", 2235);
            sub_20F58(3, s, 1);
            sub_3EBA0(1);
          }
          v29 = (double *)(a1 + 456);
          v30 = *((double *)a1 + 227);
          *((double *)a1 + 227) = v2;
          if ( v30 <= 0.0 )
          {
            v30 = *v29;
            *v29 = v2;
          }
          if ( pthread_rwlock_unlock((pthread_rwlock_t *)(a1 + 59)) )
          {
            v43 = _errno_location();
            snprintf(
              s,
              0x800u,
              "WTF RWLOCK ERROR ON UNLOCK! errno=%d in %s %s():%d",
              *v43,
              "util.c",
              "parse_diff",
              2248);
            sub_20F58(3, s, 1);
            sub_3EBA0(1);
          }
          if ( pthread_mutex_unlock((pthread_mutex_t *)(a1 + 53)) )
          {
            v42 = _errno_location();
            snprintf(s, 0x800u, "WTF MUTEX ERROR ON UNLOCK! errno=%d in %s %s():%d", *v42, "util.c", "parse_diff", 2248);
            sub_20F58(3, s, 1);
            sub_3EBA0(1);
          }
          off_67ED8();
          if ( v2 == v30 )
          {
            v16 = (unsigned __int8)byte_68BD5;
            if ( byte_68BD5 && (byte_74500 || byte_68BD4 || dword_67DB4 > 6) )
            {
              snprintf(s, 0x800u, "Pool %d difficulty set to %f", *a1, v2);
              sub_20F58(7, s, 0);
              goto LABEL_15;
            }
            goto LABEL_50;
          }
          if ( v2 != (double)(int)v2 )
          {
            if ( byte_74500 || byte_68BD4 || dword_67DB4 > 4 )
            {
              snprintf(s, 0x800u, "Pool %d difficulty changed to %.1f", *a1, v2);
              v16 = 1;
              sub_20F58(5, s, 0);
              goto LABEL_15;
            }
            goto LABEL_50;
          }
          if ( byte_74500 || byte_68BD4 || dword_67DB4 > 4 )
          {
            v47 = (int)v2;
            v31 = "Pool %d difficulty changed to %d";
            v32 = *a1;
LABEL_65:
            v16 = 1;
            snprintf(s, 0x800u, v31, v32, v47);
            sub_20F58(5, s, 0);
            goto LABEL_15;
          }
        }
        else
        {
          if ( !strncasecmp(v10, "mining.set_extranonce", 0x15u) )
          {
            v33 = sub_22520(v8, 0);
            v16 = sub_225A0(v33, "parse_extranonce", 2278);
            if ( v16 )
            {
              v36 = sub_48484(v8, 1);
              v48 = sub_4888C(v36);
              if ( !v48 )
              {
                if ( byte_74500 || byte_68BD4 || dword_67DB4 > 5 )
                {
                  strcpy(s, "Failed to get valid n2size in parse_extranonce");
                  sub_20F58(6, s, 0);
                }
                v16 = 0;
                free(v33);
                goto LABEL_15;
              }
              if ( pthread_mutex_lock((pthread_mutex_t *)(a1 + 53)) )
                sub_22864("parse_extranonce", 2290);
              if ( pthread_rwlock_wrlock((pthread_rwlock_t *)(a1 + 59)) )
              {
                v46 = _errno_location();
                snprintf(
                  s,
                  0x800u,
                  "WTF WRLOCK ERROR ON LOCK! errno=%d in %s %s():%d",
                  *v46,
                  "util.c",
                  "parse_extranonce",
                  2290);
                sub_20F58(3, s, 1);
                sub_3EBA0(1);
              }
              free((void *)a1[153]);
              a1[153] = v33;
              v39 = strlen(v33) >> 1;
              v40 = (void *)a1[154];
              a1[391] = v39;
              free(v40);
              v41 = sub_22A44(a1[391], 1u, "util.c", "parse_extranonce", 2295);
              a1[154] = v41;
              if ( !v41 )
              {
                snprintf(
                  s,
                  0x800u,
                  "Failed to calloc pool->nonce1bin in %s %s():%d",
                  "util.c",
                  "parse_extranonce",
                  2297);
                sub_20F58(3, s, 1);
                sub_3EBA0(1);
              }
              sub_22CD8((_BYTE *)a1[154], (unsigned __int8 *)a1[153], a1[391]);
              a1[158] = v48;
              if ( pthread_rwlock_unlock((pthread_rwlock_t *)(a1 + 59)) )
              {
                v45 = _errno_location();
                snprintf(
                  s,
                  0x800u,
                  "WTF RWLOCK ERROR ON UNLOCK! errno=%d in %s %s():%d",
                  *v45,
                  "util.c",
                  "parse_extranonce",
                  2300);
                sub_20F58(3, s, 1);
                sub_3EBA0(1);
              }
              sub_227E8((pthread_mutex_t *)(a1 + 53), "parse_extranonce", 2300);
              off_67ED8();
              if ( byte_74500 || byte_68BD4 || dword_67DB4 > 4 )
              {
                snprintf(s, 0x800u, "Pool %d extranonce change requested", *a1);
                sub_20F58(5, s, 0);
                goto LABEL_15;
              }
              goto LABEL_50;
            }
            if ( byte_74500 || byte_68BD4 || dword_67DB4 > 5 )
            {
              strcpy(s, "Failed to get valid nonce1 in parse_extranonce");
              sub_20F58(6, s, 0);
              goto LABEL_15;
            }
            goto LABEL_14;
          }
          if ( !strncasecmp(v10, "client.reconnect", 0x10u) )
          {
            v16 = sub_2870C((int)a1, (int)v8);
            goto LABEL_15;
          }
          if ( !strncasecmp(v10, "client.get_version", 0x12u) )
          {
            if ( sub_480FC(v5, "id") )
            {
              v34 = sub_480FC(v5, "id");
              v35 = sub_4888C(v34);
              sprintf(s, "{\"id\": %d, \"result\": \"cgminer/1.0.0\", \"error\": null}", v35);
              goto LABEL_44;
            }
LABEL_14:
            v16 = 0;
LABEL_15:
            if ( *(_DWORD *)(v5 + 4) != -1 )
            {
              v17 = (unsigned int *)(v5 + 4);
              __dmb(0xBu);
              do
              {
                v18 = __ldrex(v17);
                v19 = v18 - 1;
              }
              while ( __strex(v19, v17) );
              if ( !v19 )
                sub_48A34(v5);
            }
            return v16;
          }
          if ( strncasecmp(v10, "client.show_message", 0x13u) )
          {
            if ( !strncasecmp(v10, "mining.ping", 0xBu) )
            {
              if ( byte_74500 || byte_68BD4 || dword_67DB4 > 5 )
              {
                snprintf(s, 0x800u, "Pool %d ping", *a1);
                sub_20F58(6, s, 0);
              }
              if ( !sub_480FC(v5, "id") )
              {
                v16 = 0;
                goto LABEL_15;
              }
              v23 = sub_480FC(v5, "id");
              v24 = sub_4888C(v23);
              sprintf(s, "{\"id\": %d, \"result\": \"pong\", \"error\": null}", v24);
LABEL_44:
              v25 = strlen(s);
              v16 = sub_244A4((int)a1, s, v25);
              goto LABEL_15;
            }
            goto LABEL_14;
          }
          if ( !v8 )
            goto LABEL_14;
          if ( *v8 != 1 )
            goto LABEL_14;
          v37 = sub_48484(v8, 0);
          v38 = sub_48630(v37);
          if ( !v38 )
            goto LABEL_14;
          if ( byte_74500 || byte_68BD4 || dword_67DB4 > 4 )
          {
            v31 = "Pool %d message: %s";
            v47 = v38;
            v32 = *a1;
            goto LABEL_65;
          }
        }
LABEL_50:
        v16 = 1;
        goto LABEL_15;
      }
      v16 = 1;
      v26 = sub_48484(v8, 0);
      v27 = (char *)sub_48630(v26);
      sub_22E7C((int)a1, v27);
    }
    *((_BYTE *)a1 + 643) = v16;
    goto LABEL_15;
  }
  if ( byte_74500 || (v16 = (unsigned __int8)byte_68BD4, byte_68BD4) || dword_67DB4 > 5 )
  {
    v16 = 0;
    snprintf(s, 0x800u, "JSON decode failed(%d): %s", v49[0], v50);
    sub_20F58(6, s, 0);
  }
  return v16;
}
