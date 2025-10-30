void __fastcall sub_554BC(_BYTE *a1, char *a2, const char *a3)
{
  __int64 v4; // r0
  int v6; // r4
  void *v7; // r5
  const void *v8; // r7
  int v9; // r0
  int v10; // r8
  const char *v11; // r7
  void *src; // r9
  int v13; // r0
  const char *v14; // r1
  int v15; // [sp+4h] [bp-20h]
  _BYTE *v16; // [sp+14h] [bp-10h] BYREF
  void *ptr; // [sp+1Ch] [bp-8h] BYREF

  v16 = a1;
  LODWORD(v4) = &ptr;
  HIDWORD(v4) = &v16;
  sub_553F0(v4);
  if ( !v16 || !*v16 )
  {
    if ( *a2 == 97 )
      v14 = "append";
    else
      v14 = "dump";
    sub_946E0("No value to %s.", v14, "append", "dump");
  }
  v6 = sub_14CC6C();
  if ( !v6 )
    sub_946E0("Invalid expression.");
  if ( !strcmp(a3, "binary") )
  {
    v7 = ptr;
    v8 = (const void *)sub_26E978(v6);
    v9 = sub_26BC70(v6);
    sub_54EE4((int)v7, a2, v8, *(_DWORD *)(v9 + 20), *(_DWORD *)(v9 + 20));
  }
  else
  {
    if ( *(_DWORD *)nullsub_31(v6) )
    {
      v10 = ((int (__fastcall *)(int))loc_26C09C)(v6);
    }
    else
    {
      sub_946B0("value is not an lval: address assumed to be zero");
      v10 = 0;
    }
    v11 = (const char *)ptr;
    src = (void *)sub_26E978(v6);
    v13 = sub_26BC70(v6);
    sub_54F58(v11, a2, (int)a3, v10, src, v15, *(_DWORD *)(v13 + 20));
  }
  if ( ptr )
    free(ptr);
}
