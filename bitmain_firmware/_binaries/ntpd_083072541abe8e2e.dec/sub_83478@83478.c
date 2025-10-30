const char *__fastcall sub_83478(unsigned int a1, _DWORD *a2, const char **a3, unsigned int a4)
{
  unsigned int v6; // r4
  int v7; // r3
  unsigned int v9; // r3
  unsigned int v10; // r1

  switch ( a1 )
  {
    case 2u:
      v10 = a2[6];
      v6 = 0;
      if ( a4 > v10 )
        fputs(a3[v10], stdout);
      else
        printf("INVALID-%d", v10);
      break;
    case 3u:
      v9 = a2[6];
      if ( v9 < a4 )
      {
        v6 = 0;
        a2[6] = a3[v9];
      }
      else
      {
        return "*INVALID*";
      }
      break;
    case 1u:
      v6 = 0;
      sub_7C924(1u, a2, a3, a4);
      break;
    default:
      if ( (a2[4] & 8) != 0 )
      {
        return 0;
      }
      else
      {
        v6 = sub_7CC34((const char *)a2[6], a1, a2, a3, a4);
        if ( (a2[4] & 0x40) != 0 )
        {
          free((void *)a2[6]);
          v7 = a2[4];
          a2[6] = 0;
          a2[4] = v7 & 0xFFFFFFBF;
        }
      }
      break;
  }
  return (const char *)v6;
}
