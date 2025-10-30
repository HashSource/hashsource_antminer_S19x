int __fastcall sub_3CCE0(int result)
{
  const char *v1; // r5
  size_t v2; // r0
  size_t v3; // r5
  size_t v4; // r2

  if ( dword_6E33D4 )
  {
    v1 = (const char *)result;
    pthread_mutex_lock(&stru_634A68);
    snprintf(byte_634E80, 0x3FFu, "%s", v1);
    v2 = strlen(byte_634E80);
    v3 = fwrite(byte_634E80, 1u, v2, (FILE *)dword_6E33D4);
    fflush((FILE *)dword_6E33D4);
    v4 = strlen(byte_634E80);
    if ( v3 != v4 )
      printf("warning:write log failed,write:%d,target:%d\n", v3, v4);
    return j_pthread_mutex_unlock(&stru_634A68);
  }
  return result;
}
