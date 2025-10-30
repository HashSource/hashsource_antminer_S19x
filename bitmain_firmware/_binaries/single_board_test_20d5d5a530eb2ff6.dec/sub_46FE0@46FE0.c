int __fastcall sub_46FE0(const char *a1, int a2, unsigned int a3, int a4)
{
  int *v8; // r10
  int v9; // r6
  void *v10; // r4
  unsigned int v11; // r5
  int v12; // r4
  int v13; // r2
  FILE *stream; // [sp+Ch] [bp-108h] BYREF
  char s[260]; // [sp+10h] [bp-104h] BYREF

  snprintf(s, 0x100u, "open file %s\n", a1);
  puts(s);
  stream = fopen(a1, "r");
  if ( stream )
  {
    v8 = &dword_705384;
    v9 = 0;
    if ( a4 )
    {
      while ( 1 )
      {
        v10 = calloc(0x38u, a3 * a2);
        v8[1] = (int)v10;
        ++v8;
        if ( !v10 )
        {
          sub_1E938(s, 0x30u);
          printf("%s ", s);
          printf("%s : malloc pattern buffer fail for asic %d\n", "sw_warmup_pattern", v9);
          snprintf(byte_645CE4, 0x100u, "malloc pattern buffer fail for asic %d", v9);
          sub_3CC5C((int)byte_645CE4, s);
          fclose(stream);
          sub_472C0(8, 0);
          return 8;
        }
        v11 = a3;
        if ( a3 )
        {
          v11 = 0;
          v12 = 0;
          do
          {
            v13 = v12++;
            v11 += sub_46918(&stream, v9, v13, a2);
          }
          while ( v12 != a3 );
        }
        if ( a3 * a2 > v11 )
          break;
        if ( ++v9 == a4 )
          goto LABEL_9;
      }
      sub_1E938(s, 0x30u);
      printf("%s ", s);
      printf(
        "%s : No enough work, asic = %d, work_count = %d, work_count_target = %d.\n\n",
        "sw_warmup_pattern",
        v9,
        v11,
        a3 * a2);
      snprintf(
        byte_645DE4,
        0x100u,
        "No enough work, asic = %d, work_count = %d, work_count_target = %d.\n",
        v9,
        v11,
        a3 * a2);
      sub_3CC5C((int)byte_645DE4, s);
      fclose(stream);
      sub_472C0(9, 0);
      return 9;
    }
    else
    {
LABEL_9:
      sub_1E938(s, 0x30u);
      printf("%s ", s);
      printf("%s : sweep warmup pattern file ok\n", "sw_warmup_pattern");
      strcpy(byte_645BE4, "sweep warmup pattern file ok");
      sub_3CC5C((int)byte_645BE4, s);
      fclose(stream);
      return 0;
    }
  }
  else
  {
    sub_1E938(s, 0x30u);
    printf("%s ", s);
    printf("%s : Fail to open pattern file %s.\n\n", "sw_warmup_pattern", a1);
    snprintf(byte_645AE4, 0x100u, "Fail to open pattern file %s.\n", a1);
    sub_3CC5C((int)byte_645AE4, s);
    sub_472C0(7, 0);
    return 7;
  }
}
