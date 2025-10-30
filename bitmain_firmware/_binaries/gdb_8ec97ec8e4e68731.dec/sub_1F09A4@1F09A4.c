FILE *__fastcall sub_1F09A4(const char *a1, const char *a2, int a3)
{
  int v5; // r0
  int v6; // r0
  int v7; // r0
  size_t v8; // r10
  char *v9; // r8
  int v10; // r5
  __int64 v11; // r6
  signed int v12; // r4
  size_t v13; // r0
  int v14; // r0
  int v15; // r0
  int v16; // r0
  FILE *result; // r0
  void *v18; // [sp+14h] [bp-20h]
  _DWORD *v19; // [sp+18h] [bp-1Ch]
  int v21; // [sp+24h] [bp-10h] BYREF
  int v22; // [sp+28h] [bp-Ch] BYREF
  FILE *stream; // [sp+2Ch] [bp-8h] BYREF

  v5 = sub_16F654((int)a1);
  ((void (__fastcall *)(int))loc_1E2770)(v5);
  if ( !*(_DWORD *)(dword_488C94 + 56) )
    sub_946E0("command can only be used with remote target");
  sub_967F0(&stream, (int)a1, "rb");
  if ( !stream )
    sub_258B04(a1);
  v6 = sub_231934(2);
  v7 = sub_1E62F8(v6, 0, a2, 1537, 448, 0, &v22);
  v21 = v7;
  if ( v7 == -1 )
    sub_1E152C(v22);
  v8 = sub_1E2890(v7);
  v9 = (char *)sub_93028(v8);
  v18 = sub_9253C(1970868, (int)v9);
  v10 = 0;
  v11 = 0;
  v12 = 0;
  v19 = sub_9253C((int)sub_1E65DC, (int)&v21);
  while ( v10 )
  {
LABEL_9:
    v14 = sub_231934(2);
    v15 = sub_1E6438(v14, v21, (int)v9, v12, v11, &v22);
    if ( v15 < 0 )
      sub_1E152C(v22);
    if ( !v15 )
      sub_946E0("Remote write of %d bytes returned 0!", v12);
    if ( v15 < v12 )
    {
      v12 -= v15;
      v11 += v15;
      memmove(v9, &v9[v15], v12);
    }
    else
    {
      v11 += v15;
      v12 = v10;
      if ( v10 )
        goto LABEL_13;
    }
  }
  v13 = fread(&v9[v12], 1u, v8 - v12, stream);
  if ( v13 )
  {
    v12 += v13;
    goto LABEL_9;
  }
  if ( ferror(stream) )
    sub_946E0("Error reading %s.", a1);
  if ( v12 )
  {
    v10 = 1;
    goto LABEL_9;
  }
LABEL_13:
  sub_92640(v19);
  v16 = sub_231934(2);
  if ( sub_1E6548(v16, v21, &v22) )
    sub_1E152C(v22);
  if ( a3 )
    sub_259F10("Successfully sent file \"%s\".\n", a1);
  sub_92620(v18);
  result = stream;
  if ( stream )
    return (FILE *)fclose(stream);
  return result;
}
