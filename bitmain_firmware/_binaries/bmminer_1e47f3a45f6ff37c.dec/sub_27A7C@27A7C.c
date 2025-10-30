int __fastcall sub_27A7C(char *s)
{
  const char *v1; // r4
  int v3; // r5
  size_t v4; // r0
  int v6; // r3
  char sa[2052]; // [sp+8h] [bp-804h] BYREF

  v1 = (const char *)&unk_5BF9A0;
  v3 = 0;
  while ( 1 )
  {
    v4 = strlen(s);
    if ( !strncmp(s, v1, v4) )
      break;
    if ( (unsigned int)dword_B308C > 4 )
    {
      snprintf(sa, 0x800u, "find mix  name:%s, topol_machine.mixed_board_names[%d]:[%s]", s, v3, v1);
      sub_3B6AC(4, sa, 0, v6);
    }
    ++v3;
    v1 += 16;
    if ( v3 == 4 )
      return 0;
  }
  return 1;
}
