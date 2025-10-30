int __fastcall sub_EFEF4(int result, int a2, int a3, int a4, int a5, char *s)
{
  int v6; // r7
  bool v7; // zf
  int v8; // r4
  int v11; // r5

  v6 = *(unsigned __int8 *)(result + 36);
  if ( !*(_BYTE *)(result + 36) )
  {
    v7 = a4 == 2;
    if ( a4 != 2 )
      v7 = s == 0;
    v8 = result;
    if ( v7 )
    {
      if ( s )
        return sub_EFEBC(result, a2, a5, (int)"%s", s);
    }
    else
    {
      v11 = a3 - strlen(s);
      if ( v11 <= 0 )
      {
        sub_EFEBC(v8, a2, a5, (int)"%s", s);
        return sub_25A4FC(32, *(_DWORD *)(*(_DWORD *)(v8 + 28) - 4));
      }
      if ( a4 == 1 )
        goto LABEL_17;
      if ( a4 == -1 )
      {
        v6 = v11;
        sub_EFEBC(v8, a2, a5, (int)"%s", s);
        goto LABEL_14;
      }
      v6 = v11 >> 1;
      v11 -= v11 >> 1;
      if ( v11 )
LABEL_17:
        sub_257374(v8, v11);
      result = sub_EFEBC(v8, a2, a5, (int)"%s", s);
      if ( v6 )
      {
LABEL_14:
        sub_257374(v8, v6);
        return sub_25A4FC(32, *(_DWORD *)(*(_DWORD *)(v8 + 28) - 4));
      }
    }
    if ( a4 != 2 )
      return sub_25A4FC(32, *(_DWORD *)(*(_DWORD *)(v8 + 28) - 4));
  }
  return result;
}
