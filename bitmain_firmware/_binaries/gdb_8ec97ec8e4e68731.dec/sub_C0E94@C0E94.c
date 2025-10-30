int __fastcall sub_C0E94(int a1, _DWORD *a2)
{
  const char *v4; // r0
  int v5; // r4
  int v6; // r2
  int v7; // r6
  int result; // r0
  int v9; // r2
  int v10; // r7
  unsigned int v11; // r4
  const char *v12; // r3
  char *v13; // r10
  int v14; // r2
  int v15; // r3
  int v16; // lr
  int v17; // r2
  unsigned int v18; // r12
  int v19; // lr
  int v20; // r3
  int v21; // t1
  int v22; // r10
  const char *v23; // r2
  int v24; // r6

  v4 = (const char *)sub_25AC8C(a2[3], a2[4]);
  sub_25A418(a1, "Scope: %s\n", v4);
  sub_25A418(a1, "Reg mask:");
  if ( (int)a2[10] > 0 )
  {
    v5 = 0;
    do
    {
      v6 = *(unsigned __int8 *)(a2[11] + v5++);
      sub_25A418(a1, " %02x", v6);
    }
    while ( a2[10] > v5 );
  }
  v7 = 0;
  result = sub_25A418(a1, (const char *)&word_356638);
LABEL_5:
  v9 = a2[1];
  if ( v9 > v7 )
  {
    while ( 1 )
    {
      v10 = v7 + 1;
      v11 = *(unsigned __int8 *)(*a2 + v7);
      if ( v11 > 0x34 || (v12 = (const char *)dword_46BC24[5 * v11], v13 = (char *)&dword_46BC24[5 * v11], !v12) )
      {
        v14 = v7;
        v15 = *(unsigned __int8 *)(*a2 + v7++);
        result = sub_25A418(a1, "%3d  <bad opcode %02x>\n", v14, v15);
        goto LABEL_5;
      }
      if ( v9 < v10 + *((_DWORD *)v13 + 1) )
        return sub_25A418(a1, "%3d  <incomplete opcode %s>\n", v7, v12);
      sub_25A418(a1, "%3d  %s", v7);
      if ( *((int *)v13 + 1) > 0 )
      {
        sub_25A6BC(&word_3E1F84, a1);
        v16 = *((_DWORD *)v13 + 1);
        if ( a2[1] < v16 + v10 )
          sub_946E0("GDB bug: ax-general.c (read_const): incomplete constant");
        if ( v16 <= 0 )
        {
          v18 = 0;
          v20 = 0;
        }
        else
        {
          v17 = *a2 + v7;
          v18 = 0;
          v19 = v17 + v16;
          v20 = 0;
          do
          {
            v21 = *(unsigned __int8 *)++v17;
            v20 = (v20 << 8) | HIBYTE(v18);
            v18 = v21 | (v18 << 8);
          }
          while ( v19 != v17 );
        }
        sub_266EA4(a1, 100, 0, v20, v18, v20);
      }
      else if ( v11 == 52 )
      {
        v22 = v7 + 4;
        v23 = (const char *)(*a2 + v7 + 4);
        v24 = *(unsigned __int8 *)(*a2 + v7 + 3) + (*(unsigned __int8 *)(*a2 + v7 + 2) << 8) - 1;
        sub_25A418(a1, " \"%s\", %d args", v23, *(unsigned __int8 *)(*a2 + v10));
        v7 = v24 + v22;
      }
      result = sub_25A418(a1, (const char *)&word_356638);
      v9 = a2[1];
      v7 += dword_46BC24[5 * v11 + 1] + 1;
      if ( v9 <= v7 )
        return result;
    }
  }
  return result;
}
