char *__fastcall sub_6DB8C(char *result, _DWORD *a2)
{
  char *v2; // r4
  int v4; // r0
  int v5; // r2
  int v6; // r6
  int v7; // [sp+4h] [bp-14h] BYREF

  if ( *result )
  {
    v2 = result;
    v4 = sub_6DA38((unsigned __int8)*result);
    v6 = v4;
    if ( v4 > 0 )
    {
      if ( v4 == 1 )
      {
        v7 = v5;
        goto LABEL_6;
      }
      if ( sub_6DAA4(v2, v4, &v7) )
      {
LABEL_6:
        result = &v2[v6];
        if ( a2 )
          *a2 = v7;
        return result;
      }
    }
    return 0;
  }
  return result;
}
