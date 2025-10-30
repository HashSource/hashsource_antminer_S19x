void __fastcall sub_203034(int a1)
{
  int v1; // r0
  int v2; // r0
  const char *v3; // r0
  int v4; // r1
  int v5; // r12
  int v6; // r3
  bool v7; // nf
  int v8; // r7
  _DWORD *v9; // r10
  _DWORD *i; // r6
  _DWORD *j; // r11
  const char *v12; // r4
  size_t v13; // r0
  int v14; // r0
  int v15; // r3
  _DWORD *v16; // r3
  _DWORD *v17; // [sp+Ch] [bp-18h]
  void *ptr[4]; // [sp+14h] [bp-10h] BYREF

  v1 = sub_220404(a1);
  v2 = sub_21D6B0(ptr, v1, 0, 1, 0);
  if ( ptr[0] )
  {
    v3 = (const char *)sub_220404(v2);
    sub_19B9EC(ptr, v3, 1u);
    v4 = *((_DWORD *)ptr[0] + 1);
    v5 = *(_DWORD *)ptr[0];
    v6 = *((_DWORD *)ptr[0] + 4) - (dword_46DB64 - 1);
    v7 = *((_DWORD *)ptr[0] + 4) - dword_46DB64 < 0;
    dword_4893EC = v4;
    if ( v7 != __OFSUB__(v6, 1) )
      v6 = 1;
    dword_4893FC = v6;
    dword_4893F8 = v5;
    if ( v4 )
    {
      sub_339E64(ptr[0]);
      return;
    }
    sub_339E64(ptr[0]);
  }
  dword_4893FC = 1;
  v8 = dword_487D2C;
  v9 = *(_DWORD **)(dword_487D2C + 36);
  v17 = v9;
  if ( !v9 )
    goto LABEL_24;
  do
  {
    for ( i = (_DWORD *)v9[5]; i; i = (_DWORD *)*i )
    {
      for ( j = (_DWORD *)i[3]; j; j = (_DWORD *)*j )
      {
        v12 = (const char *)j[3];
        v13 = strlen(v12);
        if ( v13 <= 2 || strcmp(&v12[v13 - 2], ".h") && strcmp(v12, aCNamespaces) )
        {
          dword_4893F8 = v8;
          dword_4893EC = (int)j;
        }
      }
    }
    v9 = (_DWORD *)*v9;
  }
  while ( v9 );
  v14 = dword_4893EC;
  if ( !dword_4893EC )
  {
    do
    {
      v15 = v17[33];
      if ( v15 )
        v14 = (*(int (__fastcall **)(_DWORD *))(*(_DWORD *)(v15 + 40) + 4))(v17);
      v16 = v17;
      if ( v14 )
        dword_4893EC = v14;
      v17 = (_DWORD *)*v17;
    }
    while ( *v16 );
LABEL_24:
    if ( !dword_4893EC )
      sub_946E0("Can't find a default source file");
  }
}
