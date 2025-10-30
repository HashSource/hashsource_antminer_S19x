int __fastcall sub_2A2BD8(FILE *s)
{
  char **v2; // r4
  char **v3; // r5
  size_t v4; // r0
  size_t v5; // r6
  const char *v6; // r2
  const char *v7; // r7
  size_t v8; // r6
  size_t v9; // r0
  int result; // r0

  v2 = off_3FDE84;
  fwrite("\nThe following ARM specific disassembler options are supported for use with\nthe -M switch:\n", 1u, 0x5Bu, s);
  v3 = off_3FDE84;
  v4 = 13;
  v5 = 0;
  while ( 1 )
  {
    v3 += 18;
    if ( v5 < v4 )
      v5 = v4;
    if ( v3 == (char **)&unk_3FE0C4 )
      break;
    v4 = strlen(*(v3 - 18));
  }
  v6 = "Select raw register names";
  v7 = "reg-names-raw";
  v8 = v5 + 1;
  v9 = 13;
  while ( 1 )
  {
    v2 += 18;
    result = fprintf(s, "  %s%*c %s\n", v7, v8 - v9, 32, v6);
    if ( v2 == v3 )
      break;
    v7 = *(v2 - 18);
    v9 = strlen(v7);
    v6 = *(v2 - 17);
  }
  return result;
}
