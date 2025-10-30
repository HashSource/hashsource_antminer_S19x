int __fastcall sub_1CAB10(int a1, int a2, int a3, int a4)
{
  unsigned __int8 *v8; // r11
  int (****v9)(); // r7
  int v10; // r8
  int (***v11)(); // r4
  int (***v12)(); // t1
  unsigned __int8 *v13; // r0
  unsigned __int8 *v14; // r7
  char *v15; // r8
  char *v16; // r0
  const char *v17; // r7
  char *v18; // r9
  __int64 v19; // r0
  int v20; // r1
  int v21; // r3
  char *v23; // r3
  _DWORD *v24; // r5
  char *v25; // r0
  const char *v26; // r2
  const char *v27; // r3
  _BYTE *v28; // [sp+Ch] [bp-40h]
  unsigned __int8 *v29; // [sp+10h] [bp-3Ch] BYREF
  int v30; // [sp+14h] [bp-38h] BYREF
  char *s; // [sp+18h] [bp-34h] BYREF
  _BYTE v32[16]; // [sp+20h] [bp-2Ch] BYREF
  void *ptr; // [sp+30h] [bp-1Ch] BYREF
  _BYTE v34[20]; // [sp+38h] [bp-14h] BYREF

  if ( sub_19CC70(a2) != 3 )
  {
    v19 = sub_94700(
            (int)"probe.c",
            127,
            "%s: Assertion `%s' failed.",
            "std::vector<symtab_and_line> parse_probes(const event_location*, program_space*, linespec_result*)",
            "event_location_type (location) == PROBE_LOCATION");
    goto LABEL_45;
  }
  v8 = (unsigned __int8 *)((int (__fastcall *)(int))loc_19CE74)(a2);
  v29 = v8;
  v9 = (int (****)())dword_487D10;
  v10 = dword_487D14;
  do
  {
    if ( (int (****)())v10 == v9 )
      sub_946E0("'%s' is not a probe linespec", (const char *)v8);
    v12 = *v9++;
    v11 = v12;
  }
  while ( !((int (__fastcall *)(int (***)(), unsigned __int8 **))**v12)(v12, &v29) );
  v13 = sub_935D0(v29);
  v14 = v13;
  if ( !*v13 )
    sub_946E0("argument to `%s' missing", (const char *)v8);
  v28 = sub_9364C(v13);
  s = v32;
  sub_1C9B48(&s, v14, (int)v28);
  v15 = s;
  v16 = strchr(s, 58);
  v17 = v16;
  if ( !v16 )
  {
    if ( *v15 )
    {
      v18 = 0;
      goto LABEL_14;
    }
LABEL_32:
    sub_946E0("no probe name specified");
  }
  v18 = v16 + 1;
  *v16 = 0;
  LODWORD(v19) = strchr(v16 + 1, 58);
  v17 = (const char *)v19;
  if ( (_DWORD)v19 )
  {
    v17 = v15;
    *(_BYTE *)v19 = 0;
    v15 = (char *)(v19 + 1);
  }
  else
  {
    v23 = v18;
    v18 = v15;
    v15 = v23;
  }
  if ( !*v15 )
    goto LABEL_32;
  if ( !*v18 )
    sub_946E0("invalid provider name");
  if ( v17 && !*v17 )
LABEL_45:
    sub_946E0("invalid objfile name", HIDWORD(v19));
LABEL_14:
  *(_DWORD *)a1 = 0;
  *(_DWORD *)(a1 + 4) = 0;
  *(_DWORD *)(a1 + 8) = 0;
  if ( a3 )
  {
    sub_1CA950(v11, a3, v17, v18, v15, a1);
  }
  else
  {
    v24 = (_DWORD *)dword_487D28;
    if ( !dword_487D28 )
    {
LABEL_36:
      v26 = "<any>";
      if ( v18 )
        v27 = v18;
      else
        v27 = "<any>";
      if ( v17 )
        v26 = v17;
      sub_92F64(2, "No probe matching objfile=`%s', provider=`%s', name=`%s'", v26, v27, v15);
      if ( *(_DWORD *)a1 )
        sub_339E64(*(void **)a1);
      v25 = s;
      if ( s != v32 )
        sub_339E64(s);
      sub_338FFC(v25);
    }
    do
    {
      sub_1CA950(v11, (int)v24, v17, v18, v15, a1);
      v24 = (_DWORD *)*v24;
    }
    while ( v24 );
  }
  if ( *(_DWORD *)a1 == *(_DWORD *)(a1 + 4) )
    goto LABEL_36;
  if ( a4 )
  {
    ptr = v34;
    sub_1C9B48(&ptr, v8, (int)v28);
    *(_BYTE *)a4 = 1;
    *(_BYTE *)(a4 + 1) = 1;
    sub_19CE30(&v30, (int)ptr);
    v20 = *(_DWORD *)(a4 + 4);
    v21 = v30;
    v30 = 0;
    *(_DWORD *)(a4 + 4) = v21;
    if ( v20 )
    {
      ((void (__fastcall *)(int))loc_19D154)(a4 + 4);
      if ( v30 )
        ((void (__fastcall *)(int *))loc_19D154)(&v30);
    }
    if ( ptr != v34 )
      sub_339E64(ptr);
  }
  if ( s != v32 )
    sub_339E64(s);
  return a1;
}
