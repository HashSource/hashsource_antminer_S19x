_DWORD *__fastcall sub_58BE4(_DWORD *a1, char *s)
{
  int v4; // r2
  size_t v5; // r0
  char *v6; // [sp+4h] [bp-4h]

  if ( dword_474814 == dword_474810 )
  {
    *a1 = a1 + 2;
    if ( s )
    {
      v6 = s;
      v5 = strlen(s);
      s = v6;
      v4 = (int)&v6[v5];
    }
    else
    {
      v4 = -1;
    }
    sub_57278(a1, s, v4);
    return a1;
  }
  else
  {
    sub_589B4((int)a1, *(_DWORD *)(dword_474814 - 4), s);
    return a1;
  }
}
