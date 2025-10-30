void __fastcall sub_584D4(const char *a1, int a2)
{
  int v4; // r1
  int v5; // r0
  int v6; // r6
  void *v7; // r0
  _DWORD *v8; // r5
  int v9; // r0
  int v10; // r4
  size_t v11; // r0
  const char *v12; // r0
  _DWORD *v13; // r8
  const char *v14; // r5
  _DWORD *v15; // r4
  size_t v16; // r0
  _WORD *v17; // r0
  const char *v18; // [sp+Ch] [bp-94h] BYREF
  unsigned __int8 *v19; // [sp+14h] [bp-8Ch] BYREF
  _DWORD *v20; // [sp+18h] [bp-88h] BYREF
  _DWORD *v21; // [sp+1Ch] [bp-84h] BYREF
  _BYTE v22[128]; // [sp+20h] [bp-80h] BYREF

  v18 = a1;
  v4 = *sub_57328(&v18);
  v19 = (unsigned __int8 *)v18;
  v5 = sub_544C8(&v19, v4, "", 0, 1);
  if ( *(_DWORD *)(v5 + 8) != 14 )
    sub_946E0("Command \"%s\" is built-in.", a1);
  v6 = v5;
  sub_93170(v22, 128, "Type documentation for \"%s\".", a1);
  sub_5807C(&v20, (int)v22, a2, 0, 0, 0);
  v7 = *(void **)(v6 + 28);
  if ( v7 )
    free(v7);
  v8 = v20;
  if ( v20 )
  {
    v10 = 0;
    do
    {
      v11 = strlen((const char *)v8[1]);
      v8 = (_DWORD *)*v8;
      v10 += 1 + v11;
    }
    while ( v8 );
    v9 = v10 + 1;
  }
  else
  {
    v9 = 1;
  }
  v12 = (const char *)sub_93028(v9);
  v13 = v20;
  *v12 = 0;
  v14 = v12;
  if ( v13 )
  {
    v15 = v13;
    do
    {
      v16 = strlen(v14);
      v17 = (_WORD *)stpcpy(&v14[v16], v15[1]);
      if ( !*v15 )
        break;
      *v17 = 10;
      v15 = (_DWORD *)*v15;
    }
    while ( v15 );
    *(_DWORD *)(v6 + 28) = v14;
    v21 = v13;
    sub_57E18(&v21);
  }
  else
  {
    *(_DWORD *)(v6 + 28) = v12;
  }
}
