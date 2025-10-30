_DWORD *__fastcall sub_7F64C(_DWORD *a1, int a2, _DWORD *a3)
{
  _DWORD *v5; // r0
  _DWORD *v6; // r6
  bool v7; // zf
  int v9; // r3

  dword_474F5C = a2;
  dword_474F60 = a2;
  dword_474F68 = 0;
  dword_474F64 = 0;
  v5 = (_DWORD *)sub_93028(1608);
  v5[1] = 0;
  *v5 = 0;
  dword_474F58 = (int)v5;
  v6 = (_DWORD *)sub_9836C(52);
  *v6 = 0;
  v6[1] = 0;
  obstack_begin((struct obstack *)(v6 + 2), 0, 0, (void *(*)(int))sub_93028, sub_7B664);
  *v6 = dword_474F58;
  if ( sub_7CD18() )
  {
    v7 = dword_474F64 == 0;
    if ( dword_474F64 )
      v7 = a3 == 0;
    if ( !v7 )
    {
      snprintf(byte_474F90, 0x3Au, "%s, near `%s", (const char *)dword_474F64, (const char *)dword_474F68);
      *(_WORD *)&byte_474F90[strlen(byte_474F90)] = 39;
      *a3 = byte_474F90;
    }
    *a1 = 0;
    sub_7F5D0((int)v6);
    sub_33AC04(v6);
    return a1;
  }
  else
  {
    v9 = dword_474F8C;
    *a1 = v6;
    dword_474F8C = 0;
    v6[1] = v9;
    return a1;
  }
}
