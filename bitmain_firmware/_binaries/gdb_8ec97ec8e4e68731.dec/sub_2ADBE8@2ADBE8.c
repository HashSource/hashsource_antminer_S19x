int __fastcall sub_2ADBE8(int a1, char *s1, int a3)
{
  bool v3; // zf
  char *v7; // r0

  v3 = s1 == 0;
  if ( s1 )
    v3 = a1 == 0;
  if ( v3 || (*(_BYTE *)(a1 + 43) & 0x40) != 0 )
  {
    ((void (__fastcall *)(int))loc_2A6C48)(5);
  }
  else if ( strcmp(s1, "*ABS*") )
  {
    if ( strcmp(s1, "*COM*") )
    {
      if ( strcmp(s1, "*UND*") )
      {
        if ( strcmp(s1, "*IND*") )
        {
          v7 = sub_2AAC2C((_DWORD *)(a1 + 72), s1, 1, 0);
          if ( v7 )
          {
            if ( !*((_DWORD *)v7 + 4) )
            {
              *((_DWORD *)v7 + 4) = s1;
              *((_DWORD *)v7 + 9) = a3;
              return sub_2AD64C((_DWORD *)a1, (int)(v7 + 16));
            }
          }
        }
      }
    }
  }
  return 0;
}
