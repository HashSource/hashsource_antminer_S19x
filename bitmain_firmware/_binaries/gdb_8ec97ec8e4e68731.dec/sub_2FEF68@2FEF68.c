unsigned int __fastcall sub_2FEF68(_DWORD *a1, int a2, int a3)
{
  unsigned int result; // r0
  int v7; // r3
  const char *v8; // r0
  int v9; // r3
  int v10; // r2
  int v11; // r0
  void *ptr; // [sp+0h] [bp-8h] BYREF
  void *v13; // [sp+4h] [bp-4h] BYREF

  result = a1[5] & 0xC0000;
  if ( result == 0x40000 )
  {
    v9 = *(_DWORD *)(a3 + 24);
    v8 = "%B: ignoring duplicate section `%A'\n";
    goto LABEL_16;
  }
  if ( result > 0x40000 )
  {
    if ( result == 0x80000 )
    {
      v7 = *(_DWORD *)(a2 + 4);
      if ( (*(_DWORD *)(*(_DWORD *)(v7 + 148) + 40) & 0x200000) != 0 || a1[9] == *(_DWORD *)(v7 + 36) )
        goto LABEL_6;
LABEL_9:
      v8 = "%B: duplicate section `%A' has different size\n";
      v9 = *(_DWORD *)(a3 + 24);
LABEL_16:
      (*(void (__fastcall **)(const char *, _DWORD, _DWORD *))(v9 + 44))(v8, a1[37], a1);
      v7 = *(_DWORD *)(a2 + 4);
      goto LABEL_6;
    }
    if ( result == 786432 )
    {
      v7 = *(_DWORD *)(a2 + 4);
      if ( ((*(_DWORD *)(*(_DWORD *)(v7 + 148) + 40) >> 5) & 0x10000) != 0 )
      {
LABEL_6:
        a1[31] = v7;
        a1[15] = &off_470950;
        return 1;
      }
      v10 = a1[9];
      if ( v10 == *(_DWORD *)(v7 + 36) )
      {
        if ( v10 )
        {
          v11 = a1[37];
          v13 = (void *)((*(_DWORD *)(*(_DWORD *)(v7 + 148) + 40) >> 5) & 0x10000);
          if ( sub_2ADFDC(v11, (int)a1, (int *)&ptr) )
          {
            if ( sub_2ADFDC(*(_DWORD *)(*(_DWORD *)(a2 + 4) + 148), *(_DWORD *)(a2 + 4), (int *)&v13) )
            {
              if ( memcmp(ptr, v13, a1[9]) )
                (*(void (**)(const char *, ...))(*(_DWORD *)(a3 + 24) + 44))(
                  "%B: duplicate section `%A' has different contents\n",
                  a1[37],
                  a1);
            }
            else
            {
              (*(void (__fastcall **)(const char *, _DWORD))(*(_DWORD *)(a3 + 24) + 44))(
                "%B: could not read contents of section `%A'\n",
                *(_DWORD *)(*(_DWORD *)(a2 + 4) + 148));
            }
          }
          else
          {
            (*(void (**)(const char *, ...))(*(_DWORD *)(a3 + 24) + 44))(
              "%B: could not read contents of section `%A'\n",
              a1[37],
              a1);
          }
          if ( ptr )
            free(ptr);
          if ( v13 )
            free(v13);
          v7 = *(_DWORD *)(a2 + 4);
        }
        goto LABEL_6;
      }
      goto LABEL_9;
    }
LABEL_26:
    sub_2A6BF0((int)"linker.c", 2814, (int)"_bfd_handle_already_linked");
  }
  if ( result )
    goto LABEL_26;
  v7 = *(_DWORD *)(a2 + 4);
  if ( (*(_BYTE *)(a1[37] + 44) & 0x40) == 0 || (*(_DWORD *)(*(_DWORD *)(v7 + 148) + 40) & 0x200000) == 0 )
    goto LABEL_6;
  *(_DWORD *)(a2 + 4) = a1;
  return result;
}
