void sub_34CA8()
{
  int v0; // r5
  char v1[2052]; // [sp+0h] [bp-804h] BYREF

  v0 = dword_B6688;
  if ( dword_B6688 && *(_DWORD *)(v0 + 12) != pthread_self() )
  {
    if ( (unsigned int)dword_B308C > 3 )
    {
      strcpy(v1, "cancel thread\n");
      sub_3B6AC(3, v1, 0, *(_DWORD *)"d\n");
      v0 = dword_B6688;
    }
    sub_3DB9C(v0);
    free((void *)dword_B6688);
    dword_B6688 = 0;
  }
}
