int __fastcall sub_A4130(char *s1, int a2)
{
  unsigned __int8 *v4; // r9
  unsigned int v5; // r4
  char *v6; // r5
  unsigned int v7; // r8
  bool v8; // cc
  unsigned int v9; // r3
  char *v10; // r11
  bool v11; // cc
  const char *v12; // r3
  unsigned __int8 *v13; // r1
  int v14; // r2
  int v15; // t1
  char *v16; // r4
  bool v18; // cc
  char *v19; // r0
  int v20; // r4
  char *v21; // r5
  int v22; // t1
  unsigned int v23; // r3

  if ( !*(_BYTE *)(a2 + 60) )
  {
    sub_A3C94(a2 + 32, a2);
    *(_BYTE *)(a2 + 60) = 1;
  }
  v4 = *(unsigned __int8 **)(a2 + 32);
  v5 = (unsigned __int8)*s1;
  v6 = s1;
  v7 = *v4;
  if ( v7 == v5 )
    goto LABEL_17;
  while ( 1 )
  {
    do
    {
      while ( 1 )
      {
        v9 = v5 - 48;
        if ( v5 != 95 )
        {
          v8 = v9 > 9;
          if ( v9 > 9 )
            v8 = v5 - 97 > 0x19;
          ++v6;
          if ( v8 )
            return 0;
          goto LABEL_8;
        }
        v5 = (unsigned __int8)v6[1];
        v10 = v6 + 1;
        v11 = v5 - 48 > 9;
        if ( v5 - 48 > 9 )
          v11 = v5 - 97 > 0x19;
        if ( v11 )
          break;
        v6 += 2;
        if ( v10 == s1 + 5 && !strncmp(s1, "_ada", 4u) )
        {
          v6 = v10;
          goto LABEL_16;
        }
LABEL_8:
        v5 = (unsigned __int8)*v6;
      }
      if ( v5 != 95 )
        return 0;
      v5 = (unsigned __int8)v6[2];
      v18 = v7 > v5;
      if ( v7 != v5 )
        v18 = v5 - 97 > 0x19;
      if ( v18 )
        return 0;
      v6 += 2;
LABEL_16:
      ;
    }
    while ( v7 != v5 );
LABEL_17:
    v12 = v6 + 1;
    v13 = v4 + 1;
    if ( !v4[1] )
      break;
    if ( (unsigned __int8)v6[1] != v4[1] )
    {
      ++v6;
      v23 = v7;
      goto LABEL_25;
    }
    while ( 1 )
    {
      v15 = *++v13;
      v14 = v15;
      v16 = (char *)(v12 + 1);
      if ( !v15 )
        break;
      if ( v14 != *((unsigned __int8 *)v12 + 1) )
      {
        v23 = *(unsigned __int8 *)v12;
        v6 = v16;
        goto LABEL_25;
      }
      ++v12;
    }
    if ( sub_9A6F0(v12 + 1) )
      goto LABEL_35;
LABEL_24:
    v23 = (unsigned __int8)*(v16 - 1);
    v6 = v16;
LABEL_25:
    if ( v23 != 95 )
      goto LABEL_8;
    v5 = (unsigned __int8)*--v6;
  }
  v16 = v6 + 1;
  if ( !sub_9A6F0(v6 + 1) )
    goto LABEL_24;
LABEL_35:
  if ( s1 != v6 )
  {
    v19 = sub_9EB80(s1);
    v20 = (unsigned __int8)*v19;
    if ( v20 == 60 )
      return 0;
    if ( *v19 )
    {
      v21 = v19;
      while ( !isalpha(v20) || islower(v20) )
      {
        v22 = (unsigned __int8)*++v21;
        v20 = v22;
        if ( !v22 )
          return 1;
      }
      return 0;
    }
  }
  return 1;
}
