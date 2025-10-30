void __noreturn sub_204A8()
{
  int v0; // r4
  int v1; // r3
  bool v2; // cc
  int v3; // r12
  _DWORD s[16]; // [sp+8h] [bp-844h] BYREF
  char v5[2052]; // [sp+48h] [bp-804h] BYREF

  memset(s, 0, sizeof(s));
  prctl(15, "heart_beat", 0, 0, 0);
LABEL_2:
  v0 = 0;
  pthread_setcancelstate(1, 0);
  while ( 1 )
  {
    while ( *(_DWORD *)(dword_A0D68 + 4 * v0 + 4) != 1 )
    {
LABEL_3:
      if ( ++v0 == 16 )
        goto LABEL_10;
    }
    sub_4A804(10);
    if ( sub_197A0() )
    {
      s[v0] = 0;
      goto LABEL_3;
    }
    v1 = v0;
    v2 = (unsigned int)dword_9E31C > 1;
    v3 = s[v0] + 1;
    s[v0] = v3;
    if ( !v2 )
      goto LABEL_3;
    ++v0;
    snprintf(v5, 0x800u, "chain[%d] heart beat fail %d times.\n", v1, v3);
    sub_47AB4(1, v5, 0);
    if ( v0 == 16 )
    {
LABEL_10:
      pthread_setcancelstate(0, 0);
      pthread_testcancel();
      sleep(0xAu);
      goto LABEL_2;
    }
  }
}
