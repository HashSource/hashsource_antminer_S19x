void sub_21CDC()
{
  int v0; // r5
  char v1[2052]; // [sp+0h] [bp-804h] BYREF

  v0 = dword_23A2A4;
  if ( dword_23A2A4 && *(_DWORD *)(v0 + 12) != pthread_self() )
  {
    if ( (unsigned int)dword_9E31C > 3 )
    {
      strcpy(v1, "cancel thread\n");
      sub_47AB4(3, v1, 0);
      v0 = dword_23A2A4;
    }
    sub_4A1F0(v0);
    free((void *)dword_23A2A4);
    dword_23A2A4 = 0;
  }
}
