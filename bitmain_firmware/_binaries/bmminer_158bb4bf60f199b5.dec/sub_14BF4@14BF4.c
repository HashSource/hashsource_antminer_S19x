int sub_14BF4()
{
  int v0; // r9
  int v1; // r10
  int v2; // r9
  int v3; // r9
  int result; // r0
  int v5; // r5
  int v6; // r9
  int *v7; // r0
  int *v8; // r0
  int *v9; // r0
  int v10; // r9
  int *v11; // r0
  int *v12; // r0
  int *v13; // r0
  int v14; // r9
  int *v15; // r0
  int *v16; // r0
  int *v17; // r0
  int *v18; // r0
  int *v19; // r0
  int *v20; // r0
  int *v21; // r0
  int *v22; // r0
  int *v23; // r0
  int *v24; // r0
  int *v25; // r0
  int *v26; // r0
  int *v27; // r0
  int *v28; // r0
  int *v29; // r0
  int *v30; // r0
  int *v31; // r0
  int *v32; // r0
  int *v33; // r0
  int *v34; // r0
  int *v35; // r0
  int *v36; // r0
  int *v37; // r0
  int *v38; // r0
  int *v39; // r0
  int *v40; // r0
  char s[2048]; // [sp+10h] [bp-800h] BYREF

  if ( (unsigned int)dword_9E31C <= 3 )
  {
    if ( !pthread_mutex_lock(&mutex) )
      goto LABEL_3;
LABEL_73:
    v18 = _errno_location();
    snprintf(
      s,
      0x800u,
      "WTF MUTEX ERROR ON LOCK! errno=%d in %s %s():%d",
      *v18,
      "temperature/temperature.c",
      "get_pcb_temp_min",
      807);
    sub_47AB4(3, s, 1);
    sub_62EC0(1);
  }
  strcpy(s, "  pcb temp ");
  sub_47EC8(3, s, 0);
  if ( pthread_mutex_lock(&mutex) )
    goto LABEL_73;
LABEL_3:
  if ( pthread_rwlock_rdlock(&stru_9FEE4) )
  {
    v19 = _errno_location();
    snprintf(
      s,
      0x800u,
      "WTF RDLOCK ERROR ON LOCK! errno=%d in %s %s():%d",
      *v19,
      "temperature/temperature.c",
      "get_pcb_temp_min",
      807);
    sub_47AB4(3, s, 1);
    sub_62EC0(1);
  }
  if ( pthread_mutex_unlock(&mutex) )
  {
    v20 = _errno_location();
    snprintf(
      s,
      0x800u,
      "WTF MUTEX ERROR ON UNLOCK! errno=%d in %s %s():%d",
      *v20,
      "temperature/temperature.c",
      "get_pcb_temp_min",
      807);
    sub_47AB4(3, s, 1);
    sub_62EC0(1);
  }
  v0 = (__int16)dword_9FF08;
  if ( pthread_rwlock_unlock(&stru_9FEE4) )
  {
    v22 = _errno_location();
    snprintf(
      s,
      0x800u,
      "WTF RWLOCK ERROR ON UNLOCK! errno=%d in %s %s():%d",
      *v22,
      "temperature/temperature.c",
      "get_pcb_temp_min",
      807);
    sub_47AB4(3, s, 1);
    sub_62EC0(1);
  }
  off_9E444();
  if ( v0 == 255 )
  {
    if ( (unsigned int)dword_9E31C <= 3 )
    {
LABEL_8:
      if ( !pthread_mutex_lock(&mutex) )
        goto LABEL_9;
LABEL_61:
      v15 = _errno_location();
      snprintf(
        s,
        0x800u,
        "WTF MUTEX ERROR ON LOCK! errno=%d in %s %s():%d",
        *v15,
        "temperature/temperature.c",
        "get_pcb_temp_max",
        812);
      sub_47AB4(3, s, 1);
      sub_62EC0(1);
    }
    strcpy(s, "INVALID");
    sub_47EC8(3, s, 0);
  }
  else
  {
    if ( (unsigned int)dword_9E31C <= 3 )
      goto LABEL_8;
    if ( pthread_mutex_lock(&mutex) )
    {
      v27 = _errno_location();
      snprintf(
        s,
        0x800u,
        "WTF MUTEX ERROR ON LOCK! errno=%d in %s %s():%d",
        *v27,
        "temperature/temperature.c",
        "get_pcb_temp_min",
        807);
      sub_47AB4(3, s, 1);
      sub_62EC0(1);
    }
    if ( pthread_rwlock_rdlock(&stru_9FEE4) )
    {
      v36 = _errno_location();
      snprintf(
        s,
        0x800u,
        "WTF RDLOCK ERROR ON LOCK! errno=%d in %s %s():%d",
        *v36,
        "temperature/temperature.c",
        "get_pcb_temp_min",
        807);
      sub_47AB4(3, s, 1);
      sub_62EC0(1);
    }
    if ( pthread_mutex_unlock(&mutex) )
    {
      v40 = _errno_location();
      snprintf(
        s,
        0x800u,
        "WTF MUTEX ERROR ON UNLOCK! errno=%d in %s %s():%d",
        *v40,
        "temperature/temperature.c",
        "get_pcb_temp_min",
        807);
      sub_47AB4(3, s, 1);
      sub_62EC0(1);
    }
    v14 = (__int16)dword_9FF08;
    if ( pthread_rwlock_unlock(&stru_9FEE4) )
    {
      v39 = _errno_location();
      snprintf(
        s,
        0x800u,
        "WTF RWLOCK ERROR ON UNLOCK! errno=%d in %s %s():%d",
        *v39,
        "temperature/temperature.c",
        "get_pcb_temp_min",
        807);
      sub_47AB4(3, s, 1);
      sub_62EC0(1);
    }
    off_9E444();
    snprintf(s, 0x800u, "%d", v14);
    sub_47EC8(3, s, 0);
  }
  if ( (unsigned int)dword_9E31C <= 3 )
    goto LABEL_8;
  strcpy(s, "~");
  sub_47EC8(3, s, 0);
  if ( pthread_mutex_lock(&mutex) )
    goto LABEL_61;
LABEL_9:
  if ( pthread_rwlock_rdlock(&stru_9FEE4) )
  {
    v16 = _errno_location();
    snprintf(
      s,
      0x800u,
      "WTF RDLOCK ERROR ON LOCK! errno=%d in %s %s():%d",
      *v16,
      "temperature/temperature.c",
      "get_pcb_temp_max",
      812);
    sub_47AB4(3, s, 1);
    sub_62EC0(1);
  }
  if ( pthread_mutex_unlock(&mutex) )
  {
    v17 = _errno_location();
    snprintf(
      s,
      0x800u,
      "WTF MUTEX ERROR ON UNLOCK! errno=%d in %s %s():%d",
      *v17,
      "temperature/temperature.c",
      "get_pcb_temp_max",
      812);
    sub_47AB4(3, s, 1);
    sub_62EC0(1);
  }
  v1 = (__int16)dword_9FF04;
  if ( pthread_rwlock_unlock(&stru_9FEE4) )
  {
    v21 = _errno_location();
    snprintf(
      s,
      0x800u,
      "WTF RWLOCK ERROR ON UNLOCK! errno=%d in %s %s():%d",
      *v21,
      "temperature/temperature.c",
      "get_pcb_temp_max",
      812);
    sub_47AB4(3, s, 1);
    sub_62EC0(1);
  }
  off_9E444();
  if ( v1 == 255 )
  {
    if ( (unsigned int)dword_9E31C <= 3 )
    {
LABEL_14:
      if ( !pthread_mutex_lock(&mutex) )
        goto LABEL_15;
LABEL_51:
      v11 = _errno_location();
      snprintf(
        s,
        0x800u,
        "WTF MUTEX ERROR ON LOCK! errno=%d in %s %s():%d",
        *v11,
        "temperature/temperature.c",
        "get_chip_temp_min",
        817);
      sub_47AB4(3, s, 1);
      sub_62EC0(1);
    }
    strcpy(s, "INVALID");
    sub_47EC8(3, s, 0);
  }
  else
  {
    if ( (unsigned int)dword_9E31C <= 3 )
      goto LABEL_14;
    if ( pthread_mutex_lock(&mutex) )
    {
      v26 = _errno_location();
      snprintf(
        s,
        0x800u,
        "WTF MUTEX ERROR ON LOCK! errno=%d in %s %s():%d",
        *v26,
        "temperature/temperature.c",
        "get_pcb_temp_max",
        812);
      sub_47AB4(3, s, 1);
      sub_62EC0(1);
    }
    if ( pthread_rwlock_rdlock(&stru_9FEE4) )
    {
      v38 = _errno_location();
      snprintf(
        s,
        0x800u,
        "WTF RDLOCK ERROR ON LOCK! errno=%d in %s %s():%d",
        *v38,
        "temperature/temperature.c",
        "get_pcb_temp_max",
        812);
      sub_47AB4(3, s, 1);
      sub_62EC0(1);
    }
    if ( pthread_mutex_unlock(&mutex) )
    {
      v37 = _errno_location();
      snprintf(
        s,
        0x800u,
        "WTF MUTEX ERROR ON UNLOCK! errno=%d in %s %s():%d",
        *v37,
        "temperature/temperature.c",
        "get_pcb_temp_max",
        812);
      sub_47AB4(3, s, 1);
      sub_62EC0(1);
    }
    v10 = (__int16)dword_9FF04;
    if ( pthread_rwlock_unlock(&stru_9FEE4) )
    {
      v32 = _errno_location();
      snprintf(
        s,
        0x800u,
        "WTF RWLOCK ERROR ON UNLOCK! errno=%d in %s %s():%d",
        *v32,
        "temperature/temperature.c",
        "get_pcb_temp_max",
        812);
      sub_47AB4(3, s, 1);
      sub_62EC0(1);
    }
    off_9E444();
    snprintf(s, 0x800u, "%d", v10);
    sub_47EC8(3, s, 0);
  }
  if ( (unsigned int)dword_9E31C <= 3 )
    goto LABEL_14;
  strcpy(s, "  chip temp ");
  sub_47EC8(3, s, 0);
  if ( pthread_mutex_lock(&mutex) )
    goto LABEL_51;
LABEL_15:
  if ( pthread_rwlock_rdlock(&stru_9FEE4) )
  {
    v12 = _errno_location();
    snprintf(
      s,
      0x800u,
      "WTF RDLOCK ERROR ON LOCK! errno=%d in %s %s():%d",
      *v12,
      "temperature/temperature.c",
      "get_chip_temp_min",
      817);
    sub_47AB4(3, s, 1);
    sub_62EC0(1);
  }
  if ( pthread_mutex_unlock(&mutex) )
  {
    v13 = _errno_location();
    snprintf(
      s,
      0x800u,
      "WTF MUTEX ERROR ON UNLOCK! errno=%d in %s %s():%d",
      *v13,
      "temperature/temperature.c",
      "get_chip_temp_min",
      817);
    sub_47AB4(3, s, 1);
    sub_62EC0(1);
  }
  v2 = SHIWORD(dword_9FF08);
  if ( pthread_rwlock_unlock(&stru_9FEE4) )
  {
    v23 = _errno_location();
    snprintf(
      s,
      0x800u,
      "WTF RWLOCK ERROR ON UNLOCK! errno=%d in %s %s():%d",
      *v23,
      "temperature/temperature.c",
      "get_chip_temp_min",
      817);
    sub_47AB4(3, s, 1);
    sub_62EC0(1);
  }
  off_9E444();
  if ( v2 == 255 )
  {
    if ( (unsigned int)dword_9E31C <= 3 )
    {
LABEL_20:
      if ( !pthread_mutex_lock(&mutex) )
        goto LABEL_21;
LABEL_41:
      v7 = _errno_location();
      snprintf(
        s,
        0x800u,
        "WTF MUTEX ERROR ON LOCK! errno=%d in %s %s():%d",
        *v7,
        "temperature/temperature.c",
        "get_chip_temp_max",
        822);
      sub_47AB4(3, s, 1);
      sub_62EC0(1);
    }
    strcpy(s, "INVALID");
    sub_47EC8(3, s, 0);
  }
  else
  {
    if ( (unsigned int)dword_9E31C <= 3 )
      goto LABEL_20;
    if ( pthread_mutex_lock(&mutex) )
    {
      v25 = _errno_location();
      snprintf(
        s,
        0x800u,
        "WTF MUTEX ERROR ON LOCK! errno=%d in %s %s():%d",
        *v25,
        "temperature/temperature.c",
        "get_chip_temp_min",
        817);
      sub_47AB4(3, s, 1);
      sub_62EC0(1);
    }
    if ( pthread_rwlock_rdlock(&stru_9FEE4) )
    {
      v31 = _errno_location();
      snprintf(
        s,
        0x800u,
        "WTF RDLOCK ERROR ON LOCK! errno=%d in %s %s():%d",
        *v31,
        "temperature/temperature.c",
        "get_chip_temp_min",
        817);
      sub_47AB4(3, s, 1);
      sub_62EC0(1);
    }
    if ( pthread_mutex_unlock(&mutex) )
    {
      v30 = _errno_location();
      snprintf(
        s,
        0x800u,
        "WTF MUTEX ERROR ON UNLOCK! errno=%d in %s %s():%d",
        *v30,
        "temperature/temperature.c",
        "get_chip_temp_min",
        817);
      sub_47AB4(3, s, 1);
      sub_62EC0(1);
    }
    v6 = SHIWORD(dword_9FF08);
    if ( pthread_rwlock_unlock(&stru_9FEE4) )
    {
      v29 = _errno_location();
      snprintf(
        s,
        0x800u,
        "WTF RWLOCK ERROR ON UNLOCK! errno=%d in %s %s():%d",
        *v29,
        "temperature/temperature.c",
        "get_chip_temp_min",
        817);
      sub_47AB4(3, s, 1);
      sub_62EC0(1);
    }
    off_9E444();
    snprintf(s, 0x800u, "%d", v6);
    sub_47EC8(3, s, 0);
  }
  if ( (unsigned int)dword_9E31C <= 3 )
    goto LABEL_20;
  strcpy(s, "~");
  sub_47EC8(3, s, 0);
  if ( pthread_mutex_lock(&mutex) )
    goto LABEL_41;
LABEL_21:
  if ( pthread_rwlock_rdlock(&stru_9FEE4) )
  {
    v8 = _errno_location();
    snprintf(
      s,
      0x800u,
      "WTF RDLOCK ERROR ON LOCK! errno=%d in %s %s():%d",
      *v8,
      "temperature/temperature.c",
      "get_chip_temp_max",
      822);
    sub_47AB4(3, s, 1);
    sub_62EC0(1);
  }
  if ( pthread_mutex_unlock(&mutex) )
  {
    v9 = _errno_location();
    snprintf(
      s,
      0x800u,
      "WTF MUTEX ERROR ON UNLOCK! errno=%d in %s %s():%d",
      *v9,
      "temperature/temperature.c",
      "get_chip_temp_max",
      822);
    sub_47AB4(3, s, 1);
    sub_62EC0(1);
  }
  v3 = SHIWORD(dword_9FF04);
  if ( pthread_rwlock_unlock(&stru_9FEE4) )
  {
    v24 = _errno_location();
    snprintf(
      s,
      0x800u,
      "WTF RWLOCK ERROR ON UNLOCK! errno=%d in %s %s():%d",
      *v24,
      "temperature/temperature.c",
      "get_chip_temp_max",
      822);
    sub_47AB4(3, s, 1);
    sub_62EC0(1);
  }
  result = off_9E444();
  if ( v3 == 255 )
  {
    if ( (unsigned int)dword_9E31C <= 3 )
      return result;
    strcpy(s, "INVALID");
    result = sub_47EC8(3, s, 0);
  }
  else
  {
    if ( (unsigned int)dword_9E31C <= 3 )
      return result;
    if ( pthread_mutex_lock(&mutex) )
    {
      v28 = _errno_location();
      snprintf(
        s,
        0x800u,
        "WTF MUTEX ERROR ON LOCK! errno=%d in %s %s():%d",
        *v28,
        "temperature/temperature.c",
        "get_chip_temp_max",
        822);
      sub_47AB4(3, s, 1);
      sub_62EC0(1);
    }
    if ( pthread_rwlock_rdlock(&stru_9FEE4) )
    {
      v34 = _errno_location();
      snprintf(
        s,
        0x800u,
        "WTF RDLOCK ERROR ON LOCK! errno=%d in %s %s():%d",
        *v34,
        "temperature/temperature.c",
        "get_chip_temp_max",
        822);
      sub_47AB4(3, s, 1);
      sub_62EC0(1);
    }
    if ( pthread_mutex_unlock(&mutex) )
    {
      v33 = _errno_location();
      snprintf(
        s,
        0x800u,
        "WTF MUTEX ERROR ON UNLOCK! errno=%d in %s %s():%d",
        *v33,
        "temperature/temperature.c",
        "get_chip_temp_max",
        822);
      sub_47AB4(3, s, 1);
      sub_62EC0(1);
    }
    v5 = SHIWORD(dword_9FF04);
    if ( pthread_rwlock_unlock(&stru_9FEE4) )
    {
      v35 = _errno_location();
      snprintf(
        s,
        0x800u,
        "WTF RWLOCK ERROR ON UNLOCK! errno=%d in %s %s():%d",
        *v35,
        "temperature/temperature.c",
        "get_chip_temp_max",
        822);
      sub_47AB4(3, s, 1);
      sub_62EC0(1);
    }
    off_9E444();
    snprintf(s, 0x800u, "%d", v5);
    result = sub_47EC8(3, s, 0);
  }
  if ( (unsigned int)dword_9E31C > 3 )
  {
    strcpy(s, "\n");
    return sub_47EC8(3, s, 0);
  }
  return result;
}
