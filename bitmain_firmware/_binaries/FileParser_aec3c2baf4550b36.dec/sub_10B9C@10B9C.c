int sub_10B9C()
{
  FILE *ptr[64]; // [sp+0h] [bp-10Ch] BYREF
  FILE *stream; // [sp+100h] [bp-Ch]
  int i; // [sp+104h] [bp-8h]

  stream = (FILE *)fopen64("/tmp/256BFF", "wb");
  if ( stream )
  {
    memset(ptr, 0, sizeof(ptr));
    for ( i = 0; i <= 255; ++i )
      *((_BYTE *)ptr + i) = -1;
    fwrite(ptr, 0x100u, 1u, stream);
    fclose(stream);
    stream = 0;
    return 0;
  }
  else
  {
    puts("GenFile Failed!");
    return 1;
  }
}
