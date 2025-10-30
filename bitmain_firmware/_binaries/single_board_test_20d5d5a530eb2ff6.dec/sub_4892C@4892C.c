int __fastcall sub_4892C(int a1, FILE *a2)
{
  void *v4; // r5
  int v5; // r4
  size_t v6; // r4
  const char *v7; // r0
  int v8; // r0
  int v9; // r0
  const char *v10; // r0
  int v11; // r0
  const char *v12; // r0
  int result; // r0
  int v14; // [sp+4h] [bp-4h] BYREF

  if ( !a1 )
    _assert_fail("f_in != ((void *)0)", "../zhiju/log_file/fileCompress.c", 0x55u, "decompress_file");
  if ( !a2 )
    _assert_fail("f_out != ((void *)0)", "../zhiju/log_file/fileCompress.c", 0x55u, "decompress_file");
  v4 = malloc(0x4000u);
  if ( !v4 )
    puts("error: memory allocation failed ");
  v5 = sub_5B820(&v14, a1);
  if ( sub_57568(v5) )
  {
    v12 = (const char *)sub_57574(v5);
    printf("LZ4F_readOpen error: %s\n", v12);
    free(v4);
    return 1;
  }
  while ( 1 )
  {
    v6 = sub_5B940(v14, v4, 0x4000);
    if ( sub_57568(v6) )
      break;
    if ( !v6 )
    {
      free(v4);
      v9 = sub_5B9DC(v14);
      result = sub_57568(v9);
      if ( !result )
        return result;
      goto LABEL_15;
    }
    if ( v6 != fwrite(v4, 1u, v6, a2) )
    {
      puts("write error!");
      free(v4);
      v11 = sub_5B9DC(v14);
      if ( !sub_57568(v11) )
        return 1;
LABEL_15:
      v10 = (const char *)sub_57574(v6);
      printf("LZ4F_readClose: %s\n", v10);
      return 1;
    }
  }
  v7 = (const char *)sub_57574(v6);
  printf("LZ4F_read error: %s\n", v7);
  free(v4);
  v8 = sub_5B9DC(v14);
  if ( sub_57568(v8) )
    goto LABEL_15;
  result = v6;
  if ( v6 )
    return 1;
  return result;
}
