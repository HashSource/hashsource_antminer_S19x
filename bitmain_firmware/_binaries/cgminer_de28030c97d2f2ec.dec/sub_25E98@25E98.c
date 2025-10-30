int __fastcall sub_25E98(int a1, _DWORD *a2)
{
  int v3; // r0
  char v7[2048]; // [sp+10h] [bp-80Ch] BYREF
  int v8; // [sp+810h] [bp-Ch]
  void *ptr; // [sp+814h] [bp-8h]

  ptr = sub_23C50(a2, 0);
  if ( (unsigned __int8)sub_20A38((const char *)ptr, "util.c", "parse_extranonce", 2349) != 1 )
  {
    if ( byte_91F58 || byte_87769 || dword_8697C > 5 )
    {
      strcpy(v7, "Failed to get valid nonce1 in parse_extranonce");
      sub_1E4EC(6, v7, 0);
    }
    return 0;
  }
  else
  {
    v3 = sub_66B80(a2, 1);
    v8 = sub_67C98(v3);
    if ( v8 )
    {
      sub_2002C(a1 + 212, "util.c", "parse_extranonce", 2361);
      free(*(void **)(a1 + 628));
      *(_DWORD *)(a1 + 628) = ptr;
      *(_DWORD *)(a1 + 1580) = strlen((const char *)ptr) >> 1;
      free(*(void **)(a1 + 632));
      *(_DWORD *)(a1 + 632) = sub_202D4(*(_DWORD *)(a1 + 1580), 1u, "util.c", "parse_extranonce", 2366);
      if ( !*(_DWORD *)(a1 + 632) )
      {
        snprintf(v7, 0x800u, "Failed to calloc pool->nonce1bin in %s %s():%d", "util.c", "parse_extranonce", 2368);
        sub_1E4EC(3, v7, 1);
        sub_4BFB0(1);
      }
      sub_207E8(*(_BYTE **)(a1 + 632), *(unsigned __int8 **)(a1 + 628), *(_DWORD *)(a1 + 1580));
      *(_DWORD *)(a1 + 648) = v8;
      sub_2007C(a1 + 212, "util.c", "parse_extranonce", 2371);
      if ( byte_91F58 || byte_87769 || dword_8697C > 4 )
      {
        snprintf(v7, 0x800u, "Pool %d extranonce change requested", *(_DWORD *)a1);
        sub_1E4EC(5, v7, 0);
      }
      return 1;
    }
    else
    {
      if ( byte_91F58 || byte_87769 || dword_8697C > 5 )
      {
        strcpy(v7, "Failed to get valid n2size in parse_extranonce");
        sub_1E4EC(6, v7, 0);
      }
      free(ptr);
      return 0;
    }
  }
}
