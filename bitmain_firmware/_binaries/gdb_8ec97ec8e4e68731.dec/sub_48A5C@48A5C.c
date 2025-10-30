int __fastcall sub_48A5C(int a1, int a2, int a3)
{
  int v3; // r4
  int v4; // r6
  int v5; // r0
  char *v6; // r5
  signed int v7; // r0
  int v8; // r6
  char *v9; // r0
  char *v10; // r0
  char *v11; // r0
  bool v12; // zf
  int v13; // r4
  _DWORD v15[3]; // [sp+Ch] [bp-58h] BYREF
  char *save_ptr; // [sp+18h] [bp-4Ch] BYREF
  int v17; // [sp+1Ch] [bp-48h] BYREF
  FILE *stream; // [sp+20h] [bp-44h] BYREF
  char s[64]; // [sp+24h] [bp-40h] BYREF

  v3 = 0;
  v15[0] = a1;
  v15[1] = a2;
  v15[2] = a3;
  save_ptr = 0;
  v4 = ps_getpid_0(v15);
  v5 = sub_98F68(v15);
  sprintf(s, "/proc/%lld/task/%lld/stat", (__int64)v4, (__int64)v5);
  sub_967F0((int)&stream, (int)s, "r");
  if ( !stream )
    return -1;
  v6 = 0;
  do
  {
    v6 = (char *)sub_93050(v6, v3 + 1024);
    v7 = fread(&v6[v3], 1u, 0x400u, stream);
    v3 += v7;
  }
  while ( v7 >= 1024 );
  v8 = 0;
  v6[v3] = 0;
  v9 = strrchr(v6, 41);
  if ( !v9 )
    goto LABEL_13;
  v10 = v9 + 1;
  if ( !v10 || !strtok_r(v10, (const char *)&word_3E1F84, &save_ptr) )
    goto LABEL_13;
  do
  {
    ++v8;
    v11 = strtok_r(0, (const char *)&word_3E1F84, &save_ptr);
    v12 = v8 == 36;
    if ( v8 != 36 )
      v12 = v11 == 0;
  }
  while ( !v12 );
  if ( !v11 || !sscanf(v11, "%d", &v17) )
LABEL_13:
    v17 = -1;
  free(v6);
  v13 = v17;
  if ( stream )
    fclose(stream);
  return v13;
}
