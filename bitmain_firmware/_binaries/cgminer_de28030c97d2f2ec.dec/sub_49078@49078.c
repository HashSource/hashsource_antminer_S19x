void __fastcall sub_49078(int a1)
{
  const char *v1; // r3
  char v3[8]; // [sp+14h] [bp-818h] BYREF
  __time_t v4[2]; // [sp+814h] [bp-18h] BYREF
  int v5; // [sp+81Ch] [bp-10h]
  _DWORD *v6; // [sp+820h] [bp-Ch]
  void *ptr; // [sp+824h] [bp-8h]

  v5 = 0;
  sub_22308(v4);
  sub_2E354((pthread_mutex_t *)(a1 + 188), "cgminer.c", "reap_curl", 10247);
  ptr = (void *)(*(_DWORD *)(a1 + 344) - 4);
  v6 = (_DWORD *)(*((_DWORD *)ptr + 1) - 4);
  while ( (char *)ptr + 4 != (void *)(a1 + 344) )
  {
    if ( *(int *)(a1 + 288) <= 1 )
      return;
    if ( v4[0] - *((_DWORD *)ptr + 3) > 300 )
    {
      ++v5;
      --*(_DWORD *)(a1 + 288);
      sub_2DF24((int)ptr + 4);
      free(ptr);
    }
    ptr = v6;
    v6 = (_DWORD *)(v6[1] - 4);
  }
  sub_2E484((pthread_mutex_t *)(a1 + 188), "cgminer.c", "reap_curl", 10265);
  if ( v5 && byte_87768 && (byte_91F58 || byte_87769 || dword_8697C > 6) )
  {
    if ( v5 <= 1 )
      v1 = byte_6F818;
    else
      v1 = "s";
    snprintf(v3, 0x800u, "Reaped %d curl%s from pool %d", v5, v1, *(_DWORD *)a1);
    sub_1E4EC(7, v3, 0);
  }
}
