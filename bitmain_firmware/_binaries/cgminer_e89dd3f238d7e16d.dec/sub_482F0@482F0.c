void __fastcall sub_482F0(int a1)
{
  const char *v1; // r3
  char v3[8]; // [sp+14h] [bp-818h] BYREF
  __time_t v4[2]; // [sp+814h] [bp-18h] BYREF
  int v5; // [sp+81Ch] [bp-10h]
  _DWORD *v6; // [sp+820h] [bp-Ch]
  void *ptr; // [sp+824h] [bp-8h]

  v5 = 0;
  sub_21AC0(v4);
  sub_2D2FC((pthread_mutex_t *)(a1 + 188), "cgminer.c", "reap_curl", 10247);
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
      sub_2CEB0((int)ptr + 4);
      free(ptr);
    }
    ptr = v6;
    v6 = (_DWORD *)(v6[1] - 4);
  }
  sub_2D434((pthread_mutex_t *)(a1 + 188), "cgminer.c", "reap_curl", 10265);
  if ( v5 && byte_865D0 && (byte_90DC0 || byte_865D1 || dword_857E4 > 6) )
  {
    if ( v5 <= 1 )
      v1 = byte_6E658;
    else
      v1 = "s";
    snprintf(v3, 0x800u, "Reaped %d curl%s from pool %d", v5, v1, *(_DWORD *)a1);
    sub_1DB6C(7, v3, 0);
  }
}
