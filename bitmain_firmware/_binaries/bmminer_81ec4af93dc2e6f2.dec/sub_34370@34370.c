void sub_34370()
{
  int v0; // r5
  char v1[2048]; // [sp+0h] [bp-800h] BYREF

  v0 = dword_B3908;
  byte_B13B8[0] = 0;
  if ( dword_B3908 && *(_DWORD *)(v0 + 12) != pthread_self() )
  {
    if ( (unsigned int)off_AFC24 > 3 )
    {
      strcpy(v1, "cancel thread\n");
      sub_3AF5C(3, v1, 0, *(_DWORD *)"d\n");
      v0 = dword_B3908;
    }
    sub_3D384(v0);
    free((void *)dword_B3908);
    dword_B3908 = 0;
  }
}
