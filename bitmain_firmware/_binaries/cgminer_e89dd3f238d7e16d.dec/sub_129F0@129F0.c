int __fastcall sub_129F0(const char *a1, char *a2, socklen_t a3)
{
  size_t v7; // [sp+10h] [bp-Ch]
  size_t i; // [sp+14h] [bp-8h]

  if ( sub_127F0(a1, a2, a3) )
  {
    fprintf((FILE *)stderr, "Failed to get IP address from interface '%s'.\n", a1);
    return -1;
  }
  else
  {
    v7 = strlen(a2);
    for ( i = 0; i < v7; ++i )
    {
      if ( a2[i] == 58 || a2[i] == 46 )
        a2[i] = 88;
    }
    return 0;
  }
}
