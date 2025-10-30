int __fastcall sub_41B78(int result)
{
  char v1[2048]; // [sp+8h] [bp-804h] BYREF

  if ( *(_BYTE *)(result + 106) != 1 )
  {
    *(_BYTE *)(result + 106) = 1;
    result = pthread_create((pthread_t *)(result + 276), 0, (void *(*)(void *))sub_49008, (void *)result);
    if ( result )
    {
      strcpy(v1, "Failed to create pool longpoll thread");
      sub_1E4EC(3, v1, 1);
      sub_4BFB0(1);
    }
  }
  return result;
}
