int __fastcall sub_D1AEC(_BYTE *a1, int a2, int a3)
{
  _BYTE *v3; // r3
  int v5; // r5
  const char *v6; // r0
  int v7; // r4
  int result; // r0
  _DWORD *v9; // r4
  int v10; // r4
  int v11; // r4
  const char *v12; // [sp+4h] [bp-20h] BYREF
  _BYTE v13[28]; // [sp+8h] [bp-1Ch] BYREF

  v3 = a1;
  v12 = a1;
  if ( !a1 || (v3 = (_BYTE *)(unsigned __int8)*a1, !*a1) )
    sub_946E0("passcount command requires an argument (count + optional TP num)", a2, a3, v3);
  v5 = sub_9335C((int)a1, &v12, 10);
  v6 = (const char *)sub_9360C(v12);
  v12 = v6;
  v7 = (int)v6;
  if ( *v6 )
  {
    result = strncasecmp(v6, "all", 3u);
    if ( result )
    {
      result = sub_5ADF4((int)v13, v7);
      while ( !v13[0] )
      {
        result = ((int (__fastcall *)(const char **, _BYTE *))loc_D1990)(&v12, v13);
        v11 = result;
        if ( result )
        {
          *(_DWORD *)(result + 140) = v5;
          result = sub_1B9D50(result);
          if ( a2 )
            result = sub_259F10("Setting tracepoint %d's passcount to %d\n", *(_DWORD *)(v11 + 24), v5);
        }
      }
    }
    else
    {
      v12 = (const char *)(v7 + 3);
      if ( *(_BYTE *)(v7 + 3) )
        sub_946E0("Junk at end of arguments.");
      v9 = (_DWORD *)dword_478348;
      if ( dword_478348 )
      {
        do
        {
          while ( 1 )
          {
            if ( (unsigned int)(v9[3] - 27) <= 2 )
            {
              v9[35] = v5;
              result = sub_1B9D50(v9);
              if ( a2 )
                break;
            }
            v9 = (_DWORD *)v9[2];
            if ( !v9 )
              return result;
          }
          result = sub_259F10("Setting tracepoint %d's passcount to %d\n", v9[6], v5);
          v9 = (_DWORD *)v9[2];
        }
        while ( v9 );
      }
    }
  }
  else
  {
    result = ((int (__fastcall *)(const char **))loc_D1990)(&v12);
    v10 = result;
    if ( result )
    {
      *(_DWORD *)(result + 140) = v5;
      result = sub_1B9D50(result);
      if ( a2 )
        return sub_259F10("Setting tracepoint %d's passcount to %d\n", *(_DWORD *)(v10 + 24), v5);
    }
  }
  return result;
}
