void sub_2179D4()
{
  _DWORD *v0; // r10
  _DWORD *i; // r5
  _DWORD *v2; // r11
  int v3; // r6
  int v4; // r4
  const char *v5; // r0
  char *v6; // r0
  const char *v7; // r0

  v0 = (_DWORD *)dword_487D28;
  if ( dword_487D28 )
  {
    do
    {
      for ( i = (_DWORD *)v0[9]; i; i = (_DWORD *)*i )
      {
        v2 = (_DWORD *)i[5];
        if ( v2 )
        {
          v3 = 0;
          do
          {
            while ( 1 )
            {
              v4 = sub_21A6C4(v2);
              sub_258BD4(v4);
              if ( !v2[8] )
                break;
              v2 = (_DWORD *)*v2;
              if ( !v2 )
                goto LABEL_13;
            }
            if ( !v3 )
            {
              v5 = (const char *)sub_1B87A8((int)i);
              sub_259F10("{ objfile %s ", v5);
              sub_259B58("  ");
              v6 = sub_98EEC((int)i);
              sub_259F10("((struct objfile *) %s)\n", v6);
            }
            v7 = (const char *)((int (__fastcall *)(int))loc_2043D4)(v4);
            sub_259F10("  { symtab %s\n", v7);
            if ( !v2[8] )
              sub_259F10("    NULL blockvector\n");
            v3 = 1;
            sub_259F10("  }\n");
            v2 = (_DWORD *)*v2;
          }
          while ( v2 );
LABEL_13:
          if ( v3 )
            sub_259F10("}\n");
        }
      }
      v0 = (_DWORD *)*v0;
    }
    while ( v0 );
  }
}
