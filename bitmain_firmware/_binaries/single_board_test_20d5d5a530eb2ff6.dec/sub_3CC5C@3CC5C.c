int __fastcall sub_3CC5C(int result, const char *a2)
{
  const char *v2; // r6
  size_t v4; // r0
  size_t v5; // r5
  size_t v6; // r2

  if ( dword_6E33D4 )
  {
    v2 = (const char *)result;
    pthread_mutex_lock(&stru_634A68);
    snprintf(ptr, 0x3FFu, "%s%s\n", a2, v2);
    v4 = strlen(ptr);
    v5 = fwrite(ptr, 1u, v4, (FILE *)dword_6E33D4);
    fflush((FILE *)dword_6E33D4);
    v6 = strlen(ptr);
    if ( v5 != v6 )
      printf("warning:write log failed,write:%d,target:%d\n", v5, v6);
    return j_pthread_mutex_unlock(&stru_634A68);
  }
  return result;
}
