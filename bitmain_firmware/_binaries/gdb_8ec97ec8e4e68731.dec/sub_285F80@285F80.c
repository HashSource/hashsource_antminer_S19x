const char *__fastcall sub_285F80(const char *a1, int a2, int a3, _BYTE *a4)
{
  int v6; // r8
  const char *result; // r0
  const char *v9; // r5
  size_t v10; // r0
  int v11; // r3
  bool v12; // zf
  int v13; // r2
  int v14; // r1
  int v15; // r12
  const char *v16; // r3
  int v17; // r0
  int v18; // t1
  int v19; // t1
  const char *v20; // r8

  v6 = (unsigned __int8)*a4;
  result = sub_285EC8(a1, a3, a4);
  v9 = result;
  if ( result )
  {
    v10 = strlen(result);
    v11 = (unsigned __int8)*a4;
    v12 = v11 == 0;
    if ( *a4 )
      v12 = a2 == 0;
    if ( !v12 )
    {
      if ( *(unsigned __int8 *)(dword_48AAD4 + a2 - 1) != v11 )
      {
        if ( v11 == v6 )
          goto LABEL_9;
LABEL_35:
        if ( *(unsigned __int8 *)(dword_48AAD4 + a2 - 1) == v6 && *(unsigned __int8 *)v9 != v6 )
          goto LABEL_37;
LABEL_9:
        v13 = dword_4900D8 - 1;
        if ( *a4
          && dword_4900D8 != 1
          && *(unsigned __int8 *)(dword_48AAD4 + dword_4900D8) == v11
          && (unsigned __int8)v9[v10 - 1] == v11 )
        {
          v13 = dword_4900D8;
        }
        if ( !dword_48AD00 )
        {
          result = (const char *)sub_29509C(v9, a2, v13);
          if ( a1 == v9 )
            return result;
          return (const char *)sub_297758(v9);
        }
        v14 = dword_4900DC;
        if ( dword_4900DC > a2 )
        {
          if ( *v9 )
          {
            v15 = dword_48AAD4 + a2;
            if ( *(unsigned __int8 *)(dword_48AAD4 + a2) == *(unsigned __int8 *)v9 )
            {
              v16 = v9 + 1;
              while ( 1 )
              {
                ++a2;
                v20 = v16;
                if ( dword_4900DC == a2 )
                  break;
                v18 = *(unsigned __int8 *)v16++;
                v17 = v18;
                if ( !v18 )
                  goto LABEL_40;
                v19 = *(unsigned __int8 *)++v15;
                if ( v19 != v17 )
                  goto LABEL_25;
              }
LABEL_19:
              if ( v13 < v14 && !*v20 )
                goto LABEL_27;
LABEL_26:
              sub_29509C(v20, v14, v13);
              goto LABEL_27;
            }
            v20 = v9;
          }
          else
          {
            v20 = v9;
LABEL_40:
            if ( v13 < a2 )
            {
LABEL_27:
              result = (const char *)(strlen(v20) + a2);
              dword_4900D8 = (int)result;
              if ( a1 == v9 )
                return result;
              return (const char *)sub_297758(v9);
            }
          }
LABEL_25:
          v14 = a2;
          goto LABEL_26;
        }
        v20 = v9;
        v14 = a2;
        goto LABEL_19;
      }
      if ( *(unsigned __int8 *)v9 == v11 )
      {
LABEL_37:
        --a2;
        goto LABEL_9;
      }
    }
    if ( v11 == v6 || !a2 )
      goto LABEL_9;
    goto LABEL_35;
  }
  return result;
}
