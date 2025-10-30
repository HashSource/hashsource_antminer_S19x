const char *__fastcall sub_849D8(unsigned int a1, _DWORD *a2, const char **a3, unsigned int a4)
{
  const char *result; // r0
  unsigned int v7; // r3
  unsigned int v8; // r1
  const char *v9; // r4
  int v10; // r3

  switch ( a1 )
  {
    case 2u:
      v8 = a2[6];
      if ( a4 > v8 )
        fputs(a3[v8], stdout);
      else
        printf("INVALID-%d", v8);
      return 0;
    case 3u:
      v7 = a2[6];
      if ( v7 >= a4 )
      {
        return "*INVALID*";
      }
      else
      {
        a2[6] = a3[v7];
        return 0;
      }
    case 1u:
      sub_7DD4C(1u, a2, a3, a4);
      return 0;
    default:
      if ( (a2[4] & 8) != 0 )
      {
        return 0;
      }
      else
      {
        result = (const char *)sub_7E084((const char *)a2[6], a1, a2, a3, a4);
        v9 = result;
        if ( (a2[4] & 0x40) != 0 )
        {
          free((void *)a2[6]);
          v10 = a2[4];
          a2[6] = 0;
          a2[4] = v10 & 0xFFFFFFBF;
          return v9;
        }
      }
      break;
  }
  return result;
}
