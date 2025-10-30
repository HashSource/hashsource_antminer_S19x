char **__fastcall sub_2ADA2C(int a1, char *s1)
{
  char **v4; // r4
  char *v6; // r0

  if ( (*(_BYTE *)(a1 + 43) & 0x40) != 0 )
  {
    v4 = 0;
    ((void (__fastcall *)(int, char *))loc_2A6C48)(5, s1);
    return v4;
  }
  if ( !strcmp(s1, "*ABS*") )
  {
    v4 = &off_470950;
    goto LABEL_5;
  }
  if ( !strcmp(s1, "*COM*") )
  {
    v4 = &off_470800;
    goto LABEL_5;
  }
  if ( !strcmp(s1, "*UND*") )
  {
    v4 = &off_4708A8;
LABEL_5:
    if ( (*(int (__fastcall **)(int, char **))(*(_DWORD *)(a1 + 4) + 156))(a1, v4) )
      return v4;
    return 0;
  }
  if ( !strcmp(s1, "*IND*") )
  {
    v4 = &off_4709F8;
    goto LABEL_5;
  }
  v6 = sub_2AAC2C((_DWORD *)(a1 + 72), s1, 1, 0);
  if ( !v6 )
    return 0;
  v4 = (char **)(v6 + 16);
  if ( *((_DWORD *)v6 + 4) )
    return v4;
  *((_DWORD *)v6 + 4) = s1;
  return (char **)sub_2AD64C((_DWORD *)a1, (int)(v6 + 16));
}
