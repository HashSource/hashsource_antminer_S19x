int __fastcall sub_3D008(const char *a1, const char *a2, const char *a3, const char *a4)
{
  __mode_t mask; // [sp+1Ch] [bp-A0h]
  char v10[24]; // [sp+20h] [bp-9Ch] BYREF
  char s[132]; // [sp+38h] [bp-84h] BYREF

  pthread_mutex_lock(&stru_634A68);
  if ( dword_6E33D4 )
  {
    fflush((FILE *)dword_6E33D4);
    fclose((FILE *)dword_6E33D4);
    dword_6E33D4 = 0;
  }
  pthread_mutex_unlock(&stru_634A68);
  pthread_mutex_lock(&mutex);
  memset(&byte_6E33D8, 0, 0x80u);
  if ( !dword_6E33D4 )
  {
    sub_3C940(v10);
    mask = umask(0);
    mkdir(off_21C0F4, 0x1FFu);
    umask(mask);
    memset(s, 0, 0x80u);
    snprintf(s, 0x80u, "%s%s_%s_%s_%s_%s_%s", off_21C0F4, (const char *)off_21C0F8, a1, a3, a4, a2, v10);
    if ( sub_3CF7C(s) )
    {
      sub_3CB94();
      dword_6E33D4 = (int)fopen(s, "a+");
      strcpy(&byte_6E33D8, s);
    }
  }
  pthread_mutex_unlock(&mutex);
  return pthread_cond_signal(&cond);
}
