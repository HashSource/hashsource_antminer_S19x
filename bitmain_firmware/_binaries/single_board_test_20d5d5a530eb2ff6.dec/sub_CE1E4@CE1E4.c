int __fastcall sub_CE1E4(_DWORD *a1, int a2, int a3)
{
  int v3; // r3
  bool v4; // zf
  int v8; // r1
  int v9; // r3
  int v10; // r4
  int v12; // r3

  if ( a1 )
  {
    v3 = a1[27];
    v4 = v3 == 0;
    if ( !v3 )
      v4 = a2 == 0;
    if ( !v4 && (!a3 || sub_10C554(global_engine_lock)) )
    {
      if ( a2 )
      {
        v8 = dword_6DF404;
        if ( dword_6DF404 )
        {
          if ( a2 == *(_DWORD *)(dword_6DF404 + 108) )
            goto LABEL_14;
          v9 = dword_6DF404;
          while ( 1 )
          {
            v9 = *(_DWORD *)(v9 + 96);
            if ( !v9 )
              break;
            if ( a2 == *(_DWORD *)(v9 + 108) )
              goto LABEL_14;
          }
        }
        if ( a1[27] )
          goto LABEL_14;
        a1[27] = a2;
      }
      else
      {
        v8 = dword_6DF404;
      }
      if ( v8 )
      {
        v12 = dword_6DF408;
        if ( dword_6DF408 && !*(_DWORD *)(dword_6DF408 + 104) )
        {
          *(_DWORD *)(dword_6DF408 + 104) = a1;
          a1[25] = v12;
          goto LABEL_24;
        }
      }
      else if ( !dword_6DF408 )
      {
        dword_6DF404 = (int)a1;
        a1[25] = 0;
LABEL_24:
        v10 = 1;
        a1[26] = 0;
        dword_6DF408 = (int)a1;
        if ( !a3 )
          return v10;
        goto LABEL_16;
      }
LABEL_14:
      v10 = 0;
      if ( !a3 )
        return v10;
LABEL_16:
      sub_10C564(global_engine_lock);
      return v10;
    }
  }
  return 0;
}
