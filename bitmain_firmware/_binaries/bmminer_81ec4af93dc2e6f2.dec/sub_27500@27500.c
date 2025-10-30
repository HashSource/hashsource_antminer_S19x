int __fastcall sub_27500(char *s)
{
  int v2; // r4
  size_t v3; // r0
  int v5; // r3
  char sa[2052]; // [sp+8h] [bp-804h] BYREF

  v2 = 0;
  while ( 1 )
  {
    v3 = strlen(s);
    if ( !strncmp(s, &byte_5BAAE8[16 * v2], v3) )
      break;
    if ( (unsigned int)off_AFC24 > 4 )
    {
      snprintf(sa, 0x800u, "find mix  name:%s, topol_machine.mixed_board_names[%d]:[%s]", s, v2, &byte_5BAAE8[16 * v2]);
      sub_3AF5C(4, sa, 0, v5);
    }
    if ( ++v2 == 4 )
      return 0;
  }
  return 1;
}
