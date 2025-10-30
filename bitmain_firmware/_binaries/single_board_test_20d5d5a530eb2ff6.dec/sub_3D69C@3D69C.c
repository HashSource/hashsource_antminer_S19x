void __noreturn sub_3D69C()
{
  int v0; // r5
  const char *v1; // r4
  char s2[128]; // [sp+8h] [bp-C904h] BYREF
  char v3[128]; // [sp+88h] [bp-C884h] BYREF
  _BYTE s[51204]; // [sp+108h] [bp-C804h] BYREF

  while ( 1 )
  {
    memset(s, 0, 0xC800u);
    v0 = sub_3CA58((int)s, (const char *)off_21C0F8) - 1;
    if ( v0 >= 0 )
      break;
LABEL_10:
    pthread_mutex_lock(&mutex);
    pthread_cond_wait(&cond, &mutex);
    pthread_mutex_unlock(&mutex);
  }
  v1 = &s[128 * v0];
  while ( 1 )
  {
    snprintf(s2, 0x80u, "%s%s", off_21C0F4, v1);
    pthread_mutex_lock(&mutex);
    if ( byte_6E33D8 && !strncmp(&byte_6E33D8, s2, 0x80u) )
    {
      pthread_mutex_unlock(&mutex);
LABEL_6:
      --v0;
      v1 -= 128;
      if ( v0 == -1 )
        goto LABEL_10;
    }
    else
    {
      pthread_mutex_unlock(&mutex);
      if ( !sub_3D260(s2) )
        goto LABEL_6;
      --v0;
      snprintf(v3, 0x80u, "%s%s_%s", off_21C0F4, off_21C0FC, v1);
      rename(s2, v3);
      sub_3CBF8();
      v1 -= 128;
      if ( v0 == -1 )
        goto LABEL_10;
    }
  }
}
