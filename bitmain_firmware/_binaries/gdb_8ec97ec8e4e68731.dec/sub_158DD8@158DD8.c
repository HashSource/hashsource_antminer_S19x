int __fastcall sub_158DD8(int result, int a2, int a3, int a4)
{
  int v4; // r4
  _BOOL4 v6; // r2
  char *v8; // r2
  int v9; // r3

  v4 = result;
  if ( result )
  {
    v6 = a3 <= 0;
    if ( !*(_DWORD *)(*(_DWORD *)(result + 24) + 8) )
      v6 = 0;
    if ( !v6 )
    {
      do
      {
        result = sub_258BD4(result);
        v8 = *(char **)(v4 + 24);
        v9 = *v8;
        switch ( v9 )
        {
          case 2:
            v4 = *((_DWORD *)v8 + 5);
            a4 = 0;
            if ( !v4 )
              return result;
            break;
          case 7:
            result = sub_158DD8(*((_DWORD *)v8 + 5), a2, 0);
            if ( a4 )
              return sub_25A418(a2, "(");
            return result;
          case 1:
            v4 = *((_DWORD *)v8 + 5);
            a4 = 1;
            if ( !v4 )
              return result;
            break;
          default:
            return result;
        }
      }
      while ( !*(_DWORD *)(*(_DWORD *)(v4 + 24) + 8) );
    }
  }
  return result;
}
