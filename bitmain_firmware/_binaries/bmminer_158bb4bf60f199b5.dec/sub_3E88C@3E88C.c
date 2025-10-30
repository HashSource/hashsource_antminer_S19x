int __fastcall sub_3E88C(unsigned int *a1, char **a2, int a3, int a4)
{
  int v7; // r5
  int v8; // r11
  int v9; // r5
  char ***v10; // r5
  char *v11; // r3
  unsigned __int8 *v12; // r3
  unsigned __int8 *v13; // r2
  char **v14; // r0
  int v15; // r4
  int v16; // r4
  char *v18; // r3
  char *v19; // r6
  char *v20; // r3
  char *v21; // r1
  char ***v22; // r0
  int *v23; // r0
  int *v24; // r0
  int *v25; // r0
  int *v26; // r0
  int *v27; // r0
  int *v28; // r0
  int *v29; // r0
  int *v30; // r0
  const char *v32; // [sp+2Ch] [bp-848h]
  const char *v33; // [sp+2Ch] [bp-848h]
  char s[64]; // [sp+30h] [bp-844h] BYREF
  char v35[2052]; // [sp+70h] [bp-804h] BYREF

  v7 = *(_DWORD *)(dword_1AEB94 + 8);
  if ( pthread_mutex_lock((pthread_mutex_t *)v7) )
  {
    v25 = _errno_location();
    snprintf(v35, 0x800u, "WTF MUTEX ERROR ON LOCK! errno=%d in %s %s():%d", *v25, "api.c", "print_data", 1193);
    sub_47AB4(3, v35, 1);
    sub_62EC0(1);
  }
  if ( pthread_rwlock_wrlock((pthread_rwlock_t *)(v7 + 24)) )
  {
    v26 = _errno_location();
    snprintf(v35, 0x800u, "WTF WRLOCK ERROR ON LOCK! errno=%d in %s %s():%d", *v26, "api.c", "print_data", 1193);
    sub_47AB4(3, v35, 1);
    sub_62EC0(1);
  }
  v8 = sub_46F04(dword_1AEB94, "api.c", "print_data", 1194);
  v9 = *(_DWORD *)(dword_1AEB94 + 8);
  if ( pthread_rwlock_unlock((pthread_rwlock_t *)(v9 + 24)) )
  {
    v29 = _errno_location();
    snprintf(v35, 0x800u, "WTF RWLOCK ERROR ON UNLOCK! errno=%d in %s %s():%d", *v29, "api.c", "print_data", 1195);
    sub_47AB4(3, v35, 1);
    sub_62EC0(1);
  }
  if ( pthread_mutex_unlock((pthread_mutex_t *)v9) )
  {
    v30 = _errno_location();
    snprintf(v35, 0x800u, "WTF MUTEX ERROR ON UNLOCK! errno=%d in %s %s():%d", *v30, "api.c", "print_data", 1195);
    sub_47AB4(3, v35, 1);
    sub_62EC0(1);
  }
  off_9E444();
  v10 = (char ***)(v8 + 12);
  *(_DWORD *)(*(_DWORD *)(v8 + 12) + 4) = 0;
  if ( a4 )
    sub_3D988(v10, ",");
  if ( a3 )
  {
    sub_3D988(v10, "{");
    if ( !a2 )
      goto LABEL_26;
  }
  else if ( !a2 )
  {
    goto LABEL_19;
  }
  if ( a3 )
  {
LABEL_16:
    sub_3D988(v10, "\"");
    sub_3D988(v10, a2[1]);
    sub_3D988(v10, "\"");
    sub_3D988(v10, ":");
    v11 = *a2;
    switch ( (unsigned int)*a2 )
    {
      case 0u:
        v33 = a2[2];
        v19 = (char *)sub_3C89C(v33, 1);
        sub_3D988(v10, "\"");
        sub_3D988(v10, v19);
        sub_3D988(v10, "\"");
        v20 = (char *)v33;
        goto LABEL_56;
      case 1u:
      case 2u:
        sub_3D988(v10, "\"");
        v21 = a2[2];
        v22 = (char ***)(v8 + 12);
        goto LABEL_60;
      case 3u:
        goto LABEL_29;
      case 4u:
        goto LABEL_28;
      case 5u:
        goto LABEL_27;
      case 6u:
        goto LABEL_46;
      case 7u:
      case 8u:
        goto LABEL_11;
      case 9u:
        sub_3D988(v10, "\"");
        snprintf(s, 0x40u, "0x%08x", *(_DWORD *)a2[2]);
        v21 = s;
        v22 = (char ***)(v8 + 12);
        goto LABEL_60;
      case 0xAu:
        goto LABEL_44;
      case 0xBu:
        goto LABEL_43;
      case 0xCu:
        goto LABEL_42;
      case 0xDu:
        goto LABEL_41;
      case 0xEu:
        goto LABEL_38;
      case 0xFu:
        goto LABEL_37;
      case 0x10u:
        goto LABEL_36;
      case 0x11u:
      case 0x14u:
      case 0x15u:
        goto LABEL_35;
      case 0x12u:
        goto LABEL_34;
      case 0x13u:
        goto LABEL_33;
      case 0x16u:
      case 0x1Au:
        goto LABEL_32;
      case 0x17u:
        goto LABEL_31;
      case 0x18u:
        goto LABEL_30;
      case 0x19u:
        goto LABEL_45;
      default:
        goto LABEL_49;
    }
  }
  while ( 1 )
  {
    sub_3D988(v10, a2[1]);
    sub_3D988(v10, "=");
    v11 = *a2;
    switch ( (unsigned int)*a2 )
    {
      case 0u:
        v32 = a2[2];
        v19 = (char *)sub_3C89C(v32, 0);
        sub_3D988(v10, v19);
        v20 = (char *)v32;
LABEL_56:
        if ( v20 != v19 )
          free(v19);
        break;
      case 1u:
      case 2u:
        sub_3D988(v10, a2[2]);
        break;
      case 3u:
LABEL_29:
        snprintf(s, 0x40u, "%u", (unsigned __int8)*a2[2]);
        goto LABEL_12;
      case 4u:
LABEL_28:
        snprintf(s, 0x40u, "%d", *(__int16 *)a2[2]);
        goto LABEL_12;
      case 5u:
LABEL_27:
        snprintf(s, 0x40u, "%u", *(unsigned __int16 *)a2[2]);
        goto LABEL_12;
      case 6u:
LABEL_46:
        snprintf(s, 0x40u, "%d", *(_DWORD *)a2[2]);
        goto LABEL_12;
      case 7u:
      case 8u:
LABEL_11:
        snprintf(s, 0x40u, "%u", *(_DWORD *)a2[2]);
        goto LABEL_12;
      case 9u:
        snprintf(s, 0x40u, "0x%08x", *(_DWORD *)a2[2]);
        sub_3D988(v10, s);
        break;
      case 0xAu:
LABEL_44:
        snprintf(s, 0x40u, "%llu", *(_QWORD *)a2[2]);
        goto LABEL_12;
      case 0xBu:
LABEL_43:
        snprintf(s, 0x40u, "%lld", *(_QWORD *)a2[2]);
        goto LABEL_12;
      case 0xCu:
LABEL_42:
        snprintf(s, 0x40u, "%f", *(double *)a2[2]);
        goto LABEL_12;
      case 0xDu:
LABEL_41:
        snprintf(s, 0x40u, "%.0f", *(double *)a2[2]);
        goto LABEL_12;
      case 0xEu:
LABEL_38:
        v18 = "false";
        if ( *a2[2] )
          v18 = "true";
        snprintf(s, 0x40u, "%s", v18);
        goto LABEL_12;
      case 0xFu:
LABEL_37:
        snprintf(s, 0x40u, "%ld.%06ld", *(_DWORD *)a2[2], *((_DWORD *)a2[2] + 1));
        goto LABEL_12;
      case 0x10u:
LABEL_36:
        snprintf(s, 0x40u, "%lu", *(_DWORD *)a2[2]);
        goto LABEL_12;
      case 0x11u:
      case 0x14u:
      case 0x15u:
LABEL_35:
        snprintf(s, 0x40u, "%.2f", *(double *)a2[2]);
        goto LABEL_12;
      case 0x12u:
LABEL_34:
        snprintf(s, 0x40u, "%.4f", *(double *)a2[2]);
        goto LABEL_12;
      case 0x13u:
LABEL_33:
        snprintf(s, 0x40u, "%.2f", *(float *)a2[2]);
        goto LABEL_12;
      case 0x16u:
      case 0x1Au:
LABEL_32:
        snprintf(s, 0x40u, "%.3f", *(float *)a2[2]);
        goto LABEL_12;
      case 0x17u:
LABEL_31:
        snprintf(s, 0x40u, "%.15f", *(double *)a2[2]);
        goto LABEL_12;
      case 0x18u:
LABEL_30:
        snprintf(s, 0x40u, "%.8f", *(double *)a2[2]);
        goto LABEL_12;
      case 0x19u:
LABEL_45:
        snprintf(s, 0x40u, "%.4f", *(double *)a2[2] * 100.0);
LABEL_12:
        sub_3D988(v10, s);
        break;
      default:
LABEL_49:
        if ( byte_244080 || byte_1AECC4 || dword_9E320 > 2 )
        {
          snprintf(v35, 0x800u, "API: unknown2 data type %d ignored", v11);
          sub_47AB4(3, v35, 0);
        }
        if ( a3 )
        {
          sub_3D988(v10, "\"");
          v21 = "Unknown";
          v22 = (char ***)(v8 + 12);
LABEL_60:
          sub_3D988(v22, v21);
          sub_3D988(v10, "\"");
        }
        else
        {
          sub_3D988(v10, "Unknown");
        }
        break;
    }
    free(a2[1]);
    if ( !*((_BYTE *)a2 + 12) )
    {
      v12 = (unsigned __int8 *)a2[5];
      if ( v12 == (unsigned __int8 *)a2 )
        break;
      goto LABEL_15;
    }
    free(a2[2]);
    v12 = (unsigned __int8 *)a2[5];
    if ( v12 == (unsigned __int8 *)a2 )
      break;
LABEL_15:
    v13 = (unsigned __int8 *)a2[4];
    v14 = a2;
    a2 = (char **)v12;
    *((_DWORD *)v12 + 4) = v13;
    *((_DWORD *)v13 + 5) = v12;
    free(v14);
    sub_3D988(v10, ",");
    if ( a3 )
      goto LABEL_16;
  }
  free(a2);
  if ( !a3 )
  {
LABEL_19:
    sub_3D988(v10, "|");
    goto LABEL_20;
  }
LABEL_26:
  sub_3D988(v10, (char *)&word_836FC);
LABEL_20:
  sub_3C770(a1, **(char ***)(v8 + 12));
  v15 = *(_DWORD *)(dword_1AEB94 + 8);
  if ( pthread_mutex_lock((pthread_mutex_t *)v15) )
  {
    v27 = _errno_location();
    snprintf(v35, 0x800u, "WTF MUTEX ERROR ON LOCK! errno=%d in %s %s():%d", *v27, "api.c", "print_data", 1365);
    sub_47AB4(3, v35, 1);
    sub_62EC0(1);
  }
  if ( pthread_rwlock_wrlock((pthread_rwlock_t *)(v15 + 24)) )
  {
    v28 = _errno_location();
    snprintf(v35, 0x800u, "WTF WRLOCK ERROR ON LOCK! errno=%d in %s %s():%d", *v28, "api.c", "print_data", 1365);
    sub_47AB4(3, v35, 1);
    sub_62EC0(1);
  }
  sub_47080(dword_1AEB94, v8, "api.c", "print_data", 1366);
  v16 = *(_DWORD *)(dword_1AEB94 + 8);
  if ( pthread_rwlock_unlock((pthread_rwlock_t *)(v16 + 24)) )
  {
    v23 = _errno_location();
    snprintf(v35, 0x800u, "WTF RWLOCK ERROR ON UNLOCK! errno=%d in %s %s():%d", *v23, "api.c", "print_data", 1367);
    sub_47AB4(3, v35, 1);
    sub_62EC0(1);
  }
  if ( pthread_mutex_unlock((pthread_mutex_t *)v16) )
  {
    v24 = _errno_location();
    snprintf(v35, 0x800u, "WTF MUTEX ERROR ON UNLOCK! errno=%d in %s %s():%d", *v24, "api.c", "print_data", 1367);
    sub_47AB4(3, v35, 1);
    sub_62EC0(1);
  }
  off_9E444();
  return 0;
}
