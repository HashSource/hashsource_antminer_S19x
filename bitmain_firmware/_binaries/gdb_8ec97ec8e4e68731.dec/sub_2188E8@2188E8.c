int __fastcall sub_2188E8(int a1)
{
  int result; // r0
  _DWORD *v3; // r9
  _DWORD *v4; // r5
  int v5; // r0
  int v6; // r4
  int v7; // r6
  char *v8; // r0
  char *v9; // r0
  char *v10; // r4
  char *v11; // r0
  int *v12; // r7
  char *v13; // r0
  int *v14; // r6
  int v15; // r4
  int v16; // r9
  int v17; // t1
  char *v18; // r0
  _DWORD *v19; // [sp+10h] [bp-14h]
  _DWORD *v20; // [sp+18h] [bp-Ch]
  _DWORD *v21; // [sp+1Ch] [bp-8h]

  result = sub_243C34(a1);
  if ( a1 )
    result = re_comp(a1);
  v21 = (_DWORD *)dword_487D28;
  if ( dword_487D28 )
  {
    do
    {
      v20 = (_DWORD *)v21[9];
      if ( !v20 )
        goto LABEL_19;
      do
      {
        v3 = (_DWORD *)v20[5];
        if ( !v3 )
          goto LABEL_18;
        do
        {
          v4 = (_DWORD *)v3[3];
          if ( !v4 )
            goto LABEL_17;
          v19 = v3;
          do
          {
            while ( 1 )
            {
              while ( 1 )
              {
                sub_258BD4(result);
                if ( !a1 )
                  break;
                v5 = ((int (__fastcall *)(_DWORD *))loc_2043D4)(v4);
                result = re_exec(v5);
                if ( result )
                  break;
LABEL_15:
                v4 = (_DWORD *)*v4;
                if ( !v4 )
                  goto LABEL_16;
              }
              v6 = *(_DWORD *)(v4[1] + 4);
              v7 = sub_1B87A8(v6);
              v8 = sub_98EEC(v6);
              sub_259F10("objfile: %s ((struct objfile *) %s)\n", v7, v8);
              v9 = sub_98EEC(v4[1]);
              sub_259F10("compunit_symtab: ((struct compunit_symtab *) %s)\n", v9);
              v10 = sub_204308((int)v4);
              v11 = sub_98EEC((int)v4);
              sub_259F10("symtab: %s ((struct symtab *) %s)\n", v10, v11);
              v12 = (int *)v4[2];
              v13 = sub_98EEC((int)v12);
              sub_259F10("linetable: ((struct linetable *) %s):\n", v13);
              if ( !v12 )
                break;
              if ( *v12 > 0 )
              {
                result = sub_259F10("%-6s %6s %s\n", "INDEX", "LINE", "ADDRESS");
                if ( *v12 > 0 )
                {
                  v14 = v12;
                  v15 = 0;
                  do
                  {
                    v16 = v14[1];
                    v17 = v14[2];
                    v14 += 2;
                    v18 = sub_98E1C(v17);
                    result = sub_259F10("%-6d %6d %s\n", v15++, v16, v18);
                  }
                  while ( *v12 > v15 );
                }
                goto LABEL_15;
              }
              result = sub_259F10("Line table has no lines.\n");
              v4 = (_DWORD *)*v4;
              if ( !v4 )
                goto LABEL_16;
            }
            result = sub_259F10("No line table.\n");
            v4 = (_DWORD *)*v4;
          }
          while ( v4 );
LABEL_16:
          v3 = v19;
LABEL_17:
          v3 = (_DWORD *)*v3;
        }
        while ( v3 );
LABEL_18:
        v20 = (_DWORD *)*v20;
      }
      while ( v20 );
LABEL_19:
      v21 = (_DWORD *)*v21;
    }
    while ( v21 );
  }
  return result;
}
