void sub_34558()
{
  int v0; // r5
  char v1[2052]; // [sp+0h] [bp-804h] BYREF

  v0 = dword_B3914;
  if ( dword_B3914 && *(_DWORD *)(v0 + 12) != pthread_self() )
  {
    if ( (unsigned int)off_AFC24 > 3 )
    {
      strcpy(v1, "cancel thread\n");
      sub_3AF5C(3, v1, 0, *(_DWORD *)"d\n");
      v0 = dword_B3914;
    }
    sub_3D384(v0);
    free((void *)dword_B3914);
    dword_B3914 = 0;
  }
}
