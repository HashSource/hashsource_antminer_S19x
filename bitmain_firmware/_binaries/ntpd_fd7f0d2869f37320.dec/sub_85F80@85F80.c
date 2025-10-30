void __fastcall sub_85F80(char *a1, int a2, FILE *stream)
{
  _BYTE *v4; // r7

  if ( a2 )
  {
    fputs(a1, stream);
  }
  else
  {
    v4 = sub_85CE4(a1, "\\n\\\n");
    fprintf(stream, "  puts(_(%s));\n", v4);
    free(v4);
  }
}
