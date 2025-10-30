void sub_34A20()
{
  int v0; // r5
  char v1[2048]; // [sp+0h] [bp-800h] BYREF

  v0 = dword_B6678;
  byte_B4128[0] = 0;
  if ( dword_B6678 && *(_DWORD *)(v0 + 12) != pthread_self() )
  {
    if ( (unsigned int)dword_B308C > 3 )
    {
      strcpy(v1, "cancel thread\n");
      sub_3B6AC(3, v1, 0, *(_DWORD *)"d\n");
      v0 = dword_B6678;
    }
    sub_3DB9C(v0);
    free((void *)dword_B6678);
    dword_B6678 = 0;
  }
}
