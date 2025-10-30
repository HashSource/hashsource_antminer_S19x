int sub_17308()
{
  int v0; // r5
  int *v2; // r0
  int *v3; // r0
  int *v4; // r0
  int *v5; // r0
  char s[2052]; // [sp+10h] [bp-804h] BYREF

  if ( (unsigned int)dword_9E31C > 3 )
  {
    strcpy(s, "Enter 30s sleep to cool down hash board, waiting...\n");
    sub_47AB4(3, s, 0);
  }
  sub_4A804(30000);
  sub_15C50();
  if ( sub_15DA8() )
    sub_14B6C();
  sub_15E90(0);
  if ( pthread_mutex_lock(&mutex) )
  {
    v3 = _errno_location();
    snprintf(
      s,
      0x800u,
      "WTF MUTEX ERROR ON LOCK! errno=%d in %s %s():%d",
      *v3,
      "temperature/temperature.c",
      "get_pcb_temp_min",
      807);
    sub_47AB4(3, s, 1);
    sub_62EC0(1);
  }
  if ( pthread_rwlock_rdlock(&stru_9FEE4) )
  {
    v4 = _errno_location();
    snprintf(
      s,
      0x800u,
      "WTF RDLOCK ERROR ON LOCK! errno=%d in %s %s():%d",
      *v4,
      "temperature/temperature.c",
      "get_pcb_temp_min",
      807);
    sub_47AB4(3, s, 1);
    sub_62EC0(1);
  }
  if ( pthread_mutex_unlock(&mutex) )
  {
    v5 = _errno_location();
    snprintf(
      s,
      0x800u,
      "WTF MUTEX ERROR ON UNLOCK! errno=%d in %s %s():%d",
      *v5,
      "temperature/temperature.c",
      "get_pcb_temp_min",
      807);
    sub_47AB4(3, s, 1);
    sub_62EC0(1);
  }
  v0 = (__int16)dword_9FF08;
  if ( pthread_rwlock_unlock(&stru_9FEE4) )
  {
    v2 = _errno_location();
    snprintf(
      s,
      0x800u,
      "WTF RWLOCK ERROR ON UNLOCK! errno=%d in %s %s():%d",
      *v2,
      "temperature/temperature.c",
      "get_pcb_temp_min",
      807);
    sub_47AB4(3, s, 1);
    sub_62EC0(1);
  }
  off_9E444();
  if ( (unsigned int)dword_9E31C > 3 )
  {
    snprintf(s, 0x800u, "Environment temperature: %d\n", v0);
    sub_47AB4(3, s, 0);
  }
  return v0;
}
