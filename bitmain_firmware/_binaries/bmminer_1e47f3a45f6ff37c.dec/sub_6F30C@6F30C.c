size_t __fastcall sub_6F30C(int a1, _BYTE *a2, int a3, const void *a4, size_t n)
{
  char v11[2048]; // [sp+14h] [bp-810h] BYREF
  void *ptr; // [sp+814h] [bp-10h]

  ptr = 0;
  if ( pthread_mutex_lock(&stru_5369C8) )
  {
    strcpy(v11, "failed to i2c lock\n");
    sub_3B6AC(0, v11, 0, (int)v11);
    return -4;
  }
  else if ( a3 == 1 )
  {
    if ( a4 && n )
    {
      ptr = malloc(n + 1);
      *(_BYTE *)ptr = *a2;
      memcpy((char *)ptr + 1, a4, n);
      if ( n + 1 != sub_6D08C(a1, ptr, n + 1) )
      {
        strcpy(v11, "failed to write i2c reg\n");
        sub_3B6AC(0, v11, 0, (int)v11);
      }
      if ( ptr )
        free(ptr);
      pthread_mutex_unlock(&stru_5369C8);
      return n;
    }
    else
    {
      strcpy(v11, "bad register data size\n");
      sub_3B6AC(1, v11, 0, (int)v11);
      return -1;
    }
  }
  else
  {
    strcpy(v11, "bad register bytes\n");
    sub_3B6AC(1, v11, 0, (int)v11);
    return -1;
  }
}
