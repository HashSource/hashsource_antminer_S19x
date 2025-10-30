int __fastcall sub_10B57C(char *s1)
{
  unsigned int v2; // r4
  char *v3; // r6
  int v4; // r5
  unsigned int v5; // r3
  int v6; // r2
  _BOOL4 v7; // r2
  bool v8; // cc
  int v9; // r3

  v2 = (unsigned __int8)*s1;
  if ( v2 == 95 )
  {
    if ( strncmp(s1, "_ada_", 5u) )
LABEL_25:
      JUMPOUT(0x1B12E8);
    v3 = s1 + 5;
    v2 = (unsigned __int8)s1[5];
  }
  else
  {
    v3 = s1;
  }
  v4 = 0;
  while ( v2 )
  {
    switch ( v2 )
    {
      case ' ':
      case '(':
        goto LABEL_25;
      case '$':
      case '.':
      case 'X':
        if ( v3 != s1 )
          return v4;
        goto LABEL_25;
      case 'T':
        if ( strcmp(v3, "TKB") )
          goto LABEL_8;
        return v4;
      case '_':
        v5 = (unsigned __int8)v3[1];
        v7 = v3 != s1;
        if ( v5 != 95 )
          v7 = 0;
        if ( !v7 )
          goto LABEL_9;
        v2 = (unsigned __int8)v3[2];
        v8 = v2 > 0x4F;
        if ( v2 != 79 )
          v8 = v2 - 97 > 0x19;
        v9 = v8;
        if ( v8 )
          return v4;
        v3 += 2;
        v4 = v9;
        break;
      default:
LABEL_8:
        v5 = (unsigned __int8)v3[1];
LABEL_9:
        v6 = byte_438798[v2];
        ++v3;
        v2 = v5;
        v4 = 67 * v4 - 113 + v6;
        continue;
    }
  }
  return v4;
}
