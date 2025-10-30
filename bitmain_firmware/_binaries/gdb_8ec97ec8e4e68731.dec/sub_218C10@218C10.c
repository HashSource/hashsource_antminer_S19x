int __fastcall sub_218C10(int result)
{
  _DWORD *v1; // r6
  int i; // r4
  const char *v3; // r0
  int v4; // r1
  int v5; // r1
  int v6; // r1
  int v7; // r1
  int v8; // r1
  int v9; // r3
  _DWORD *v10; // r12
  int v11; // r9
  _DWORD *v12; // r0
  int v13; // r1
  _DWORD *v14; // r3
  int v15; // r2
  int v16; // r10
  int v17; // r1
  int v18; // r0
  char *v19; // r0
  int v20; // r0
  char *v21; // r0
  struct obstack *v22; // r0
  int v23; // r0
  int v24; // r0
  int v25; // r0

  v1 = (_DWORD *)dword_487D28;
  if ( dword_487D28 )
  {
    do
    {
      for ( i = v1[9]; i; i = *(_DWORD *)i )
      {
        sub_258BD4(result);
        v3 = (const char *)sub_1B87A8(i);
        sub_259F10("Statistics for '%s':\n", v3);
        v4 = *(_DWORD *)(i + 196);
        if ( v4 > 0 )
          sub_259F10("  Number of \"stab\" symbols read: %d\n", v4);
        v5 = *(_DWORD *)(*(_DWORD *)(i + 40) + 88);
        if ( v5 > 0 )
          sub_259F10("  Number of \"minimal\" symbols read: %d\n", v5);
        v6 = *(_DWORD *)(i + 188);
        if ( v6 > 0 )
          sub_259F10("  Number of \"partial\" symbols read: %d\n", v6);
        v7 = *(_DWORD *)(i + 192);
        if ( v7 > 0 )
          sub_259F10("  Number of \"full\" symbols read: %d\n", v7);
        v8 = *(_DWORD *)(i + 200);
        if ( v8 > 0 )
          sub_259F10("  Number of \"types\" defined: %d\n", v8);
        v9 = *(_DWORD *)(i + 132);
        if ( v9 )
          (*(void (__fastcall **)(int))(*(_DWORD *)(v9 + 40) + 20))(i);
        v10 = *(_DWORD **)(i + 20);
        if ( v10 )
        {
          v11 = 0;
          v12 = *(_DWORD **)(i + 20);
          v13 = 0;
          do
          {
            v14 = (_DWORD *)v12[3];
            while ( v14 )
            {
              v15 = v14[2];
              ++v13;
              v14 = (_DWORD *)*v14;
              if ( v15 )
                ++v11;
            }
            v12 = (_DWORD *)*v12;
          }
          while ( v12 );
          v16 = 0;
          do
          {
            v10 = (_DWORD *)*v10;
            ++v16;
          }
          while ( v10 );
        }
        else
        {
          v11 = 0;
          v13 = 0;
          v16 = 0;
        }
        sub_259F10("  Number of symbol tables: %d\n", v13);
        sub_259F10("  Number of symbol tables with line tables: %d\n", v11);
        sub_259F10("  Number of symbol tables with blockvectors: %d\n", v16);
        v17 = *(_DWORD *)(i + 204);
        if ( v17 > 0 )
          sub_259F10("  Space used by string tables: %d\n", v17);
        v18 = obstack_memory_used((struct obstack *)(i + 48));
        v19 = sub_98880(v18, 0);
        sub_259F10("  Total memory used for objfile obstack: %s\n", v19);
        v20 = obstack_memory_used(*(struct obstack **)(i + 40));
        v21 = sub_98880(v20, 0);
        sub_259F10("  Total memory used for BFD obstack: %s\n", v21);
        v22 = (struct obstack *)sub_1D057C(*(_DWORD *)(i + 92));
        v23 = sub_C1DDC(v22);
        sub_259F10("  Total memory used for psymbol cache: %d\n", v23);
        v24 = sub_C1DDC(*(struct obstack **)(*(_DWORD *)(i + 40) + 48));
        sub_259F10("  Total memory used for macro cache: %d\n", v24);
        v25 = sub_C1DDC(*(struct obstack **)(*(_DWORD *)(i + 40) + 44));
        result = sub_259F10("  Total memory used for file name cache: %d\n", v25);
      }
      v1 = (_DWORD *)*v1;
    }
    while ( v1 );
  }
  return result;
}
