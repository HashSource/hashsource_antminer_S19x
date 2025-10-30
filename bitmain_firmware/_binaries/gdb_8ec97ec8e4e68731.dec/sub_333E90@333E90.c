unsigned __int8 *__fastcall sub_333E90(unsigned __int8 *a1)
{
  unsigned __int8 *v2; // r4
  int v3; // r2
  bool v4; // cc
  int v5; // r3
  int v7; // r3
  unsigned __int8 *v8; // r2
  int v9; // t1
  int v10; // r3

  v2 = a1;
LABEL_2:
  while ( 1 )
  {
    v3 = v2[1];
    if ( !v2[1] )
      return a1;
    while ( v3 != 91 )
    {
      v4 = (unsigned int)(v3 - 63) > 1;
      if ( (unsigned int)(v3 - 63) > 1 )
        v4 = (unsigned int)(v3 - 42) > 1;
      v5 = !v4;
      if ( v3 == 33 )
        v5 |= 1u;
      if ( v5 && v2[2] == 40 )
      {
        v2 = (unsigned __int8 *)sub_333E90(v2 + 2);
        goto LABEL_2;
      }
      if ( v3 == 41 )
        return v2 + 2;
      v3 = (++v2)[1];
      if ( !v2[1] )
        return a1;
    }
    if ( !dword_48FEE8 )
    {
      if ( getenv("POSIXLY_CORRECT") )
        v10 = 1;
      else
        v10 = -1;
      dword_48FEE8 = v10;
    }
    v7 = v2[2];
    if ( v7 == 33 || ((v7 == 94) & ((unsigned int)dword_48FEE8 >> 31)) != 0 )
    {
      v7 = v2[3];
      v8 = v2 + 3;
    }
    else
    {
      v8 = v2 + 2;
    }
    if ( v7 == 93 )
      v7 = *++v8;
    while ( 1 )
    {
      v2 = v8;
      if ( v7 == 93 )
        break;
      if ( !v7 )
        return a1;
      v9 = *++v8;
      v7 = v9;
    }
  }
}
