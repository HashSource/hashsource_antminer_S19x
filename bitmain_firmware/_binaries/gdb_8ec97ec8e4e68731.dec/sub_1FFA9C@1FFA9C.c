int __fastcall sub_1FFA9C(int a1, int a2)
{
  int i; // r4
  int v5; // r0
  int v6; // r0
  bool v7; // r8
  unsigned __int8 v8; // r0
  int result; // r0

  if ( a1 )
  {
    for ( i = dword_48938C; (int *)i != &dword_48938C; i = *(_DWORD *)i )
    {
      while ( !*(_BYTE *)(i + 104) )
      {
LABEL_11:
        i = *(_DWORD *)i;
        if ( (int *)i == &dword_48938C )
          return 0;
      }
      v5 = *(_DWORD *)(i + 20);
      if ( v5 && (v5 = *(_DWORD *)(a2 + 4)) != 0 )
      {
        v6 = i + 8;
        if ( *(_BYTE *)(i + 12) )
          v7 = sub_1FF92C(v6, a2);
        else
          v7 = sub_1FF89C(v6, a2);
      }
      else
      {
        v7 = v5;
      }
      v8 = ((int (__fastcall *)(int, int))loc_1FF9F8)(i + 8, a1);
      if ( *(_DWORD *)(i + 20) && *(_DWORD *)(i + 48) )
      {
        result = v8 & v7;
        if ( result )
          return result;
        goto LABEL_11;
      }
      result = (unsigned __int8)(v8 | v7);
      if ( result )
        return result;
    }
  }
  return 0;
}
