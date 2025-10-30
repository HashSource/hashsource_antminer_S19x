char *__fastcall sub_A3B68(_DWORD *a1, _DWORD *a2, int a3)
{
  char *result; // r0
  char *v6; // r6
  unsigned __int16 *v7; // r1
  int v8; // r7
  char *i; // r11
  char **v10; // r4
  char *v11; // r10
  unsigned __int16 *v13; // [sp+Ch] [bp-8h] BYREF

  result = (char *)sub_A2E74((int)a2, 1, &v13);
  if ( result )
  {
    v6 = result;
    v7 = v13;
    v8 = 11;
    for ( i = 0; i != v6; ++i )
    {
      v10 = &off_202A94;
      while ( *((unsigned __int16 *)v10 + 2) != *v7 )
      {
        v10 += 8;
        if ( v10 == &off_202DD4 )
          goto LABEL_9;
      }
      result = sub_855D0((unsigned int)v10[5]);
      v11 = result;
      if ( result
        && (v8 & *((_DWORD *)result + 1)) != 0
        && (result = (char *)sub_A2D04((int)v10, 0)) != 0
        && (result = (char *)sub_A34AC(a2, a3, (int)v10)) != 0 )
      {
        v7 = v13;
        v8 &= ~*((_DWORD *)v11 + 1);
      }
      else
      {
        v7 = v13;
      }
LABEL_9:
      v13 = ++v7;
    }
  }
  else
  {
    v8 = 11;
  }
  *a1 |= v8;
  return result;
}
