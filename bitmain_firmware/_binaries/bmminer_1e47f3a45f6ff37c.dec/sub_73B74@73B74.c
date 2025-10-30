int __fastcall sub_73B74(_DWORD *a1, int a2)
{
  char *s1; // [sp+8h] [bp-Ch]
  int v6; // [sp+Ch] [bp-8h]
  signed int v7; // [sp+Ch] [bp-8h]

  sub_75044(a1 + 10);
  if ( a1[15] == 256 )
    sub_72FF0((int)a1);
  do
  {
    do
      v6 = sub_72DF0((int)a1, a2);
    while ( v6 == 32 );
  }
  while ( v6 == 9 || v6 == 10 || v6 == 13 );
  if ( v6 == -1 )
  {
    a1[15] = 0;
  }
  else if ( v6 == -2 )
  {
    a1[15] = -1;
  }
  else
  {
    sub_72E24((int)a1, v6);
    if ( v6 == 123 || v6 == 125 || v6 == 91 || v6 == 93 || v6 == 58 || v6 == 44 )
    {
      a1[15] = v6;
    }
    else if ( v6 == 34 )
    {
      sub_73164(a1, a2);
    }
    else if ( v6 > 47 && v6 <= 57 || v6 == 45 )
    {
      sub_737D0((int)a1, v6, a2);
    }
    else if ( (v6 <= 64 || v6 > 90) && (v6 <= 96 || v6 > 122) )
    {
      sub_72F70((int)a1);
      a1[15] = -1;
    }
    else
    {
      do
      {
        do
          v7 = sub_72E5C((int)a1, a2);
        while ( v7 > 64 && v7 <= 90 );
      }
      while ( v7 > 96 && v7 <= 122 );
      sub_72EE4(a1, v7);
      s1 = (char *)sub_7507C(a1 + 10);
      if ( !strcmp(s1, "true") )
      {
        a1[15] = 259;
      }
      else if ( !strcmp(s1, "false") )
      {
        a1[15] = 260;
      }
      else if ( !strcmp(s1, "null") )
      {
        a1[15] = 261;
      }
      else
      {
        a1[15] = -1;
      }
    }
  }
  return a1[15];
}
