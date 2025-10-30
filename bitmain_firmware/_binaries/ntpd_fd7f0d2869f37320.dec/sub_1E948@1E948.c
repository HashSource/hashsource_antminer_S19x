char *__fastcall sub_1E948(unsigned __int16 *a1, int a2)
{
  int v4; // r5
  char *i; // r4
  int v7; // r3
  _BOOL4 v8; // r3

  v4 = 0;
  for ( i = (char *)&unk_1091BC; ; i += 52 )
  {
    if ( (i[42] & 1) == 0 )
      goto LABEL_4;
    if ( a1[1] != *((unsigned __int16 *)i - 3) )
      goto LABEL_4;
    v7 = *((unsigned __int16 *)i - 4);
    if ( v7 != *a1 )
      goto LABEL_4;
    if ( v7 == 2 )
      break;
    if ( !memcmp(a1 + 4, i, 0x10u) )
    {
      v8 = *((_DWORD *)a1 + 6) == *((_DWORD *)i + 4);
      goto LABEL_10;
    }
LABEL_4:
    if ( ++v4 == 3 )
      return 0;
  }
  v8 = *((_DWORD *)a1 + 1) == *((_DWORD *)i - 1);
LABEL_10:
  if ( !v8 || *((_DWORD *)i + 5) != a2 )
    goto LABEL_4;
  return (char *)&ctl_traps + 52 * v4;
}
