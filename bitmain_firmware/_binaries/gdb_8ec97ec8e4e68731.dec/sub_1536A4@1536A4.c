int sub_1536A4()
{
  int v0; // r4
  FILE *v1; // r0
  int v2; // r3
  int v3; // r0
  int v5; // r0
  void *v6; // r0
  char v7; // [sp+2h] [bp-12h] BYREF
  char v8; // [sp+3h] [bp-11h] BYREF
  int v9[2]; // [sp+4h] [bp-10h] BYREF
  int v10; // [sp+Ch] [bp-8h]

  v0 = dword_487668;
  sub_92080(v9);
  if ( !dword_48766C )
  {
    v5 = fileno(*(FILE **)(v0 + 48));
    if ( !isatty(v5) )
    {
      setbuf(*(FILE **)(v0 + 48), 0);
      dword_48766C = 1;
    }
  }
  while ( 1 )
  {
    v1 = *(FILE **)(v0 + 48);
    if ( !v1 )
      v1 = *(FILE **)(v0 + 44);
    v2 = fgetc(v1);
    if ( v2 == -1 )
      break;
    if ( v2 == 10 )
    {
      if ( v10 && *(_BYTE *)(v9[0] + v10 - 1) == 13 )
        --v10;
      goto LABEL_9;
    }
    v7 = v2;
    sub_92044(v9, &v7, 1u);
  }
  if ( v10 )
  {
LABEL_9:
    v8 = 0;
    sub_92044(v9, &v8, 1u);
    v3 = sub_92094(v9);
    return (*(int (__fastcall **)(int))(v0 + 24))(v3);
  }
  v6 = (void *)sub_92094(v9);
  if ( v6 )
    free(v6);
  return (*(int (__fastcall **)(_DWORD))(v0 + 24))(0);
}
