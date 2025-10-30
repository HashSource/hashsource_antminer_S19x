int __fastcall sub_41908(pthread_t *a1)
{
  int result; // r0
  char v3[2048]; // [sp+Ch] [bp-828h] BYREF
  pthread_attr_t attr; // [sp+80Ch] [bp-28h] BYREF

  byte_9548C = 1;
  pthread_attr_init(&attr);
  pthread_attr_setstacksize(&attr, 0x100000u);
  if ( pthread_create(a1 + 178, &attr, (void *(*)(void *))sub_3FC64, a1) )
  {
    strcpy(v3, "Failed to create stratum sthread");
    sub_1E4EC(3, v3, 1);
    sub_4BFB0(1);
  }
  result = pthread_create(a1 + 179, &attr, (void *(*)(void *))sub_3F6E4, a1);
  if ( result )
  {
    strcpy(v3, "Failed to create stratum rthread");
    sub_1E4EC(3, v3, 1);
    sub_4BFB0(1);
  }
  return result;
}
