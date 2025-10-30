int __fastcall sub_469FC(const char *a1)
{
  int v2; // r6
  _DWORD *v3; // r9
  size_t v4; // r8
  void *v5; // r4
  int v6; // r3
  size_t v7; // r5
  unsigned int v8; // r4
  int v9; // r0
  FILE *stream; // [sp+Ch] [bp-108h] BYREF
  char s[260]; // [sp+10h] [bp-104h] BYREF

  snprintf(s, 0x100u, "open file %s\n", a1);
  puts(s);
  stream = fopen(a1, "r");
  if ( stream )
  {
    v2 = 0;
    v3 = &unk_7050FC;
    v4 = *(_DWORD *)(dword_705300 + 24) * *(_DWORD *)(dword_705300 + 32);
    if ( *(_DWORD *)(dword_705300 + 4) )
    {
      while ( 1 )
      {
        v5 = calloc(0x38u, v4);
        v3[1] = v5;
        ++v3;
        if ( !v5 )
        {
          sub_1E938(s, 0x30u);
          printf("%s ", s);
          printf("%s : malloc pattern buffer fail for asic %d\n", "sw_pt_init", v2);
          snprintf(byte_6453E4, 0x100u, "malloc pattern buffer fail for asic %d", v2);
          sub_3CC5C((int)byte_6453E4, s);
          fclose(stream);
          sub_472C0(8, 0);
          return 8;
        }
        v6 = dword_705300;
        v7 = *(_DWORD *)(dword_705300 + 24);
        if ( v7 )
        {
          v7 = 0;
          v8 = 0;
          do
          {
            v9 = sub_46918(&stream, v2, v8, *(_DWORD *)(v6 + 32));
            v6 = dword_705300;
            ++v8;
            v7 += v9;
          }
          while ( *(_DWORD *)(dword_705300 + 24) > v8 );
        }
        if ( v4 > v7 )
          break;
        if ( *(_DWORD *)(dword_705300 + 4) <= (unsigned int)++v2 )
          goto LABEL_9;
      }
      sub_1E938(s, 0x30u);
      printf("%s ", s);
      printf("%s : No enough work, asic = %d, work_count = %d, work_count_target = %d.\n\n", "sw_pt_init", v2, v7, v4);
      snprintf(byte_6454E4, 0x100u, "No enough work, asic = %d, work_count = %d, work_count_target = %d.\n", v2, v7, v4);
      sub_3CC5C((int)byte_6454E4, s);
      fclose(stream);
      sub_472C0(9, 0);
      return 9;
    }
    else
    {
LABEL_9:
      sub_1E938(s, 0x30u);
      printf("%s ", s);
      printf("%s : sw_pt_init ok\n", "sw_pt_init");
      strcpy(byte_6452E4, "sw_pt_init ok");
      sub_3CC5C((int)byte_6452E4, s);
      fclose(stream);
      return 0;
    }
  }
  else
  {
    sub_1E938(s, 0x30u);
    printf("%s ", s);
    printf("%s : Fail to open pattern file %s.\n\n", "sw_pt_init", a1);
    snprintf(byte_6451E4, 0x100u, "Fail to open pattern file %s.\n", a1);
    sub_3CC5C((int)byte_6451E4, s);
    sub_472C0(7, 0);
    return 7;
  }
}
