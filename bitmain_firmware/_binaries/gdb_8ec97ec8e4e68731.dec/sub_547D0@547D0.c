int __fastcall sub_547D0(unsigned __int8 *a1, int a2)
{
  int v3; // r4
  int result; // r0
  int v5; // r7
  int v6; // r4
  int *v7; // r3
  int v8; // r3
  int v9; // r3
  int i; // r4
  bool v11; // zf
  unsigned __int8 *v12; // [sp+Ch] [bp-8h] BYREF

  v12 = a1;
  v3 = dword_474744;
  if ( !a1 )
    return sub_53DC0(dword_474744, "", -2, a2);
  result = strcmp((const char *)a1, "all");
  v5 = result;
  if ( result )
  {
    result = sub_544C8(&v12, v3, "", 0, 0);
    v6 = result;
    if ( result )
    {
      sub_25A6BC(*(_DWORD *)(result + 28), a2);
      result = sub_25A6BC(&word_356638, a2);
      if ( *(_DWORD *)(v6 + 52) || !*(_DWORD *)(v6 + 16) )
      {
        result = sub_25A418(a2, (const char *)&word_356638);
        v7 = *(int **)(v6 + 52);
        if ( v7 )
          result = sub_53DC0(*v7, *(char **)(v6 + 56), -1, a2);
        if ( !*(_DWORD *)(v6 + 16) )
          result = sub_53DC0(dword_474744, "", *(_DWORD *)(v6 + 8), a2);
        if ( *(_DWORD *)(v6 + 44) || *(_DWORD *)(v6 + 48) )
        {
          result = sub_25A418(a2, "\nThis command has a hook (or hooks) defined:\n");
          v8 = *(_DWORD *)(v6 + 44);
          if ( v8 )
            result = sub_25A418(a2, "\tThis command is run after  : %s (pre hook)\n", *(const char **)(v8 + 4));
          v9 = *(_DWORD *)(v6 + 48);
          if ( v9 )
            return sub_25A418(a2, "\tThis command is run before : %s (post hook)\n", *(const char **)(v9 + 4));
        }
      }
    }
  }
  else if ( v3 )
  {
    do
    {
      if ( (*(_BYTE *)(v3 + 12) & 0x40) == 0 && !*(_DWORD *)(v3 + 16) )
      {
        sub_25A418(a2, "\nCommand class: %s\n\n", *(const char **)(v3 + 4));
        result = sub_53B54(dword_474744, *(_DWORD *)(v3 + 8), (int)"", 1, a2);
      }
      v3 = *(_DWORD *)v3;
    }
    while ( v3 );
    for ( i = dword_474744; i; i = *(_DWORD *)i )
    {
      if ( (*(_BYTE *)(i + 12) & 0x40) == 0 && *(_DWORD *)(i + 8) == -1 )
      {
        v11 = v5 == 0;
        v5 = 1;
        if ( v11 )
          sub_25A418(a2, "\nUnclassified commands\n\n");
        result = sub_53C40(i, "", 1, a2);
      }
    }
  }
  return result;
}
