char *sub_2E5D4()
{
  int v0; // r2
  char v2[2048]; // [sp+Ch] [bp-808h] BYREF
  char *v3; // [sp+80Ch] [bp-8h]

  v3 = (char *)sub_1F9F8(0x738u, 1u, "cgminer.c", "add_pool", 769);
  v3[644] = 0;
  if ( !v3 )
  {
    strcpy(v2, "Failed to malloc pool in add_pool");
    sub_1DB6C(3, v2, 1);
    sub_4B2A0(1);
  }
  *((_DWORD *)v3 + 1) = dword_90E90;
  *(_DWORD *)v3 = *((_DWORD *)v3 + 1);
  dword_90F34 = (int)sub_1FAC4((void *)dword_90F34, 4 * (dword_90E90 + 2), "cgminer.c", "add_pool", 781);
  v0 = dword_90E90++;
  *(_DWORD *)(dword_90F34 + 4 * v0) = v3;
  sub_2D760((pthread_mutex_t *)(v3 + 188), "cgminer.c", "add_pool", 784);
  if ( pthread_cond_init((pthread_cond_t *)(v3 + 296), 0) )
  {
    strcpy(v2, "Failed to pthread_cond_init in add_pool");
    sub_1DB6C(3, v2, 1);
    sub_4B2A0(1);
  }
  sub_2D8A0((int)(v3 + 212), "cgminer.c", "add_pool", 791);
  sub_2D760((pthread_mutex_t *)(v3 + 704), "cgminer.c", "add_pool", 792);
  sub_2D8A0((int)(v3 + 740), "cgminer.c", "add_pool", 793);
  *((_DWORD *)v3 + 86) = v3 + 344;
  *((_DWORD *)v3 + 87) = v3 + 344;
  *((_DWORD *)v3 + 34) = -1;
  *((char **)v3 + 40) = off_85AEC[0];
  *((_DWORD *)v3 + 46) = 0;
  *((_DWORD *)v3 + 14) = 1;
  sub_2E310();
  v3[580] = 0;
  return v3;
}
