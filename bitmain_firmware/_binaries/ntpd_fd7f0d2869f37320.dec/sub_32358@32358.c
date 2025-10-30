int __fastcall sub_32358(int result, _DWORD *a2)
{
  int v2; // r4
  _DWORD *v3; // r3
  int v5; // r1
  int v6; // r3
  int v7; // r2
  _DWORD *v8; // r3
  const char *v9; // r7
  const char *v10; // r8
  const char *v11; // r0
  int v12; // r3

  v2 = result;
  if ( result )
  {
    v3 = *(_DWORD **)(result + 56);
    if ( v3 != a2 )
    {
      if ( a2 )
      {
        if ( (*(_DWORD *)(result + 68) & 0x10) != 0 && (a2[36] & 0x100) != 0 && *(_BYTE *)(result + 63) == 3 )
          return result;
        if ( !v3 )
        {
          *(_DWORD *)(result + 56) = a2;
LABEL_16:
          v12 = a2[47];
          *(_DWORD *)(v2 + 12) = a2[46];
          a2[46] = v2;
          a2[47] = v12 + 1;
          return result;
        }
      }
      else if ( !v3 )
      {
        return result;
      }
      v5 = v3[46];
      --v3[47];
      if ( result == v5 )
      {
        v8 = v3 + 46;
        v7 = result;
      }
      else
      {
        if ( !v5 || (v6 = *(_DWORD *)(v5 + 12)) == 0 )
        {
LABEL_15:
          v9 = (const char *)sub_6D2C0(result + 16);
          v10 = sub_1924C(*(_DWORD *)(v2 + 56));
          v11 = sub_1924C((int)a2);
          result = sub_65D40(6, "%s local addr %s -> %s", v9, v10, v11);
          *(_DWORD *)(v2 + 56) = a2;
          if ( !a2 )
            return result;
          goto LABEL_16;
        }
        while ( result != v6 )
        {
          v5 = v6;
          if ( !*(_DWORD *)(v6 + 12) )
            goto LABEL_15;
          v6 = *(_DWORD *)(v6 + 12);
        }
        v7 = *(_DWORD *)(v5 + 12);
        v8 = (_DWORD *)(v5 + 12);
      }
      *v8 = *(_DWORD *)(v7 + 12);
      goto LABEL_15;
    }
  }
  return result;
}
