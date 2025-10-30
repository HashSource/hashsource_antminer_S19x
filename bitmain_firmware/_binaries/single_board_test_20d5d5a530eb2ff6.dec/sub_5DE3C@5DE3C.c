int __fastcall sub_5DE3C(const char *a1, int a2, int a3, int a4)
{
  FILE *v7; // r6
  int v8; // r11
  char *v9; // r10
  char *v10; // r5
  int v11; // r4
  int v12; // r0
  int v13; // r1
  int v14; // r4
  int v18; // [sp+Ch] [bp-70h]
  char v19[48]; // [sp+14h] [bp-68h] BYREF
  char ptr[56]; // [sp+44h] [bp-38h] BYREF

  if ( a1 )
  {
    if ( *a1 )
    {
      v18 = access(a1, 0);
      if ( v18 )
      {
        v18 = -3;
        sub_1E938(ptr, 0x30u);
        printf("%s ", ptr);
        printf("%s : pattern file: %s don't exist!!!\n", "parse_bin_file_to_pattern_ex", a1);
        snprintf(byte_649C38, 0x100u, "pattern file: %s don't exist!!!", a1);
        sub_3CC5C((int)byte_649C38, ptr);
      }
      else
      {
        v7 = fopen(a1, "rb");
        if ( v7 )
        {
          if ( a2 )
          {
            v8 = 0;
            v9 = (char *)(a4 + 8);
            do
            {
              v10 = v9;
              v11 = 0;
              if ( a3 )
              {
                do
                {
                  fread(v10, 1u, 0x34u, v7);
                  v12 = v11++;
                  v10 += 60;
                  sub_1892EC(v12, *(_DWORD *)(dword_223680 + 312));
                  *((_DWORD *)v10 - 17) = v13;
                }
                while ( a3 != v11 );
              }
              v14 = 0;
              while ( v14++ != 8 - a3 )
              {
                if ( fread(ptr, 1u, 0x34u, v7) != 52 )
                {
                  sub_1E938(v19, 0x30u);
                  printf("%s ", v19);
                  printf("%s : skip pattern from file error!\n", "skip_rows");
                  strcpy(byte_649E38, "skip pattern from file error!");
                  sub_3CC5C((int)byte_649E38, v19);
                  break;
                }
              }
              ++v8;
              v9 += 60 * a3;
            }
            while ( a2 != v8 );
          }
        }
        else
        {
          v18 = -4;
          sub_1E938(ptr, 0x30u);
          printf("%s ", ptr);
          printf("%s : Open pattern file: %s failed !!!\n", "parse_bin_file_to_pattern_ex", a1);
          snprintf(byte_649D38, 0x100u, "Open pattern file: %s failed !!!", a1);
          sub_3CC5C((int)byte_649D38, ptr);
        }
      }
    }
    else
    {
      v18 = -2;
      sub_1E938(ptr, 0x30u);
      printf("%s ", ptr);
      printf("%s : pattern file name is empty\n", "parse_bin_file_to_pattern_ex");
      strcpy(byte_649B38, "pattern file name is empty");
      sub_3CC5C((int)byte_649B38, ptr);
    }
  }
  else
  {
    v18 = -1;
    sub_1E938(ptr, 0x30u);
    printf("%s ", ptr);
    printf("%s : pattern file is NULL\n", "parse_bin_file_to_pattern_ex");
    strcpy(byte_649A38, "pattern file is NULL");
    sub_3CC5C((int)byte_649A38, ptr);
  }
  return v18;
}
