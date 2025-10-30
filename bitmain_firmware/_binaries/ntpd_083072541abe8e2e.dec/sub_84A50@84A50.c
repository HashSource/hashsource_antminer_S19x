void __fastcall sub_84A50(_BYTE *a1, FILE *a2)
{
  char *v3; // r7

  v3 = sub_84784(a1, "\\n\\\n");
  fprintf(a2, "  puts(_(%s));\n", v3);
  free(v3);
}
