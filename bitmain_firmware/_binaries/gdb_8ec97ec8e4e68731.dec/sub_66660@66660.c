int __fastcall sub_66660(int a1, int a2, int a3)
{
  const char *v4; // r4
  int v6; // r0
  int v7; // r0
  void *v8; // r0
  int result; // r0
  int v10; // r0
  int v11; // r0
  int v12; // r0
  int v13; // r4
  int v14; // r4
  int v15; // [sp+24h] [bp-18h] BYREF
  int v16; // [sp+28h] [bp-14h] BYREF
  void *ptr; // [sp+2Ch] [bp-10h] BYREF

  if ( !a3 )
    sub_946E0("trace selection mode is required");
  v4 = *(const char **)a2;
  if ( !strcmp(*(const char **)a2, "none") )
    return sub_24B678(0, -1, 0);
  v6 = sub_249744();
  sub_24B3A0(v6);
  if ( !strcmp(v4, "frame-number") )
  {
    if ( a3 != 2 )
      sub_946E0("frame number is required");
    v7 = strtol(*(const char **)(a2 + 4), 0, 10);
    v8 = (void *)sub_24B678(0, v7, 0);
    goto LABEL_6;
  }
  if ( !strcmp(v4, "tracepoint-number") )
  {
    if ( a3 != 2 )
      sub_946E0("tracepoint number is required");
    v12 = strtol(*(const char **)(a2 + 4), 0, 10);
    v8 = (void *)sub_24B678(2, v12, 0);
    goto LABEL_6;
  }
  if ( !strcmp(v4, "pc") )
  {
    if ( a3 != 2 )
      sub_946E0("PC is required");
    v11 = sub_14CB9C(*(_DWORD *)(a2 + 4));
    v8 = (void *)sub_24B678(1, 0, v11);
    goto LABEL_6;
  }
  if ( !strcmp(v4, "pc-inside-range") )
  {
    if ( a3 == 3 )
    {
      v14 = sub_14CB9C(*(_DWORD *)(a2 + 4));
      sub_14CB9C(*(_DWORD *)(a2 + 8));
      v8 = (void *)sub_24B678(3, 0, v14);
      goto LABEL_6;
    }
LABEL_33:
    sub_946E0("Start and end PC are required");
  }
  if ( strcmp(v4, "pc-outside-range") )
  {
    if ( strcmp(v4, "line") )
      sub_946E0("Invalid mode '%s'", v4);
    if ( a3 != 2 )
      sub_946E0("Line is required");
    sub_19B9EC(&ptr, *(_DWORD *)(a2 + 4), 1);
    if ( !*((_DWORD *)ptr + 1) )
      sub_946E0("Could not find the specified line");
    if ( *((int *)ptr + 4) <= 0
      || !sub_21E5C4(
            *(_DWORD *)ptr,
            *((_DWORD *)ptr + 1),
            *((_DWORD *)ptr + 2),
            *((_DWORD *)ptr + 3),
            *((_DWORD *)ptr + 4),
            *((_DWORD *)ptr + 5),
            *((_DWORD *)ptr + 6),
            *((_DWORD *)ptr + 7),
            *((_DWORD *)ptr + 8),
            *((_DWORD *)ptr + 9),
            &v15,
            &v16) )
    {
      sub_946E0("Could not find the specified line");
    }
    sub_24B678(3, 0, v15);
    v8 = ptr;
    if ( ptr )
      sub_339E64(ptr);
    goto LABEL_6;
  }
  if ( a3 != 3 )
    goto LABEL_33;
  v13 = sub_14CB9C(*(_DWORD *)(a2 + 4));
  sub_14CB9C(*(_DWORD *)(a2 + 8));
  v8 = (void *)sub_24B678(4, 0, v13);
LABEL_6:
  if ( sub_15D504(v8) || (result = sub_24B59C(), result >= 0) )
  {
    v10 = sub_15F7E8(0);
    return sub_20E7E8(v10, 1, 2);
  }
  return result;
}
