void __fastcall sub_247460(int a1)
{
  char *v2; // r4
  char *v3; // r0
  char *v4; // r5
  char *s; // [sp+4h] [bp-20h] BYREF
  char v6; // [sp+Ch] [bp-18h] BYREF
  char v7; // [sp+1Ch] [bp-8h]

  sub_276DCC(&s, &dword_4899A0);
  if ( v7 )
  {
    v2 = s;
    if ( !s )
    {
      v7 = 0;
LABEL_7:
      sub_339E64(v2);
      return;
    }
    while ( 1 )
    {
      v3 = strchr(v2, 10);
      v4 = v3;
      if ( !v3 )
        break;
      fprintf(*(FILE **)(a1 + 4), "tdesc %.*s\n", v3 - v2, v2);
      v2 = v4 + 1;
      if ( v4 == (char *)-1 )
        goto LABEL_5;
    }
    if ( *v2 )
      fprintf(*(FILE **)(a1 + 4), "tdesc %s\n", v2);
LABEL_5:
    if ( v7 )
    {
      v2 = s;
      v7 = 0;
      if ( s != &v6 )
        goto LABEL_7;
    }
  }
}
