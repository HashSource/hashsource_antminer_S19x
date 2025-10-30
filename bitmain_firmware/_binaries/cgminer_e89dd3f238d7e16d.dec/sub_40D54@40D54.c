int __fastcall sub_40D54(int result)
{
  char v1[2048]; // [sp+8h] [bp-804h] BYREF

  if ( *(_BYTE *)(result + 106) != 1 )
  {
    *(_BYTE *)(result + 106) = 1;
    result = pthread_create((pthread_t *)(result + 276), 0, (void *(*)(void *))sub_4827C, (void *)result);
    if ( result )
    {
      strcpy(v1, "Failed to create pool longpoll thread");
      sub_1DB6C(3, v1, 1);
      sub_4B2A0(1);
    }
  }
  return result;
}
