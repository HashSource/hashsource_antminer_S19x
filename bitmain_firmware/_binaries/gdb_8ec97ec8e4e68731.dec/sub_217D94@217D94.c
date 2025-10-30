int __fastcall sub_217D94(int a1)
{
  int result; // r0
  _DWORD *i; // r4
  int v4; // r0
  const char *v5; // r0
  int v6; // r0
  _DWORD *v7; // r0
  int v8; // r0
  int v9; // r5
  _DWORD *v10; // r0
  int v11; // r3
  _DWORD *j; // r8
  _DWORD *k; // r11
  const char *v14; // r0
  int v15; // r0
  _DWORD *v16; // r0
  _DWORD *v18; // [sp+4h] [bp-8h]

  result = sub_243C34(a1);
  if ( a1 )
    result = re_comp(a1);
  v18 = (_DWORD *)dword_487D28;
  if ( dword_487D28 )
  {
    do
    {
      for ( i = (_DWORD *)v18[9]; i; i = (_DWORD *)*i )
      {
        sub_258BD4(result);
        if ( a1 )
        {
          v4 = sub_1B87A8((int)i);
          result = re_exec(v4);
          if ( !result )
            continue;
        }
        v5 = (const char *)sub_1B87A8((int)i);
        sub_259F10("\nObject file %s:  ", v5);
        v6 = sub_259F10("Objfile at ");
        v7 = (_DWORD *)sub_242F8C(v6);
        sub_25A44C(i, *v7);
        v8 = sub_259F10(", bfd at ");
        v9 = i[9];
        v10 = (_DWORD *)sub_242F8C(v8);
        sub_25A44C(v9, *v10);
        result = sub_259F10(", %d minsyms\n\n", *(_DWORD *)(i[10] + 84));
        v11 = i[33];
        if ( v11 )
          result = (*(int (__fastcall **)(_DWORD *))(*(_DWORD *)(v11 + 40) + 24))(i);
        if ( i[5] )
        {
          sub_259F10("Symtabs:\n");
          for ( j = (_DWORD *)i[5]; j; j = (_DWORD *)*j )
          {
            for ( k = (_DWORD *)j[3]; k; k = (_DWORD *)*k )
            {
              v14 = (const char *)((int (__fastcall *)(_DWORD *))loc_2043D4)(k);
              v15 = sub_259F10("%s at ", v14);
              v16 = (_DWORD *)sub_242F8C(v15);
              sub_25A44C(k, *v16);
              sub_259F10(", ");
              if ( *(_DWORD **)(k[1] + 4) != i )
                sub_259F10("NOT ON CHAIN!  ");
              sub_259B58("  ");
            }
          }
          result = sub_259F10("\n\n");
        }
      }
      v18 = (_DWORD *)*v18;
    }
    while ( v18 );
  }
  return result;
}
