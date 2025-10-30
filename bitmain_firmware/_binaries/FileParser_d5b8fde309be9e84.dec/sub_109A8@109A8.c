int __fastcall sub_109A8(int a1)
{
  _BYTE v3[32768]; // [sp+Ch] [bp-8010h] BYREF
  FILE *s; // [sp+800Ch] [bp-10h]
  FILE *stream; // [sp+8010h] [bp-Ch]
  int i; // [sp+8014h] [bp-8h]

  memset(v3, 0, sizeof(v3));
  stream = (FILE *)fopen64(a1, "rb");
  if ( stream )
  {
    for ( i = 0; ; ++i )
    {
      if ( i > 14 )
      {
        if ( stream )
          fclose(stream);
        return 0;
      }
      fread(v3, *((_DWORD *)&unk_2307C + 33 * i), 1u, stream);
      s = (FILE *)fopen64((char *)&unk_2307C + 132 * i + 4, "wb");
      if ( !s )
        break;
      fwrite(v3, *((_DWORD *)&unk_2307C + 33 * i), 1u, s);
      if ( s )
        fclose(s);
      s = 0;
    }
    printf("Try To Write To File '%s' Failed!\n", (const char *)&unk_2307C + 132 * i + 4);
    if ( stream )
      fclose(stream);
    return 2;
  }
  else
  {
    puts("Load Nand Image File Failed!");
    return 1;
  }
}
