char *sub_2F5CC()
{
  int v0; // r2
  char v2[2048]; // [sp+Ch] [bp-808h] BYREF
  char *v3; // [sp+80Ch] [bp-8h]

  v3 = (char *)sub_202D4(0x748u, 1u, "cgminer.c", "add_pool", 769);
  v3[660] = 0;
  if ( !v3 )
  {
    strcpy(v2, "Failed to malloc pool in add_pool");
    sub_1E4EC(3, v2, 1);
    sub_4BFB0(1);
  }
  *((_DWORD *)v3 + 1) = dword_92028;
  *(_DWORD *)v3 = *((_DWORD *)v3 + 1);
  dword_920CC = (int)sub_203A0((void *)dword_920CC, 4 * (dword_92028 + 2), "cgminer.c", "add_pool", 781);
  v0 = dword_92028++;
  *(_DWORD *)(dword_920CC + 4 * v0) = v3;
  sub_2E794((pthread_mutex_t *)(v3 + 188), "cgminer.c", "add_pool", 784);
  if ( pthread_cond_init((pthread_cond_t *)(v3 + 296), 0) )
  {
    strcpy(v2, "Failed to pthread_cond_init in add_pool");
    sub_1E4EC(3, v2, 1);
    sub_4BFB0(1);
  }
  sub_2E8CC((int)(v3 + 212), "cgminer.c", "add_pool", 791);
  sub_2E794((pthread_mutex_t *)v3 + 30, "cgminer.c", "add_pool", 792);
  sub_2E8CC((int)(v3 + 756), "cgminer.c", "add_pool", 793);
  *((_DWORD *)v3 + 86) = v3 + 344;
  *((_DWORD *)v3 + 87) = v3 + 344;
  *((_DWORD *)v3 + 34) = -1;
  *((char **)v3 + 40) = off_86C84[0];
  *((_DWORD *)v3 + 46) = 0;
  *((_DWORD *)v3 + 14) = 1;
  sub_2F314();
  v3[580] = 0;
  return v3;
}
