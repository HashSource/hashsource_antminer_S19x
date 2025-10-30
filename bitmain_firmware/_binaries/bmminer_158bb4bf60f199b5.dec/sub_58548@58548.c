_BYTE *sub_58548()
{
  _BYTE *v0; // r0
  int v1; // r12
  _BYTE *v2; // r4
  int v3; // r1
  _DWORD *v4; // r0
  int v5; // r2
  int v7; // r3
  int v8; // r1
  int *v9; // r0
  int *v10; // r0
  int *v11; // r0
  int *v12; // r0
  int *v13; // r0
  char s[2052]; // [sp+10h] [bp-804h] BYREF

  v0 = sub_496AC(0x738u, 1u, "cgminer.c", "add_pool", 757);
  v1 = dword_242F4C;
  v2 = v0;
  *(_DWORD *)v0 = dword_242F4C;
  v3 = dword_242F4C;
  v0[644] = 0;
  *((_DWORD *)v0 + 1) = v1;
  v4 = sub_4973C((void *)dword_244048, 4 * (v3 + 2), "cgminer.c", "add_pool", 769);
  v5 = dword_242F4C;
  dword_244048 = (int)v4;
  ++dword_242F4C;
  v4[v5] = v2;
  if ( pthread_mutex_init((pthread_mutex_t *)(v2 + 188), 0) )
  {
    v9 = _errno_location();
    snprintf(s, 0x800u, "Failed to pthread_mutex_init errno=%d in %s %s():%d", *v9, "cgminer.c", "add_pool", 772);
    goto LABEL_11;
  }
  if ( pthread_cond_init((pthread_cond_t *)(v2 + 296), 0) )
  {
    strcpy(s, "Failed to pthread_cond_init in add_pool");
    goto LABEL_11;
  }
  if ( pthread_mutex_init((pthread_mutex_t *)(v2 + 212), 0) )
  {
    v10 = _errno_location();
    snprintf(s, 0x800u, "Failed to pthread_mutex_init errno=%d in %s %s():%d", *v10, "cgminer.c", "add_pool", 779);
    goto LABEL_11;
  }
  if ( pthread_rwlock_init((pthread_rwlock_t *)(v2 + 236), 0) )
  {
    v11 = _errno_location();
    v8 = 779;
    v7 = *v11;
    goto LABEL_10;
  }
  if ( pthread_mutex_init((pthread_mutex_t *)(v2 + 704), 0) )
  {
    v12 = _errno_location();
    snprintf(s, 0x800u, "Failed to pthread_mutex_init errno=%d in %s %s():%d", *v12, "cgminer.c", "add_pool", 780);
    goto LABEL_11;
  }
  if ( pthread_mutex_init((pthread_mutex_t *)(v2 + 740), 0) )
  {
    v13 = _errno_location();
    snprintf(s, 0x800u, "Failed to pthread_mutex_init errno=%d in %s %s():%d", *v13, "cgminer.c", "add_pool", 781);
LABEL_11:
    sub_47AB4(3, s, 1);
    sub_54CCC(1, 1);
  }
  if ( pthread_rwlock_init((pthread_rwlock_t *)(v2 + 764), 0) )
  {
    v7 = *_errno_location();
    v8 = 781;
LABEL_10:
    snprintf(s, 0x800u, "Failed to pthread_rwlock_init errno=%d in %s %s():%d", v7, "cgminer.c", "add_pool", v8);
    goto LABEL_11;
  }
  *((_DWORD *)v2 + 34) = -1;
  *((_DWORD *)v2 + 46) = 0;
  *((_DWORD *)v2 + 40) = "{\"method\": \"getwork\", \"params\": [], \"id\":0}\n";
  *((_DWORD *)v2 + 86) = v2 + 344;
  *((_DWORD *)v2 + 87) = v2 + 344;
  *((_DWORD *)v2 + 14) = 1;
  sub_52B98();
  v2[580] = 0;
  return v2;
}
