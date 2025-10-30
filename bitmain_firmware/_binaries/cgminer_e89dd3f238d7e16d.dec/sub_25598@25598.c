int __fastcall sub_25598(int a1, _DWORD *a2)
{
  int v3; // r0
  char v7[2048]; // [sp+10h] [bp-80Ch] BYREF
  int v8; // [sp+810h] [bp-Ch]
  void *ptr; // [sp+814h] [bp-8h]

  ptr = sub_233A8(a2, 0);
  if ( (unsigned __int8)sub_2015C((const char *)ptr, "util.c", "parse_extranonce", 2349) != 1 )
  {
    if ( byte_90DC0 || byte_865D1 || dword_857E4 > 5 )
    {
      strcpy(v7, "Failed to get valid nonce1 in parse_extranonce");
      sub_1DB6C(6, v7, 0);
    }
    return 0;
  }
  else
  {
    v3 = sub_65E88(a2, 1);
    v8 = sub_66FB0(v3);
    if ( v8 )
    {
      sub_1F744(a1 + 212, "util.c", "parse_extranonce", 2361);
      free(*(void **)(a1 + 612));
      *(_DWORD *)(a1 + 612) = ptr;
      *(_DWORD *)(a1 + 1564) = strlen((const char *)ptr) >> 1;
      free(*(void **)(a1 + 616));
      *(_DWORD *)(a1 + 616) = sub_1F9F8(*(_DWORD *)(a1 + 1564), 1u, "util.c", "parse_extranonce", 2366);
      if ( !*(_DWORD *)(a1 + 616) )
      {
        snprintf(v7, 0x800u, "Failed to calloc pool->nonce1bin in %s %s():%d", "util.c", "parse_extranonce", 2368);
        sub_1DB6C(3, v7, 1);
        sub_4B2A0(1);
      }
      sub_1FF0C(*(_BYTE **)(a1 + 616), *(unsigned __int8 **)(a1 + 612), *(_DWORD *)(a1 + 1564));
      *(_DWORD *)(a1 + 632) = v8;
      sub_1F798(a1 + 212, "util.c", "parse_extranonce", 2371);
      if ( byte_90DC0 || byte_865D1 || dword_857E4 > 4 )
      {
        snprintf(v7, 0x800u, "Pool %d extranonce change requested", *(_DWORD *)a1);
        sub_1DB6C(5, v7, 0);
      }
      return 1;
    }
    else
    {
      if ( byte_90DC0 || byte_865D1 || dword_857E4 > 5 )
      {
        strcpy(v7, "Failed to get valid n2size in parse_extranonce");
        sub_1DB6C(6, v7, 0);
      }
      free(ptr);
      return 0;
    }
  }
}
